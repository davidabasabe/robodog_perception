import struct
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import PointCloud2
import numpy as np
import open3d as o3d
import sensor_msgs_py.point_cloud2 as pc2
from sensor_msgs.msg import PointCloud2, PointField
from collections import defaultdict
from numpy.lib import recfunctions as rfn
from robot_interfaces.msg import Stair
from std_msgs.msg import Header

import matplotlib.pyplot as plt
import random
from collections import deque


class StepDetection(Node):
    def __init__(self):
        super().__init__('step_detection')
        self.subscriber_ = self.create_subscription(PointCloud2, '/go2/Lidar', self.listener_callback, 10)
        self.publisher_ = self.create_publisher(Stair, '/stair_detection', 10)
        self.publisher_ground_plane = self.create_publisher(PointCloud2, '/ground_plane', 10)
        self.publisher_obstacle_planes = self.create_publisher(PointCloud2, '/obstacle_planes', 10)
        self.current_lidar_points = []
        self.moving_average_height_diff = deque()
        self.moving_average_ground_height = deque()
        self.stair_msg = Stair()
        self.ground_height = 0
        self.red_colour = color_to_float(0, 0, 255)   # Red in BGR
        self.white_color = color_to_float(0, 255, 0)  # Green in BGR

    def msg_to_pcd(self, msg):
        point_cloud = pc2.read_points(msg)
        point_cloud = rfn.structured_to_unstructured(point_cloud[['x', 'y', 'z']])
        pcd = o3d.geometry.PointCloud()
        pcd.points = o3d.utility.Vector3dVector(point_cloud)
        return pcd

    def listener_callback(self, msg):

        pcd = self.msg_to_pcd(msg)
        if type(pcd) is None: return

        distance_threshold = 0.05
        ransac_n = 5
        num_iterations = 200
        copy_point_cloud = pcd
        plane_model, inliers = copy_point_cloud.segment_plane(
                distance_threshold=distance_threshold,
                ransac_n=ransac_n,
                num_iterations=num_iterations
            )
        
        ground_plane = copy_point_cloud.select_by_index(inliers)
        #self.publisher_ground_plane.publish(convert_open3d_to_ros(ground_plane, 'utlidar_lidar', self.white_color))
        new_ground_height = np.mean(np.asarray(ground_plane.points)[:, 2])
        self.ground_height = new_ground_height
        
        copy_point_cloud = copy_point_cloud.select_by_index(inliers, invert=True)
        cropped_points = np.asarray(copy_point_cloud.points)
        cropped_points = self.crop_point_cloud(cropped_points, x_range=(0.3, 1), y_range=(-0.3, 0.3), z_range=(-1.0, 0.7))
        cropped_cloud = o3d.geometry.PointCloud()
        cropped_cloud.points = o3d.utility.Vector3dVector(cropped_points)
        #self.publisher_obstacle_planes.publish(convert_open3d_to_ros(cropped_cloud, 'utlidar_lidar', rgb = self.red_colour))
        z_points_obstacles = np.asarray(cropped_cloud.points)[:, 2]
        x_points_obstacles = np.asarray(cropped_cloud.points)[:, 0]
        height_diff = None
        closest_x_point = 10.0
        if z_points_obstacles.size > 0:
            highest_obstacle_point = np.max(z_points_obstacles)
            lowest_obstacle_point = np.min(z_points_obstacles)
            height_diff = self.calculate_step_height(highest_obstacle_point, lowest_obstacle_point, new_ground_height)
            closest_x_point = self.resolve_closest_x_point(height_diff, z_points_obstacles, x_points_obstacles)
            #self.get_logger().info(f"Obstacle height difference is: {height_diff}")
            #self.get_logger().info(f"Obstacle distance is: {closest_x_point}")
        self.resolve_step(height_diff, closest_x_point)
        return
    
    def calculate_step_height(self, highest: float, lowest: float, ground: float) -> float:

        obstacle_height = self.choose_height_plane(highest, lowest, ground)
        height_diff = obstacle_height - ground
        return height_diff
    
    def choose_height_plane(self, highest: float, lowest: float, ground: float) -> float:
        mean_height = (highest + lowest) / 2
        if mean_height < ground:
            return lowest
        return highest        
    
    def crop_point_cloud(self, point_cloud, x_range, y_range, z_range):
        """Crop the point cloud to a region of interest."""
        mask =  (point_cloud[:, 0] > x_range[0]) & (point_cloud[:, 0] < x_range[1]) & \
                (point_cloud[:, 1] > y_range[0]) & (point_cloud[:, 1] < y_range[1]) & \
                (point_cloud[:, 2] > z_range[0]) & (point_cloud[:, 2] < z_range[1])
        return point_cloud[mask]
    
    def resolve_closest_x_point(self, height_diff: float, obstacle_z_points, obstacle_x_points) -> float:
        if obstacle_z_points.size <= 0 or obstacle_x_points.size <= 0:
            self.get_logger().info("No Step!") 
            return 10.0
        if 0.25 > height_diff > 0.1:
            threshold = np.max(obstacle_z_points) - 0.05
            hor_plane = obstacle_x_points[obstacle_z_points >= threshold]
            self.get_logger().info("Step Up")
        elif -0.25 < height_diff < -0.04:
            threshold = np.max(obstacle_z_points) + 0.05
            hor_plane = obstacle_x_points[obstacle_z_points <= threshold]
        else:
            return 10.0
        closest_x_point = np.min(hor_plane)
        return closest_x_point
    
    def resolve_step(self, height_diff: float | None, closest_x_distance: float):
        self.stair_msg.distance = float(closest_x_distance)
        self.stair_msg.detected = False
        self.stair_msg.upstairs = False
        if not height_diff:
            self.publisher_.publish(self.stair_msg)
            return
        elif 0.25 > height_diff > 0.15:
            self.stair_msg.upstairs = True
            self.stair_msg.detected = True
        elif -0.25 < height_diff < -0.04:
            self.stair_msg.detected = True
        
        self.publisher_.publish(self.stair_msg)
    
