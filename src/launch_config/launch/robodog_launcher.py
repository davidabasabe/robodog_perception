from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='step_detection',
            namespace='launch_step',
            executable='step_detection',
            name='stepdet_node'
        ),
        Node(
            package='image_processor',
            namespace='launch_lava',
            executable='img_sub',
            name='img_sub_node'
        ),
        Node(
            package='ros_bt_py',
            namespace='launch_behaviour_tree',
            executable='tree_node',
            name='behavua_tree_node'
        ),
    ])