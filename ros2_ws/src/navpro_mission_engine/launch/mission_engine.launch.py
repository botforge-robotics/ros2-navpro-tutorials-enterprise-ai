from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='navpro_mission_engine',
            executable='mission_engine_node',
            name='navpro_mission_engine',
            output='screen',
        )
    ])
