// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from navpro_enterprise_interfaces:msg/FleetTelemetry.idl
// generated code does not contain a copyright notice
#ifndef NAVPRO_ENTERPRISE_INTERFACES__MSG__DETAIL__FLEET_TELEMETRY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define NAVPRO_ENTERPRISE_INTERFACES__MSG__DETAIL__FLEET_TELEMETRY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "navpro_enterprise_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "navpro_enterprise_interfaces/msg/detail/fleet_telemetry__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
bool cdr_serialize_navpro_enterprise_interfaces__msg__FleetTelemetry(
  const navpro_enterprise_interfaces__msg__FleetTelemetry * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
bool cdr_deserialize_navpro_enterprise_interfaces__msg__FleetTelemetry(
  eprosima::fastcdr::Cdr &,
  navpro_enterprise_interfaces__msg__FleetTelemetry * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t get_serialized_size_navpro_enterprise_interfaces__msg__FleetTelemetry(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t max_serialized_size_navpro_enterprise_interfaces__msg__FleetTelemetry(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
bool cdr_serialize_key_navpro_enterprise_interfaces__msg__FleetTelemetry(
  const navpro_enterprise_interfaces__msg__FleetTelemetry * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t get_serialized_size_key_navpro_enterprise_interfaces__msg__FleetTelemetry(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t max_serialized_size_key_navpro_enterprise_interfaces__msg__FleetTelemetry(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, msg, FleetTelemetry)();

#ifdef __cplusplus
}
#endif

#endif  // NAVPRO_ENTERPRISE_INTERFACES__MSG__DETAIL__FLEET_TELEMETRY__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
