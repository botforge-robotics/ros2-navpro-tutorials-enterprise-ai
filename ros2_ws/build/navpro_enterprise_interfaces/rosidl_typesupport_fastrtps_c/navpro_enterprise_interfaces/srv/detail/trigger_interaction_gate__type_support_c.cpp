// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from navpro_enterprise_interfaces:srv/TriggerInteractionGate.idl
// generated code does not contain a copyright notice
#include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "navpro_enterprise_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__struct.h"
#include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__functions.h"
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

#include "rosidl_runtime_c/string.h"  // available_actions, gate_id, prompt_message
#include "rosidl_runtime_c/string_functions.h"  // available_actions, gate_id, prompt_message

// forward declare type support functions


using _TriggerInteractionGate_Request__ros_msg_type = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
bool cdr_serialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: gate_id
  {
    const rosidl_runtime_c__String * str = &ros_message->gate_id;
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

  // Field name: prompt_message
  {
    const rosidl_runtime_c__String * str = &ros_message->prompt_message;
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

  // Field name: available_actions
  {
    size_t size = ros_message->available_actions.size;
    auto array_ptr = ros_message->available_actions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: timeout_seconds
  {
    cdr << ros_message->timeout_seconds;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
bool cdr_deserialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
  eprosima::fastcdr::Cdr & cdr,
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * ros_message)
{
  // Field name: gate_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->gate_id.data) {
      rosidl_runtime_c__String__init(&ros_message->gate_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->gate_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'gate_id'\n");
      return false;
    }
  }

  // Field name: prompt_message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->prompt_message.data) {
      rosidl_runtime_c__String__init(&ros_message->prompt_message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->prompt_message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'prompt_message'\n");
      return false;
    }
  }

  // Field name: available_actions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->available_actions.data) {
      rosidl_runtime_c__String__Sequence__fini(&ros_message->available_actions);
    }
    if (!rosidl_runtime_c__String__Sequence__init(&ros_message->available_actions, size)) {
      fprintf(stderr, "failed to create array for field 'available_actions'");
      return false;
    }
    auto array_ptr = ros_message->available_actions.data;
    for (size_t i = 0; i < size; ++i) {
      std::string tmp;
      cdr >> tmp;
      auto & ros_i = array_ptr[i];
      if (!ros_i.data) {
        rosidl_runtime_c__String__init(&ros_i);
      }
      bool succeeded = rosidl_runtime_c__String__assign(
        &ros_i,
        tmp.c_str());
      if (!succeeded) {
        fprintf(stderr, "failed to assign string into field 'available_actions'\n");
        return false;
      }
    }
  }

  // Field name: timeout_seconds
  {
    cdr >> ros_message->timeout_seconds;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t get_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TriggerInteractionGate_Request__ros_msg_type * ros_message = static_cast<const _TriggerInteractionGate_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: gate_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gate_id.size + 1);

  // Field name: prompt_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->prompt_message.size + 1);

  // Field name: available_actions
  {
    size_t array_size = ros_message->available_actions.size;
    auto array_ptr = ros_message->available_actions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: timeout_seconds
  {
    size_t item_size = sizeof(ros_message->timeout_seconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t max_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
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

  // Field name: gate_id
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

  // Field name: prompt_message
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

  // Field name: available_actions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: timeout_seconds
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request;
    is_plain =
      (
      offsetof(DataType, timeout_seconds) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
bool cdr_serialize_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: gate_id
  {
    const rosidl_runtime_c__String * str = &ros_message->gate_id;
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

  // Field name: prompt_message
  {
    const rosidl_runtime_c__String * str = &ros_message->prompt_message;
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

  // Field name: available_actions
  {
    size_t size = ros_message->available_actions.size;
    auto array_ptr = ros_message->available_actions.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      const rosidl_runtime_c__String * str = &array_ptr[i];
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
  }

  // Field name: timeout_seconds
  {
    cdr << ros_message->timeout_seconds;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t get_serialized_size_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TriggerInteractionGate_Request__ros_msg_type * ros_message = static_cast<const _TriggerInteractionGate_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: gate_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->gate_id.size + 1);

  // Field name: prompt_message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->prompt_message.size + 1);

  // Field name: available_actions
  {
    size_t array_size = ros_message->available_actions.size;
    auto array_ptr = ros_message->available_actions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        (array_ptr[index].size + 1);
    }
  }

  // Field name: timeout_seconds
  {
    size_t item_size = sizeof(ros_message->timeout_seconds);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t max_serialized_size_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
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
  // Field name: gate_id
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

  // Field name: prompt_message
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

  // Field name: available_actions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Field name: timeout_seconds
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request;
    is_plain =
      (
      offsetof(DataType, timeout_seconds) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TriggerInteractionGate_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * ros_message = static_cast<const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(ros_message, cdr);
}

static bool _TriggerInteractionGate_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * ros_message = static_cast<navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(cdr, ros_message);
}

static uint32_t _TriggerInteractionGate_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
      untyped_ros_message, 0));
}

static size_t _TriggerInteractionGate_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TriggerInteractionGate_Request = {
  "navpro_enterprise_interfaces::srv",
  "TriggerInteractionGate_Request",
  _TriggerInteractionGate_Request__cdr_serialize,
  _TriggerInteractionGate_Request__cdr_deserialize,
  _TriggerInteractionGate_Request__get_serialized_size,
  _TriggerInteractionGate_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TriggerInteractionGate_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TriggerInteractionGate_Request,
  get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__get_type_hash,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__get_type_description,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Request)() {
  return &_TriggerInteractionGate_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "navpro_enterprise_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__struct.h"
// already included above
// #include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // operator_notes, selected_action
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // operator_notes, selected_action

// forward declare type support functions


using _TriggerInteractionGate_Response__ros_msg_type = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
bool cdr_serialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: selected_action
  {
    const rosidl_runtime_c__String * str = &ros_message->selected_action;
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

  // Field name: operator_notes
  {
    const rosidl_runtime_c__String * str = &ros_message->operator_notes;
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
bool cdr_deserialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
  eprosima::fastcdr::Cdr & cdr,
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * ros_message)
{
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: selected_action
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->selected_action.data) {
      rosidl_runtime_c__String__init(&ros_message->selected_action);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->selected_action,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'selected_action'\n");
      return false;
    }
  }

  // Field name: operator_notes
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->operator_notes.data) {
      rosidl_runtime_c__String__init(&ros_message->operator_notes);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->operator_notes,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'operator_notes'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t get_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TriggerInteractionGate_Response__ros_msg_type * ros_message = static_cast<const _TriggerInteractionGate_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: selected_action
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->selected_action.size + 1);

  // Field name: operator_notes
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->operator_notes.size + 1);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t max_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
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

  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: selected_action
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

  // Field name: operator_notes
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
    using DataType = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response;
    is_plain =
      (
      offsetof(DataType, operator_notes) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
bool cdr_serialize_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: selected_action
  {
    const rosidl_runtime_c__String * str = &ros_message->selected_action;
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

  // Field name: operator_notes
  {
    const rosidl_runtime_c__String * str = &ros_message->operator_notes;
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
size_t get_serialized_size_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TriggerInteractionGate_Response__ros_msg_type * ros_message = static_cast<const _TriggerInteractionGate_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: selected_action
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->selected_action.size + 1);

  // Field name: operator_notes
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->operator_notes.size + 1);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t max_serialized_size_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
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
  // Field name: success
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: selected_action
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

  // Field name: operator_notes
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
    using DataType = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response;
    is_plain =
      (
      offsetof(DataType, operator_notes) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TriggerInteractionGate_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * ros_message = static_cast<const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(ros_message, cdr);
}

static bool _TriggerInteractionGate_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * ros_message = static_cast<navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(cdr, ros_message);
}

static uint32_t _TriggerInteractionGate_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
      untyped_ros_message, 0));
}

