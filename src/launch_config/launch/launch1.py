from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='launch_config',
            namespace='example_namespace',
            executable='talker', # TODO: change to name of your publisher executable
            name='talker_node'
        ),
            Node(
            package='launch_config',
            namespace='example_namespace',
            executable='listener', # TODO: change to name of your subscriber executable
            name='listener_node'
        )
    ])  