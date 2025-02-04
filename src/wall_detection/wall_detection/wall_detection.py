import math
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray
from sensor_msgs.msg import PointCloud2
import sensor_msgs_py.point_cloud2 as pc2
from robot_interfaces.msg import Wall

import numpy as np
from numpy.lib import recfunctions as rfn
import matplotlib.pyplot as plt

from sklearn import linear_model

class LidarSubscriber(Node):
    def __init__(self):
        super().__init__("wall_detection")
        # Subscribe to the LIDAR point cloud topic
        self.subscription = self.create_subscription(
            PointCloud2,
            '/go2/Lidar',
            self.lidar_callback,
            1
        )

        self.wall_msg_publisher = self.create_publisher(
            Wall,
            "/wall_detection",
            1
        )

        # Robustly fit linear model with RANSAC algorithm
        self.ransac_regressor_left = linear_model.RANSACRegressor()
        self.ransac_regressor_right = linear_model.RANSACRegressor()
        self.ransac_regressor_front = linear_model.RANSACRegressor()
        self.wall_data_msg = Float32MultiArray() # [yaw angle, y-axis distance] 
        plt.ion()

    def lidar_callback(self, msg):
        # convert point cloud message to numpy array
        point_cloud = pc2.read_points(msg)
        point_cloud = rfn.structured_to_unstructured(point_cloud[['x', 'y', 'z']])

        # filter the point cloud for the left and right wall points
        wall_points = point_cloud.copy()
        # TODO: filter the point cloud in x and z direction
        upper_threshold_z_axis = 0.3 # TODO
        lower_threshold_z_axis = -0.1 # TODO
        threshold_x_axis = 2 # TODO
        wall_points = wall_points[wall_points[:, 2] > lower_threshold_z_axis] # Z-axis
        wall_points = wall_points[wall_points[:, 2] < upper_threshold_z_axis] # Z-axis
        wall_points = wall_points[wall_points[:, 0] < threshold_x_axis] # X-axis
        wall_points = wall_points[wall_points[:, 0] > -threshold_x_axis] # X-axis

        left_wall = wall_points.copy()
        # TODO: filter the point cloud in y direction
        lower_threshold_y_axis = 0.5 # TODO
        upper_threshold_y_axis = 1
        left_wall = left_wall[(left_wall[:, 1] > lower_threshold_y_axis)] # Y-axis
        left_wall = left_wall[(left_wall[:, 1] < upper_threshold_y_axis)] # Y-axis
        right_wall = wall_points.copy()
        right_wall = right_wall[(right_wall[:, 1] < -lower_threshold_y_axis)] # Y-axis
        right_wall = right_wall[(right_wall[:, 1] > -upper_threshold_y_axis)] # Y-axis

        front_wall = wall_points.copy()
        front_x_threshold = 0
        front_y_threshold = 0.3
        front_z_threshold = 0
        front_wall =  front_wall[front_wall[:, 0] > front_x_threshold] # X-axis
        front_wall =  front_wall[front_wall[:, 1] > -front_y_threshold] # Y-axis
        front_wall =  front_wall[front_wall[:, 1] < front_y_threshold] # Y-axis
        front_wall =  front_wall[front_wall[:, 2] > front_z_threshold] # Y-axis

        wall_detection_msg = Wall()
        wall_distance_f = None

        if len(front_wall) > 1:
            self.ransac_regressor_front.fit(front_wall[:, 1].reshape(-1, 1), front_wall[:, 0]) 
            slope_front = self.ransac_regressor_front.estimator_.coef_
            intercept_f = self.ransac_regressor_front.estimator_.intercept_
            wall_distance_f = -(intercept_f / slope_front)
            distance_front = np.mean(front_wall[:, 0]).item()
            if distance_front == 0.0: distance_front = 10.0
            wall_detection_msg.distance_front = distance_front
        
        if len(left_wall) > 1 and len(right_wall) > 1:

            self.ransac_regressor_left.fit(left_wall[:, 1].reshape(-1, 1), left_wall[:, 0])
            self.ransac_regressor_right.fit(right_wall[:, 1].reshape(-1, 1), right_wall[:, 0])

            slope_left = self.ransac_regressor_left.estimator_.coef_
            slope_right = self.ransac_regressor_right.estimator_.coef_

            intercept_l = self.ransac_regressor_left.estimator_.intercept_
            intercept_r = self.ransac_regressor_right.estimator_.intercept_

            def get_sign(value):
                return value/(abs(value))
            
            def solve_wall_angle(slope):
                angle = np.arctan2(slope, 1)
                angle = angle.item() #* (180 / math.pi)
                #angle_sign = get_sign(angle)
                #angle = angle - (angle_sign * 90)
                #if abs(angle) < 5 or abs(angle) > 45:
                #    angle = float(0)
                return angle

            angle_left = solve_wall_angle(slope_left)
            angle_right = solve_wall_angle(slope_right)

            wall_detection_msg.angle_left = angle_left
            wall_detection_msg.angle_right = angle_right
            #angle = np.mean([angle_left, angle_right])

            #For real time view of ransac algorithm, uncomment!
            #plt.clf()
            #plt.plot(left_wall[:, 1], intercept_l + slope_left*left_wall[:, 1], 'r-', label="RANSAC regressor left",)
            #plt.plot(right_wall[:, 1], intercept_r + slope_right*right_wall[:, 1], 'g-', label="RANSAC regressor right",)
            #if wall_distance_f:
            #    plt.plot(front_wall[:, 1], intercept_f + slope_front*front_wall[:, 1], 'b-', label="RANSAC regressor front",)
            #plt.plot(wall_points[:, 1], wall_points[:, 0], 'b.', label="Point cloud")
#
            #plt.title('Fitted Lines')
            #plt.axvline(0, color='g', label='Middle')
            #plt.ylim([-2.0, 5.0])
            #plt.xlim([-2.0, 2.0])
            #plt.gca().invert_xaxis()
            ## plt.axis('equal')
            #plt.legend(loc='lower right')
            #plt.pause(0.01)

            wall_distance_l = - (intercept_l / slope_left)
            wall_detection_msg.distance_left = wall_distance_l.item()
            wall_distance_r = - (intercept_r / slope_right)
            wall_detection_msg.distance_right = wall_distance_r.item()
            #wall_distance = abs(wall_distance_l) - abs(wall_distance_r)

            self.wall_msg_publisher.publish(wall_detection_msg)
        
        else:
            
            print(f"Not enough points to interpolate!")

    def convert_pointcloud2_to_numpy(self, cloud_msg):

        # Convert ROS2 PointCloud2 to a numpy array (x, y, z)
        points = np.array(list(pc2.read_points(cloud_msg, field_names=("x", "y", "z"), skip_nans=True)))
        xyz = rfn.structured_to_unstructured(points)

        return xyz


def main(args=None):
    rclpy.init(args=args)
    lidar_subscriber = LidarSubscriber()
    plt.show()
    rclpy.spin(lidar_subscriber)
    lidar_subscriber.destroy_node()
    rclpy.shutdown()
    # pipeline.stop()


if __name__ == "__main__":
    main()
