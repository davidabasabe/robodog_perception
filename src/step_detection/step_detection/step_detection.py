import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2
import numpy as np
import open3d as o3d
import sensor_msgs_py.point_cloud2 as pc2
from sensor_msgs.msg import PointCloud2
from collections import defaultdict
from numpy.lib import recfunctions as rfn


class StepDetection(Node):
    def __init__(self):
        super().__init__('step_detection')
        self.subscriber_ = self.create_subscription(PointCloud2, '/go2/Lidar', self.listener_callback, 10)
        self.current_lidar_points = None
        self.last_pcd = None

    def listener_callback(self, msg):
        pcd = self.msg_to_pcd(msg)
        merged_pcd = None
        if self.last_pcd:
            merged_pcd = pcd + self.last_pcd
        self.last_pcd = pcd
        pcd = merged_pcd or pcd
        if type(pcd) is None: return
        ground_cloud, plane_model, obstacle_cloud = self.segment_ground_and_obstacles(pcd)

        if obstacle_cloud is not None:
            step_cloud = self.detect_steps(obstacle_cloud)
            
            #if step_cloud is not None:
            #    print("Step detected...")
            #else:
            #    print("No step detected...")
        else:
            print("No point cloud data available for segmentation.")


    def msg_to_pcd(self, msg):
        point_cloud = pc2.read_points(msg)
        point_cloud = rfn.structured_to_unstructured(point_cloud[['x', 'y', 'z']])
        pcd = o3d.geometry.PointCloud()
        pcd.points = o3d.utility.Vector3dVector(point_cloud)
        return pcd

    def segment_ground_and_obstacles(self, point_cloud, distance_threshold=0.02, ransac_n=3, num_iterations=1000):
        """Segment ground plane and potential obstacles."""

        plane_model, inliers = point_cloud.segment_plane(
            distance_threshold=distance_threshold,
            ransac_n=ransac_n,
            num_iterations=num_iterations
        )
        ground_cloud = point_cloud.select_by_index(inliers)
        obstacle_cloud = point_cloud.select_by_index(inliers, invert=True)

        return ground_cloud, plane_model, obstacle_cloud
    
    def detect_steps(self, point_cloud, distance_threshold=0.06, ransac_n=10, num_iterations=1000,
                                        min_up_step_height=-0.24, max_up_step_height=-0.1, depth_tolerance=0.15):
        """
        Detect steps in the point cloud using RANSAC to fit horizontal planes, DBSCAN to cluster nearby points and depth consistency check to discard other obstacles.

        Parameters:
        - point_cloud: Open3D point cloud object.
        - distance_threshold: Maximum distance a point can be from the plane to be considered an inlier.
        - ransac_n: Number of points to sample for RANSAC.
        - num_iterations: Number of iterations for RANSAC.
        - min_up_step_height: Minimum height difference between steps and ground or other objects.
        - max_up_step_height: Maximum height difference (to exclude objects that are too tall to be steps).
        - depth_tolerance: Maximum allowed Z variance within each depth slice for consistency.

        Returns:
        - step_cloud: Open3D point cloud of the detected step (if any).
        """
        points = np.asarray(point_cloud.points)

        # If not enough points, return early
        if len(points) < 10:
            print("Not enough points in the point cloud. Skipping step detection.")
            return None

        # Perform RANSAC to detect planes in the point cloud
        plane_model, inliers = point_cloud.segment_plane(
            distance_threshold=distance_threshold,
            ransac_n=ransac_n,
            num_iterations=num_iterations
        )

        inlier_cloud, points = self.extract_horizontal_plane_points(plane_model, point_cloud, inliers)

        step_state = self.proper_height_check(points)
        print(step_state)
        if step_state == 0:
            return None

        largest_cluster_indices = self.find_largest_cluster_of_points(inlier_cloud)

       
        cluster_points, x_to_z_values = self.execute_planarity_test(inlier_cloud, largest_cluster_indices)

        step_cloud = self.extract_cloud_with_consistent_depth(inlier_cloud, cluster_points,
                                                     x_to_z_values, largest_cluster_indices, step_state=step_state)

        # Return None if the detected plane is not horizontal or does not meet criteria
        return step_state, step_cloud
    
    def extract_horizontal_plane_points(self, plane_model, point_cloud, inliers):
        points = None
        inlier_cloud = None
        normal_vector = plane_model[:3]
        # Check if the plane is horizontal (normal vector close to Z-axis)
        if np.abs(normal_vector[2]) > 0.90:
            inlier_cloud = point_cloud.select_by_index(inliers)
            points = np.asarray(inlier_cloud.points)
        return inlier_cloud, points
    

    def proper_height_check(self, points, min_up_step_height=-0.24, max_up_step_height=-0.1,
                            min_down_step_height=-0.6, max_down_step_height=-0.24) -> int:
        step_state = 0
        if points is not None:
            z_coordinates = points[:, 2]
            sorted_indices = np.argsort(z_coordinates)
            top_indices = sorted_indices[-max(1, int(len(z_coordinates) * 0.15)):]  
            top_heights = z_coordinates[top_indices]
            step_height = np.mean(top_heights)
            if min_up_step_height < step_height < max_up_step_height:
                step_state = 1
            elif min_down_step_height < step_height < max_down_step_height:
                step_state = 2

        return step_state
    

    def find_largest_cluster_of_points(self, inlier_cloud):
        largest_cluster_indices = None
        if inlier_cloud is not None:
            labels = np.array(inlier_cloud.cluster_dbscan(eps=0.02, min_points=5, print_progress=False))
            valid_labels = labels[labels != -1]
        if valid_labels.size > 0:
            # Find the largest valid cluster of points
            unique_labels, counts = np.unique(labels, return_counts=True)
            largest_cluster_label = unique_labels[np.argmax(counts)]
            largest_cluster_indices = np.where(labels == largest_cluster_label)[0]
        return largest_cluster_indices
    
    
    def execute_planarity_test(self, inlier_cloud, largest_cluster_indices):
        x_to_z_values = None
        cluster_points = None
        if inlier_cloud is not None and largest_cluster_indices is not None:
            # Planarity test
            cluster_points = np.asarray(inlier_cloud.select_by_index(largest_cluster_indices).points)
            z_variance = np.var(cluster_points[:, 2])  
            if z_variance < 0.01:  # Planarity threshold
                # Depth consistency check
                x_to_z_values = defaultdict(list)
        return cluster_points, x_to_z_values
    

    def extract_cloud_with_consistent_depth(self, inlier_cloud, cluster_points, x_to_z_values, 
                                   largest_cluster_indices, step_state, depth_tolerance=0.09):
        step_cloud = None
        if step_state == 1:
            step_info = "upwards"
        elif step_state == 2:
            step_info = "downwards"
        if inlier_cloud is not None and cluster_points is not None and x_to_z_values is not None:
            for x, _, z in cluster_points:
               x_to_z_values[round(x, 2)].append(z)
               is_consistent_depth = True
               for z_values in x_to_z_values.values():
                   unique_heights = np.unique(z_values)
                   if len(unique_heights) > 5 and np.ptp(unique_heights) > depth_tolerance:
                       is_consistent_depth = False
                       break
               if is_consistent_depth:
                   step_cloud = inlier_cloud.select_by_index(largest_cluster_indices)
                   #print(f"Step {step_info} detected!")
                   return step_cloud  # Step detected
         
def main(args=None):
    rclpy.init(args=args)
    step_detection = StepDetection()
    rclpy.spin(step_detection)
    step_detection.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()