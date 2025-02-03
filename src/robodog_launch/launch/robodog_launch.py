from launch import LaunchDescription
from launch_ros.actions import Node
import os
from launch.actions import DeclareLaunchArgument, LogInfo
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import IncludeLaunchDescription, SetEnvironmentVariable


def generate_launch_description():
    #bt_launch_file = os.path.join(
    #    FindPackageShare('robodog_launch'),
    #    'launch',
    #    'robodog_ros_bt_py.launch.py'
    #)
    bt_launch_file = "src/robodog_launch/launch/robodog_ros_bt_py.launch.py"
    return LaunchDescription([
        Node(
            package='step_detection',
            # namespace='launch_step',
            executable='step_detection',
            name='stepdet_node'
        ),
        Node(
            package='obj_detect',
            # namespace='launch_obj_detect',
            executable='obj_detect',
            name='obj_detect_node'
        ),
        Node(
            package='wall_detection',
            # namespace='launch_wall',
            executable='wall_detection',
            name='wall_detection_node'
        ),
        Node(
            package='perception',
            # namespace='launch_perception_srv',
            executable='perception',
            name='perception_srv_node'
        ),
        IncludeLaunchDescription(
            bt_launch_file,  # Path to the bt tree launch file
            launch_arguments={"enable_web_interface": "True"}.items(),  # Enabling web interface to see tree behavior
        ),
        Node(
            package='control',
            # namespace='launch_perception_srv',
            executable='api_call_debug',
            name='control_node',
            output='screen',
        ),
    ])