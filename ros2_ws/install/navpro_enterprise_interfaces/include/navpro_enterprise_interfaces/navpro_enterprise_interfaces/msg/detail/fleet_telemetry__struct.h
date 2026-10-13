// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from navpro_enterprise_interfaces:msg/FleetTelemetry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "navpro_enterprise_interfaces/msg/fleet_telemetry.h"


#ifndef NAVPRO_ENTERPRISE_INTERFACES__MSG__DETAIL__FLEET_TELEMETRY__STRUCT_H_
#define NAVPRO_ENTERPRISE_INTERFACES__MSG__DETAIL__FLEET_TELEMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'robot_id'
// Member 'operational_status'
// Member 'current_mission_id'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.h"

/// Struct defined in msg/FleetTelemetry in the package navpro_enterprise_interfaces.
typedef struct navpro_enterprise_interfaces__msg__FleetTelemetry
{
  builtin_interfaces__msg__Time stamp;
  rosidl_runtime_c__String robot_id;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Twist velocity;
  float battery_percentage;
  float battery_voltage;
  bool is_charging;
  bool estop_engaged;
  rosidl_runtime_c__String operational_status;
  rosidl_runtime_c__String current_mission_id;
} navpro_enterprise_interfaces__msg__FleetTelemetry;

// Struct for a sequence of navpro_enterprise_interfaces__msg__FleetTelemetry.
typedef struct navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence
{
  navpro_enterprise_interfaces__msg__FleetTelemetry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navpro_enterprise_interfaces__msg__FleetTelemetry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAVPRO_ENTERPRISE_INTERFACES__MSG__DETAIL__FLEET_TELEMETRY__STRUCT_H_
