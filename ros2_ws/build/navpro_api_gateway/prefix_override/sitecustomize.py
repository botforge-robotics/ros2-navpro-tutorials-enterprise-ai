import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/chaitu/Projects/navpro_learning_hub/level2/ros2_ws/install/navpro_api_gateway'
