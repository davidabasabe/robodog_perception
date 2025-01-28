from launch import LaunchDescription
from launch_ros.actions import Node
import os
from launch.actions import DeclareLaunchArgument, LogInfo
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
from launch.actions import IncludeLaunchDescription, SetEnvironmentVariable


def generate_launch_description():
    bt_launch_file = os.path.join(
        FindPackageShare('ros2_ros_bt_py').find('ros_bt_py'),
        'launch',
        'ros_bt_py.launch.py'
    )
    return LaunchDescription([
        Node(
            package='step_detection',
            namespace='launch_step',
            executable='step_detection',
            name='stepdet_node'
        ),
        #Node(
        #    package='image_processor',
        #    namespace='launch_lava',
        #    executable='img_sub',
        #    name='img_sub_node'
        #),
        #Node(
        #    package='ros_bt_py',
        #    namespace='launch_behaviour_tree',
        #    executable='tree_node',
        #    name='behavua_tree_node'
        #),
        Node(
            package='perception',
            namespace='launch_perception_srv',
            executable='perception',
            name='perception_srv_node'
        ),
        IncludeLaunchDescription(
            bt_launch_file,  # Path to the bt tree launch file
            launch_arguments={"enable_web_interface": "True"}.items(),  # Enabling web interface to see tree behavior
        ),
    ])