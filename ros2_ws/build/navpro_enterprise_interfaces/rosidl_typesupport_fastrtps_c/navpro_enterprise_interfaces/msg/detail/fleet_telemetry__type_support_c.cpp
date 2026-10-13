// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from navpro_enterprise_interfaces:msg/FleetTelemetry.idl
// generated code does not contain a copyright notice
#include "navpro_enterprise_interfaces/msg/detail/fleet_telemetry__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "navpro_enterprise_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "navpro_enterprise_interfaces/msg/detail/fleet_telemetry__struct.h"
#include "navpro_enterprise_interfaces/msg/detail/fleet_telemetry__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // stamp
#include "geometry_msgs/msg/detail/pose__functions.h"  // pose
#include "geometry_msgs/msg/detail/twist__functions.h"  // velocity
#include "rosidl_runtime_c/string.h"  // current_mission_id, operational_status, robot_id
#include "rosidl_runtime_c/string_functions.h"  // current_mission_id, operational_status, robot_id

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
bool cdr_serialize_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
bool cdr_deserialize_builtin_interfaces__msg__Time(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Time * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
bool cdr_serialize_key_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
size_t get_serialized_size_key_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
size_t max_serialized_size_key_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
bool cdr_serialize_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
bool cdr_deserialize_geometry_msgs__msg__Pose(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Pose * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
bool cdr_serialize_key_geometry_msgs__msg__Pose(
  const geometry_msgs__msg__Pose * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
size_t get_serialized_size_key_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
size_t max_serialized_size_key_geometry_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
bool cdr_serialize_geometry_msgs__msg__Twist(
  const geometry_msgs__msg__Twist * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
bool cdr_deserialize_geometry_msgs__msg__Twist(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Twist * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
size_t get_serialized_size_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
size_t max_serialized_size_geometry_msgs__msg__Twist(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
bool cdr_serialize_key_geometry_msgs__msg__Twist(
  const geometry_msgs__msg__Twist * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
size_t get_serialized_size_key_geometry_msgs__msg__Twist(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
size_t max_serialized_size_key_geometry_msgs__msg__Twist(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Twist)();


using _FleetTelemetry__ros_msg_type = navpro_enterprise_interfaces__msg__FleetTelemetry;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
bool cdr_serialize_navpro_enterprise_interfaces__msg__FleetTelemetry(
  const navpro_enterprise_interfaces__msg__FleetTelemetry * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: stamp
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->stamp, cdr);
  }

  // Field name: robot_id
  {
    const rosidl_runtime_c__String * str = &ros_message->robot_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pose
  {
    cdr_serialize_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  // Field name: velocity
  {
    cdr_serialize_geometry_msgs__msg__Twist(
      &ros_message->velocity, cdr);
  }

  // Field name: battery_percentage
  {
    cdr << ros_message->battery_percentage;
  }

  // Field name: battery_voltage
  {
    cdr << ros_message->battery_voltage;
  }

  // Field name: is_charging
  {
    cdr << (ros_message->is_charging ? true : false);
  }

  // Field name: estop_engaged
  {
    cdr << (ros_message->estop_engaged ? true : false);
  }

  // Field name: operational_status
  {
    const rosidl_runtime_c__String * str = &ros_message->operational_status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: current_mission_id
  {
    const rosidl_runtime_c__String * str = &ros_message->current_mission_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
bool cdr_deserialize_navpro_enterprise_interfaces__msg__FleetTelemetry(
  eprosima::fastcdr::Cdr & cdr,
  navpro_enterprise_interfaces__msg__FleetTelemetry * ros_message)
{
  // Field name: stamp
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->stamp);
  }

  // Field name: robot_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->robot_id.data) {
      rosidl_runtime_c__String__init(&ros_message->robot_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->robot_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'robot_id'\n");
      return false;
    }
  }

  // Field name: pose
  {
    cdr_deserialize_geometry_msgs__msg__Pose(cdr, &ros_message->pose);
  }

  // Field name: velocity
  {
    cdr_deserialize_geometry_msgs__msg__Twist(cdr, &ros_message->velocity);
  }

  // Field name: battery_percentage
  {
    cdr >> ros_message->battery_percentage;
  }

  // Field name: battery_voltage
  {
    cdr >> ros_message->battery_voltage;
  }

  // Field name: is_charging
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_charging = tmp ? true : false;
  }

  // Field name: estop_engaged
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->estop_engaged = tmp ? true : false;
  }

  // Field name: operational_status
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->operational_status.data) {
      rosidl_runtime_c__String__init(&ros_message->operational_status);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->operational_status,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'operational_status'\n");
      return false;
    }
  }

  // Field name: current_mission_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->current_mission_id.data) {
      rosidl_runtime_c__String__init(&ros_message->current_mission_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->current_mission_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'current_mission_id'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t get_serialized_size_navpro_enterprise_interfaces__msg__FleetTelemetry(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FleetTelemetry__ros_msg_type * ros_message = static_cast<const _FleetTelemetry__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: stamp
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  // Field name: robot_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot_id.size + 1);

  // Field name: pose
  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  // Field name: velocity
  current_alignment += get_serialized_size_geometry_msgs__msg__Twist(
    &(ros_message->velocity), current_alignment);

  // Field name: battery_percentage
  {
    size_t item_size = sizeof(ros_message->battery_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_voltage
  {
    size_t item_size = sizeof(ros_message->battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_charging
  {
    size_t item_size = sizeof(ros_message->is_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: estop_engaged
  {
    size_t item_size = sizeof(ros_message->estop_engaged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: operational_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->operational_status.size + 1);

  // Field name: current_mission_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->current_mission_id.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t max_serialized_size_navpro_enterprise_interfaces__msg__FleetTelemetry(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: robot_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Twist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: battery_percentage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: is_charging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: estop_engaged
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: operational_status
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: current_mission_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = navpro_enterprise_interfaces__msg__FleetTelemetry;
    is_plain =
      (
      offsetof(DataType, current_mission_id) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
bool cdr_serialize_key_navpro_enterprise_interfaces__msg__FleetTelemetry(
  const navpro_enterprise_interfaces__msg__FleetTelemetry * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: stamp
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->stamp, cdr);
  }

  // Field name: robot_id
  {
    const rosidl_runtime_c__String * str = &ros_message->robot_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: pose
  {
    cdr_serialize_key_geometry_msgs__msg__Pose(
      &ros_message->pose, cdr);
  }

  // Field name: velocity
  {
    cdr_serialize_key_geometry_msgs__msg__Twist(
      &ros_message->velocity, cdr);
  }

  // Field name: battery_percentage
  {
    cdr << ros_message->battery_percentage;
  }

  // Field name: battery_voltage
  {
    cdr << ros_message->battery_voltage;
  }

  // Field name: is_charging
  {
    cdr << (ros_message->is_charging ? true : false);
  }

  // Field name: estop_engaged
  {
    cdr << (ros_message->estop_engaged ? true : false);
  }

  // Field name: operational_status
  {
    const rosidl_runtime_c__String * str = &ros_message->operational_status;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: current_mission_id
  {
    const rosidl_runtime_c__String * str = &ros_message->current_mission_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t get_serialized_size_key_navpro_enterprise_interfaces__msg__FleetTelemetry(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _FleetTelemetry__ros_msg_type * ros_message = static_cast<const _FleetTelemetry__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: stamp
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->stamp), current_alignment);

  // Field name: robot_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->robot_id.size + 1);

  // Field name: pose
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  // Field name: velocity
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Twist(
    &(ros_message->velocity), current_alignment);

  // Field name: battery_percentage
  {
    size_t item_size = sizeof(ros_message->battery_percentage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: battery_voltage
  {
    size_t item_size = sizeof(ros_message->battery_voltage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_charging
  {
    size_t item_size = sizeof(ros_message->is_charging);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: estop_engaged
  {
    size_t item_size = sizeof(ros_message->estop_engaged);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: operational_status
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->operational_status.size + 1);

  // Field name: current_mission_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->current_mission_id.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t max_serialized_size_key_navpro_enterprise_interfaces__msg__FleetTelemetry(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: stamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: robot_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: pose
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: velocity
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Twist(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: battery_percentage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: battery_voltage
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: is_charging
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: estop_engaged
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: operational_status
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: current_mission_id
  {
    size_t array_size = 1;
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = navpro_enterprise_interfaces__msg__FleetTelemetry;
    is_plain =
      (
      offsetof(DataType, current_mission_id) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _FleetTelemetry__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const navpro_enterprise_interfaces__msg__FleetTelemetry * ros_message = static_cast<const navpro_enterprise_interfaces__msg__FleetTelemetry *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_navpro_enterprise_interfaces__msg__FleetTelemetry(ros_message, cdr);
}

static bool _FleetTelemetry__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  navpro_enterprise_interfaces__msg__FleetTelemetry * ros_message = static_cast<navpro_enterprise_interfaces__msg__FleetTelemetry *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_navpro_enterprise_interfaces__msg__FleetTelemetry(cdr, ros_message);
}

static uint32_t _FleetTelemetry__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_navpro_enterprise_interfaces__msg__FleetTelemetry(
      untyped_ros_message, 0));
}

static size_t _FleetTelemetry__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_navpro_enterprise_interfaces__msg__FleetTelemetry(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_FleetTelemetry = {
  "navpro_enterprise_interfaces::msg",
  "FleetTelemetry",
  _FleetTelemetry__cdr_serialize,
  _FleetTelemetry__cdr_deserialize,
  _FleetTelemetry__get_serialized_size,
  _FleetTelemetry__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _FleetTelemetry__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_FleetTelemetry,
  get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__msg__FleetTelemetry__get_type_hash,
  &navpro_enterprise_interfaces__msg__FleetTelemetry__get_type_description,
  &navpro_enterprise_interfaces__msg__FleetTelemetry__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, msg, FleetTelemetry)() {
  return &_FleetTelemetry__type_support;
}

#if defined(__cplusplus)
}
#endif
