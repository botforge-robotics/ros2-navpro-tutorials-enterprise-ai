# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target navpro_enterprise_interfaces::navpro_enterprise_interfaces
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${navpro_enterprise_interfaces_TARGETS}.
if(navpro_enterprise_interfaces_TARGETS AND NOT TARGET navpro_enterprise_interfaces::navpro_enterprise_interfaces)
  add_library(navpro_enterprise_interfaces::navpro_enterprise_interfaces INTERFACE IMPORTED)
  set_target_properties(navpro_enterprise_interfaces::navpro_enterprise_interfaces PROPERTIES
    INTERFACE_LINK_LIBRARIES "${navpro_enterprise_interfaces_TARGETS}")
endif()