static size_t _TriggerInteractionGate_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TriggerInteractionGate_Response = {
  "navpro_enterprise_interfaces::srv",
  "TriggerInteractionGate_Response",
  _TriggerInteractionGate_Response__cdr_serialize,
  _TriggerInteractionGate_Response__cdr_deserialize,
  _TriggerInteractionGate_Response__get_serialized_size,
  _TriggerInteractionGate_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TriggerInteractionGate_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TriggerInteractionGate_Response,
  get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__get_type_hash,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__get_type_description,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Response)() {
  return &_TriggerInteractionGate_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "navpro_enterprise_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__struct.h"
// already included above
// #include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

bool cdr_serialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
  eprosima::fastcdr::Cdr & cdr,
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * ros_message);

size_t get_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Request)();

bool cdr_serialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
  eprosima::fastcdr::Cdr & cdr,
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * ros_message);

size_t get_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Response)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_navpro_enterprise_interfaces
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();


using _TriggerInteractionGate_Event__ros_msg_type = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
bool cdr_serialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event(
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
bool cdr_deserialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event(
  eprosima::fastcdr::Cdr & cdr,
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->request.data) {
      navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__fini(&ros_message->request);
    }
    if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.get_state();
    bool correct_size = cdr.jump(size);
    cdr.set_state(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->response.data) {
      navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__fini(&ros_message->response);
    }
    if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t get_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TriggerInteractionGate_Event__ros_msg_type * ros_message = static_cast<const _TriggerInteractionGate_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t max_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event(
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

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
bool cdr_serialize_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event(
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t get_serialized_size_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TriggerInteractionGate_Event__ros_msg_type * ros_message = static_cast<const _TriggerInteractionGate_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_navpro_enterprise_interfaces
size_t max_serialized_size_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event(
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
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _TriggerInteractionGate_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event * ros_message = static_cast<const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event(ros_message, cdr);
}

static bool _TriggerInteractionGate_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event * ros_message = static_cast<navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event(cdr, ros_message);
}

static uint32_t _TriggerInteractionGate_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event(
      untyped_ros_message, 0));
}

static size_t _TriggerInteractionGate_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TriggerInteractionGate_Event = {
  "navpro_enterprise_interfaces::srv",
  "TriggerInteractionGate_Event",
  _TriggerInteractionGate_Event__cdr_serialize,
  _TriggerInteractionGate_Event__cdr_deserialize,
  _TriggerInteractionGate_Event__get_serialized_size,
  _TriggerInteractionGate_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _TriggerInteractionGate_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TriggerInteractionGate_Event,
  get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__get_type_hash,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__get_type_description,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Event)() {
  return &_TriggerInteractionGate_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "navpro_enterprise_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "navpro_enterprise_interfaces/srv/trigger_interaction_gate.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t TriggerInteractionGate__callbacks = {
  "navpro_enterprise_interfaces::srv",
  "TriggerInteractionGate",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Response)(),
};

static rosidl_service_type_support_t TriggerInteractionGate__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &TriggerInteractionGate__callbacks,
  get_service_typesupport_handle_function,
  &_TriggerInteractionGate_Request__type_support,
  &_TriggerInteractionGate_Response__type_support,
  &_TriggerInteractionGate_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    navpro_enterprise_interfaces,
    srv,
    TriggerInteractionGate
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    navpro_enterprise_interfaces,
    srv,
    TriggerInteractionGate
  ),
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate__get_type_hash,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate__get_type_description,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate)() {
  return &TriggerInteractionGate__handle;
}

#if defined(__cplusplus)
}
#endif
