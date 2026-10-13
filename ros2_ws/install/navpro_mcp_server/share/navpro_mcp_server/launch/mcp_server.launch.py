from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='navpro_mcp_server',
            executable='mcp_node',
            name='navpro_mcp_server',
            output='screen',
        )
    ])
