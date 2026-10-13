import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    pkg_dir = get_package_share_directory('navpro_api_gateway')
    config_file = os.path.join(pkg_dir, 'config', 'gateway_params.yaml')

    return LaunchDescription([
        Node(
            package='navpro_api_gateway',
            executable='gateway_node',
            name='navpro_api_gateway',
            output='screen',
            parameters=[config_file] if os.path.exists(config_file) else [],
        )
    ])
