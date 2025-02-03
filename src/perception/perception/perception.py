# Copyright 2016 Open Source Robotics Foundation, Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
from rclpy.node import Node

from robot_interfaces.msg import YoloDetection, Stair, Robot
from robot_interfaces.srv import Perception

class PerceptionNode(Node):
    def __init__(self):
        super().__init__("perception_node")
        self.subscriber_lava_detection = self.create_subscription(YoloDetection, "/lava_detection", self.lava_detection_callback, 1)
        self.subscriber_arrow_detection = self.create_subscription(YoloDetection, "/arrow_detection", self.arrow_detection_callback, 1)
        self.subscriber_stair_detection = self.create_subscription(Stair, "/stair_detection", self.stair_detection_callback, 1)
        
        self.publisher_robot = self.create_publisher(Robot, "/robot", 1)

        self.service = self.create_service(Perception, "Perception", self.serviceCallback)
        
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.robot_msg = Robot()

    def lava_detection_callback(self, msg):
        self.robot_msg.lava = msg

    def arrow_detection_callback(self, msg):
        self.robot_msg.arrow = msg

    def stair_detection_callback(self, msg):
        self.robot_msg.stair = msg

    def timer_callback(self):
        self.publisher_robot.publish(self.robot_msg)
        #self.get_logger().info(f"{self.robot_msg}")   

    def serviceCallback(self, req, res):
        res.robot.lava = self.robot_msg.lava
        res.robot.arrow = self.robot_msg.arrow
        res.robot.stair = self.robot_msg.stair
        return res

def main(args=None):
    rclpy.init(args=args)
    perception_node = PerceptionNode()
    rclpy.spin(perception_node)
    perception_node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()