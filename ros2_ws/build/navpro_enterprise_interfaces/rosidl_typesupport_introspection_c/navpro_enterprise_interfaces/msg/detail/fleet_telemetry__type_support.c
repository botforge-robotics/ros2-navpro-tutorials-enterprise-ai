// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from navpro_enterprise_interfaces:msg/FleetTelemetry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "navpro_enterprise_interfaces/msg/detail/fleet_telemetry__rosidl_typesupport_introspection_c.h"
#include "navpro_enterprise_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "navpro_enterprise_interfaces/msg/detail/fleet_telemetry__functions.h"
#include "navpro_enterprise_interfaces/msg/detail/fleet_telemetry__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `robot_id`
// Member `operational_status`
// Member `current_mission_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `velocity`
#include "geometry_msgs/msg/twist.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void navpro_enterprise_interfaces__msg__FleetTelemetry__rosidl_typesupport_introspection_c__FleetTelemetry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  navpro_enterprise_interfaces__msg__FleetTelemetry__init(message_memory);
}

void navpro_enterprise_interfaces__msg__FleetTelemetry__rosidl_typesupport_introspection_c__FleetTelemetry_fini_function(void * message_memory)
{
  navpro_enterprise_interfaces__msg__FleetTelemetry__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember navpro_enterprise_interfaces__msg__FleetTelemetry__rosidl_typesupport_introspection_c__FleetTelemetry_message_member_array[10] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__msg__FleetTelemetry, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__msg__FleetTelemetry, robot_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__msg__FleetTelemetry, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__msg__FleetTelemetry, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__msg__FleetTelemetry, battery_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__msg__FleetTelemetry, battery_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_charging",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__msg__FleetTelemetry, is_charging),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "estop_engaged",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__msg__FleetTelemetry, estop_engaged),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "operational_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__msg__FleetTelemetry, operational_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current_mission_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__msg__FleetTelemetry, current_mission_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers navpro_enterprise_interfaces__msg__FleetTelemetry__rosidl_typesupport_introspection_c__FleetTelemetry_message_members = {
  "navpro_enterprise_interfaces__msg",  // message namespace
  "FleetTelemetry",  // message name
  10,  // number of fields
  sizeof(navpro_enterprise_interfaces__msg__FleetTelemetry),
  false,  // has_any_key_member_
  navpro_enterprise_interfaces__msg__FleetTelemetry__rosidl_typesupport_introspection_c__FleetTelemetry_message_member_array,  // message members
  navpro_enterprise_interfaces__msg__FleetTelemetry__rosidl_typesupport_introspection_c__FleetTelemetry_init_function,  // function to initialize message memory (memory has to be allocated)
  navpro_enterprise_interfaces__msg__FleetTelemetry__rosidl_typesupport_introspection_c__FleetTelemetry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t navpro_enterprise_interfaces__msg__FleetTelemetry__rosidl_typesupport_introspection_c__FleetTelemetry_message_type_support_handle = {
  0,
  &navpro_enterprise_interfaces__msg__FleetTelemetry__rosidl_typesupport_introspection_c__FleetTelemetry_message_members,
  get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__msg__FleetTelemetry__get_type_hash,
  &navpro_enterprise_interfaces__msg__FleetTelemetry__get_type_description,
  &navpro_enterprise_interfaces__msg__FleetTelemetry__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navpro_enterprise_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, msg, FleetTelemetry)() {
  navpro_enterprise_interfaces__msg__FleetTelemetry__rosidl_typesupport_introspection_c__FleetTelemetry_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  navpro_enterprise_interfaces__msg__FleetTelemetry__rosidl_typesupport_introspection_c__FleetTelemetry_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  navpro_enterprise_interfaces__msg__FleetTelemetry__rosidl_typesupport_introspection_c__FleetTelemetry_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!navpro_enterprise_interfaces__msg__FleetTelemetry__rosidl_typesupport_introspection_c__FleetTelemetry_message_type_support_handle.typesupport_identifier) {
    navpro_enterprise_interfaces__msg__FleetTelemetry__rosidl_typesupport_introspection_c__FleetTelemetry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &navpro_enterprise_interfaces__msg__FleetTelemetry__rosidl_typesupport_introspection_c__FleetTelemetry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
