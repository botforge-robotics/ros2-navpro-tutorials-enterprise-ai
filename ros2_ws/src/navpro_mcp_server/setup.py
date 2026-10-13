import os
from glob import glob
from setuptools import setup, find_packages

package_name = 'navpro_mcp_server'

setup(
    name=package_name,
    version='2.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name] if os.path.exists('resource/' + package_name) else []),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Botforge Robotics',
    maintainer_email='chaitu@botforge.in',
    description='Model Context Protocol (MCP) JSON-RPC 2.0 AI Agent Server for NavPro Level 2',
    license='Apache-2.0',
    entry_points={
        'console_scripts': [
            'mcp_node = navpro_mcp_server.mcp_node:main',
        ],
    },
)