def convert_open3d_to_ros(open3d_cloud, frame_id: str = "map", rgb: int = 255):
    """Convert an Open3D PointCloud to a ROS2 PointCloud2 message."""
    
    points = np.asarray(open3d_cloud.points, dtype=np.float32)
    rgba = np.zeros((points.shape[0],), dtype=np.float32)
    rgba[:] = rgb
    cloud_data = np.column_stack((points, rgba))
    msg = PointCloud2()
    msg.header = Header()
    msg.header.frame_id = frame_id
    msg.height = 1  # Unordered cloud (1D list of points)
    msg.width = points.shape[0]
    msg.is_dense = False
    msg.is_bigendian = False
    msg.point_step = 16  # Each point has (x,y,z,rgba), 4 * 4 bytes each
    msg.row_step = msg.point_step * msg.width
    msg.fields = [
        PointField(name="x", offset=0, datatype=PointField.FLOAT32, count=1),
        PointField(name="y", offset=4, datatype=PointField.FLOAT32, count=1),
        PointField(name="z", offset=8, datatype=PointField.FLOAT32, count=1),
        PointField(name="rgba", offset=12, datatype=PointField.FLOAT32, count=1),
    ]
    msg.data = cloud_data.tobytes()
    
    return msg

def color_to_float(b, g, r, a=255):
    """Convert BGRA color (0-255) into a packed float format for ROS PointCloud2."""
    packed = (int(a) << 24) | (int(r) << 16) | (int(g) << 8) | int(b)  # BGRA order
    return struct.unpack('f', struct.pack('I', packed))[0]
            
def main(args=None):
    rclpy.init(args=args)
    step_detection = StepDetection()
    rclpy.spin(step_detection)
    step_detection.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()
