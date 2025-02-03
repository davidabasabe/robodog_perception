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

import time

import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer

import numpy as np

from robot_interfaces.msg import Robot
from robot_interfaces.action import Commands
    
class CommandPublisher(Node):
    def __init__(self):
        super().__init__('command_publisher')
   
        self.action_server = ActionServer(
            self,
            Commands,
            'commands_action_server',
            self.execute_callback
        )
    
    def execute_callback(self, goal_handle):

        self.get_logger().info("############################################################################killmepls")
        self.get_logger().info(f'Executing Sequence: {goal_handle.request.sequence}')

        feedback_msg = Commands.Feedback()
        
        if goal_handle.request.sequence == "Lava":
            feedback_msg.status = "Lava sequence"
            self.get_logger().info(f"Lava msg: {goal_handle.request.robot.lava}")
            self._lava_sequence(goal_handle, feedback_msg)
            goal_handle.succeed()

            result = Commands.Result()
            result.finished = True
            return result
        
        elif goal_handle.request.sequence == "Arrow left":
            feedback_msg.status = "Arrow left"
            self.get_logger().info(f"Arrow msg: {goal_handle.request.robot.arrow}")
            self._arrow_sequence(goal_handle, feedback_msg)
            goal_handle.succeed()

            result = Commands.Result()
            result.finished = True
            return result
        
        elif goal_handle.request.sequence == "Arrow right":
            feedback_msg.status = "Arrow right"
            self.get_logger().info(f"Arrow msg: {goal_handle.request.robot.arrow}")
            self._arrow_sequence(goal_handle, feedback_msg)
            goal_handle.succeed()

            result = Commands.Result()
            result.finished = True
            return result
        
        elif goal_handle.request.sequence == "Stairs":
            feedback_msg.status = "Stairs"
            self.get_logger().info(f"Stair msg: {goal_handle.request.robot.stair}")
            self._stairs_sequence(goal_handle, feedback_msg)
            goal_handle.succeed()

            result = Commands.Result()
            result.finished = True
            return result
        
        elif goal_handle.request.sequence == "Move Forward":
            feedback_msg.status = "Move Forward"
            self._move_forward_sequence(goal_handle, feedback_msg)
            goal_handle.succeed()

            result = Commands.Result()
            result.finished = True
            return result
    
    def _lava_sequence(self, goal_handle, feedback_msg):

        # TODO: add logic
        feedback_msg.status = "Move y"
        self._move_y(goal_handle)
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.status))
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1)

        feedback_msg.status = "Move x"
        self._move_x(goal_handle)
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.status))
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1)

        feedback_msg.status = "Jump"
        self._jump(goal_handle)
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.status))
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1)

        feedback_msg.status = "Finished"
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.status))
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1)
    
    def _move_y(self, goal_handle):
        pass

    def _move_x(self, goal_handle):
        pass
    
    def _jump(self, goal_handle):
        pass
    
    def _arrow_sequence(self, goal_handle, feedback_msg):
        
        # TODO: add logic
        feedback_msg.status = "Approach arrow"
        self._approach_arrow(goal_handle)
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.status))
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1)

        feedback_msg.status = "Turn left/right"
        self._turn(goal_handle)
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.status))
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1)

        feedback_msg.status = "Move forward"
        self._move_forward(goal_handle)
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.status))
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1)

        feedback_msg.status = "Finished"
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.status))
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1)

    def _approach_arrow(self, goal_handle):
        pass

    def _turn(self, goal_handle):
        pass
    
    def _move_forward(self, goal_handle):
        pass

    def _stairs_sequence(self, goal_handle, feedback_msg):
        
        # TODO: add logic
        feedback_msg.status = "Switch gait to climb up/down mode"
        self._switch_climb_mode(goal_handle)
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.status))
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1)

        feedback_msg.status = "Move forward"
        self._move_forward(goal_handle)
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.status))
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1)

        feedback_msg.status = "Switch gait to normal again"
        self._switch_normal_gait(goal_handle)
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.status))
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1)

        feedback_msg.status = "Finished"
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.status))
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1)

    def _switch_climb_mode(self, goal_handle):
        pass

    def _move_forward(self, goal_handle):
        pass
    
    def _switch_normal_gait(self, goal_handle):
        pass

    def _move_forward_sequence(self, goal_handle, feedback_msg):
        
        # TODO: add logic
        feedback_msg.status = "Align angle and distance to wall"
        wall_angle = self._get_angle(goal_handle)
        wall_distance = self._get_distance(goal_handle)
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.status))
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1)

        feedback_msg.status = "Move forward"
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.status))
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1)

        feedback_msg.status = "Finished"
        self.get_logger().info('Feedback: {0}'.format(feedback_msg.status))
        goal_handle.publish_feedback(feedback_msg)
        time.sleep(1)
    
    def _get_angle(self, goal_handle):
        wall_angle = np.mean([goal_handle.request.robot.wall.angle_left, goal_handle.request.robot.wall.angle_right])
        return wall_angle

    def _get_distance(self, goal_handle):
        wall_distance = abs(goal_handle.request.robot.wall.distance_left) - abs(goal_handle.request.robot.wall.distance_right)
        return wall_distance
    
    def _move_forward(self, goal_handle):
        pass

def main(args=None):
    rclpy.init(args=args)
    command_publisher = CommandPublisher()
    rclpy.spin(command_publisher)
    command_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
   main()