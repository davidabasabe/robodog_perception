import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2
import numpy as np
import open3d as o3d
import sensor_msgs_py.point_cloud2 as pc2
from sensor_msgs.msg import PointCloud2
from collections import defaultdict
from numpy.lib import recfunctions as rfn
from robot_interfaces.msg import Stair

import matplotlib.pyplot as plt
import random
from collections import deque


class StepDetection(Node):
    def __init__(self):
        super().__init__('step_detection')
        self.subscriber_ = self.create_subscription(PointCloud2, '/go2/Lidar', self.listener_callback, 10)
        self.publisher_ = self.create_publisher(Stair, '/stair_detection', 10)
        self.current_lidar_points = []
        self.moving_average_height_diff = deque()
        self.moving_average_ground_height = deque()
        self.stair_msg = Stair()

    def listener_callback(self, msg):
        pcd = self.msg_to_pcd(msg)
        if type(pcd) is None: return

        self.current_lidar_points.append(np.asarray(pcd.points))

        if len(self.current_lidar_points) < 2:
            print("Not enough Lidar points")
            return

        if len(self.current_lidar_points) > 2:
            self.current_lidar_points.pop(0)

        compound_points = np.vstack(self.current_lidar_points)
        compound_points = self.crop_point_cloud(compound_points, x_range=(0.4, 1.5), y_range=(-0.3, 0.3), z_range=(-3.0, -0.15))
        compound_cloud = o3d.geometry.PointCloud()
        compound_cloud.points = o3d.utility.Vector3dVector(compound_points)

        self.find_planes(compound_cloud)
        return


    def msg_to_pcd(self, msg):
        point_cloud = pc2.read_points(msg)
        point_cloud = rfn.structured_to_unstructured(point_cloud[['x', 'y', 'z']])
        pcd = o3d.geometry.PointCloud()
        pcd.points = o3d.utility.Vector3dVector(point_cloud)
        return pcd        
    
    def crop_point_cloud(self, point_cloud, x_range, y_range, z_range):
        """Crop the point cloud to a region of interest."""
        mask =  (point_cloud[:, 0] > x_range[0]) & (point_cloud[:, 0] < x_range[1]) & \
                (point_cloud[:, 1] > y_range[0]) & (point_cloud[:, 1] < y_range[1]) & \
                (point_cloud[:, 2] > z_range[0]) & (point_cloud[:, 2] < z_range[1])
        return point_cloud[mask]
    
    def find_planes(self, point_cloud):
        distance_threshold = 0.04
        ransac_n = 10
        num_iterations = 50
        vertical_z_points = []
        vertical_x_points = []
        plane_z_points = []
        plane_x_points = []
        copy_point_cloud = point_cloud
        min_points_for_plane = 10

        plane_model, inliers = copy_point_cloud.segment_plane(
                distance_threshold=distance_threshold,
                ransac_n=ransac_n,
                num_iterations=num_iterations
            )
        copy_point_cloud = copy_point_cloud.select_by_index(inliers, invert=True)

        while len(copy_point_cloud.points) > min_points_for_plane:
            plane_model, inliers = copy_point_cloud.segment_plane(
                distance_threshold=distance_threshold,
                ransac_n=ransac_n,
                num_iterations=num_iterations
            )
            if len(inliers) < min_points_for_plane:
                break         
            normal_vector = plane_model[:3]

            # Check if the plane is horizontal (normal vector close to Z-axis)
            if np.abs(normal_vector[2]) > 0.97:
                inlier_cloud = point_cloud.select_by_index(inliers)
                labels = np.array(inlier_cloud.cluster_dbscan(eps=0.02, min_points=2, print_progress=False))
                valid_labels = labels[labels != -1]

                if valid_labels.size < 1:
                    copy_point_cloud = copy_point_cloud.select_by_index(inliers, invert=True)
                    continue
                # Find the largest valid cluster of points
                unique_labels, counts = np.unique(labels, return_counts=True)
                largest_cluster_label = unique_labels[np.argmax(counts)]
                largest_cluster_indices = np.where(labels == largest_cluster_label)[0]
                inlier_cloud = inlier_cloud.select_by_index(largest_cluster_indices)
                plane_z_points.append(np.mean(np.asarray(inlier_cloud.points)[:, 2]))
                plane_x_points.append(np.min(np.asarray(inlier_cloud.points)[:, 0]))
                
            elif np.abs(normal_vector[2]) < 0.03:
                inlier_cloud = point_cloud.select_by_index(inliers)
                labels = np.array(inlier_cloud.cluster_dbscan(eps=0.05, min_points=2, print_progress=False))
                valid_labels = labels[labels != -1]

                if valid_labels.size < 1:
                    copy_point_cloud = copy_point_cloud.select_by_index(inliers, invert=True)
                    continue
                # Find the largest valid cluster of points
                unique_labels, counts = np.unique(labels, return_counts=True)
                largest_cluster_label = unique_labels[np.argmax(counts)]
                largest_cluster_indices = np.where(labels == largest_cluster_label)[0]
                inlier_cloud = inlier_cloud.select_by_index(largest_cluster_indices)
                z_points = np.asarray(inlier_cloud.points)[:, 2]
                vertical_z_points.append(np.max(z_points))
                vertical_x_points.append(np.mean(np.asarray(inlier_cloud.points)[:, 0]))

            # Remove inliers from the point cloud
            copy_point_cloud = copy_point_cloud.select_by_index(inliers, invert=True)

        height_diff = 0

        if len(vertical_z_points) > 0:
            closest_cloud_index = np.argmin(vertical_x_points)
            plane_height = vertical_z_points[closest_cloud_index]
            height_diff = plane_height + 0.4
            closest_x_distance = vertical_x_points[closest_cloud_index]
        elif len(plane_x_points) > 0:
            closest_cloud_index = np.argmin(plane_x_points)
            plane_height = plane_z_points[closest_cloud_index]
            height_diff = plane_height + 0.4
            closest_x_distance = plane_x_points[closest_cloud_index]
        else:
            closest_x_distance = 0
        smoothened_height_diff = (sum(self.moving_average_height_diff) + height_diff) / (len(self.moving_average_height_diff) + 1)
        self.add_height_to_storage(smoothened_height_diff, self.moving_average_height_diff)
        self.stair_msg.distance = float(closest_x_distance)
        self.stair_msg.detected = False
        self.stair_msg.upstairs = False
        if 0.15 > smoothened_height_diff > 0.1:
        #if 0.15 > smoothened_height_diff > 0.05:
            #self.get_logger().info("step up!")
            self.stair_msg.upstairs = True
            self.stair_msg.detected = True
        elif -1 < smoothened_height_diff < -0.01:
            #self.get_logger().info("step down!")
            self.stair_msg.detected = True
        
        self.publisher_.publish(self.stair_msg)
        

    def add_height_to_storage(self, height_diff: float, storage: deque) -> list[float]:
        storage.append(height_diff)
        if len(storage) > 3:
            storage.popleft()
            
def main(args=None):
    rclpy.init(args=args)
    step_detection = StepDetection()
    rclpy.spin(step_detection)
    step_detection.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()
