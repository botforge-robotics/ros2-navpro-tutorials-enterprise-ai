// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from navpro_enterprise_interfaces:srv/TriggerInteractionGate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__rosidl_typesupport_introspection_c.h"
#include "navpro_enterprise_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__functions.h"
#include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__struct.h"


// Include directives for member types
// Member `gate_id`
// Member `prompt_message`
// Member `available_actions`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__TriggerInteractionGate_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__init(message_memory);
}

void navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__TriggerInteractionGate_Request_fini_function(void * message_memory)
{
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__fini(message_memory);
}

size_t navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__size_function__TriggerInteractionGate_Request__available_actions(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__get_const_function__TriggerInteractionGate_Request__available_actions(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__get_function__TriggerInteractionGate_Request__available_actions(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__fetch_function__TriggerInteractionGate_Request__available_actions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__get_const_function__TriggerInteractionGate_Request__available_actions(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__assign_function__TriggerInteractionGate_Request__available_actions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__get_function__TriggerInteractionGate_Request__available_actions(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__resize_function__TriggerInteractionGate_Request__available_actions(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__TriggerInteractionGate_Request_message_member_array[4] = {
  {
    "gate_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request, gate_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "prompt_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request, prompt_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "available_actions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request, available_actions),  // bytes offset in struct
    NULL,  // default value
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__size_function__TriggerInteractionGate_Request__available_actions,  // size() function pointer
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__get_const_function__TriggerInteractionGate_Request__available_actions,  // get_const(index) function pointer
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__get_function__TriggerInteractionGate_Request__available_actions,  // get(index) function pointer
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__fetch_function__TriggerInteractionGate_Request__available_actions,  // fetch(index, &value) function pointer
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__assign_function__TriggerInteractionGate_Request__available_actions,  // assign(index, value) function pointer
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__resize_function__TriggerInteractionGate_Request__available_actions  // resize(index) function pointer
  },
  {
    "timeout_seconds",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request, timeout_seconds),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__TriggerInteractionGate_Request_message_members = {
  "navpro_enterprise_interfaces__srv",  // message namespace
  "TriggerInteractionGate_Request",  // message name
  4,  // number of fields
  sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request),
  false,  // has_any_key_member_
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__TriggerInteractionGate_Request_message_member_array,  // message members
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__TriggerInteractionGate_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__TriggerInteractionGate_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__TriggerInteractionGate_Request_message_type_support_handle = {
  0,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__TriggerInteractionGate_Request_message_members,
  get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__get_type_hash,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__get_type_description,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navpro_enterprise_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Request)() {
  if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__TriggerInteractionGate_Request_message_type_support_handle.typesupport_identifier) {
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__TriggerInteractionGate_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__TriggerInteractionGate_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "navpro_enterprise_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__functions.h"
// already included above
// #include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__struct.h"


// Include directives for member types
// Member `selected_action`
// Member `operator_notes`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__rosidl_typesupport_introspection_c__TriggerInteractionGate_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__init(message_memory);
}

void navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__rosidl_typesupport_introspection_c__TriggerInteractionGate_Response_fini_function(void * message_memory)
{
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__rosidl_typesupport_introspection_c__TriggerInteractionGate_Response_message_member_array[3] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "selected_action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response, selected_action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "operator_notes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response, operator_notes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__rosidl_typesupport_introspection_c__TriggerInteractionGate_Response_message_members = {
  "navpro_enterprise_interfaces__srv",  // message namespace
  "TriggerInteractionGate_Response",  // message name
  3,  // number of fields
  sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response),
  false,  // has_any_key_member_
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__rosidl_typesupport_introspection_c__TriggerInteractionGate_Response_message_member_array,  // message members
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__rosidl_typesupport_introspection_c__TriggerInteractionGate_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__rosidl_typesupport_introspection_c__TriggerInteractionGate_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__rosidl_typesupport_introspection_c__TriggerInteractionGate_Response_message_type_support_handle = {
  0,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__rosidl_typesupport_introspection_c__TriggerInteractionGate_Response_message_members,
  get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__get_type_hash,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__get_type_description,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navpro_enterprise_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Response)() {
  if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__rosidl_typesupport_introspection_c__TriggerInteractionGate_Response_message_type_support_handle.typesupport_identifier) {
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__rosidl_typesupport_introspection_c__TriggerInteractionGate_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__rosidl_typesupport_introspection_c__TriggerInteractionGate_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "navpro_enterprise_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__functions.h"
// already included above
// #include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "navpro_enterprise_interfaces/srv/trigger_interaction_gate.h"
// Member `request`
// Member `response`
// already included above
// #include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__TriggerInteractionGate_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__init(message_memory);
}

void navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__TriggerInteractionGate_Event_fini_function(void * message_memory)
{
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__fini(message_memory);
}

size_t navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__size_function__TriggerInteractionGate_Event__request(
  const void * untyped_member)
{
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence * member =
    (const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerInteractionGate_Event__request(
  const void * untyped_member, size_t index)
{
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence * member =
    (const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__get_function__TriggerInteractionGate_Event__request(
  void * untyped_member, size_t index)
{
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence * member =
    (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__fetch_function__TriggerInteractionGate_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * item =
    ((const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request *)
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerInteractionGate_Event__request(untyped_member, index));
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * value =
    (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request *)(untyped_value);
  *value = *item;
}

void navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__assign_function__TriggerInteractionGate_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * item =
    ((navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request *)
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__get_function__TriggerInteractionGate_Event__request(untyped_member, index));
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request * value =
    (const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request *)(untyped_value);
  *item = *value;
}

bool navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__resize_function__TriggerInteractionGate_Event__request(
  void * untyped_member, size_t size)
{
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence * member =
    (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence *)(untyped_member);
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__fini(member);
  return navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__Sequence__init(member, size);
}

size_t navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__size_function__TriggerInteractionGate_Event__response(
  const void * untyped_member)
{
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence * member =
    (const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerInteractionGate_Event__response(
  const void * untyped_member, size_t index)
{
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence * member =
    (const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__get_function__TriggerInteractionGate_Event__response(
  void * untyped_member, size_t index)
{
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence * member =
    (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__fetch_function__TriggerInteractionGate_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * item =
    ((const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response *)
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerInteractionGate_Event__response(untyped_member, index));
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * value =
    (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response *)(untyped_value);
  *value = *item;
}

void navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__assign_function__TriggerInteractionGate_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * item =
    ((navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response *)
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__get_function__TriggerInteractionGate_Event__response(untyped_member, index));
  const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response * value =
    (const navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response *)(untyped_value);
  *item = *value;
}

bool navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__resize_function__TriggerInteractionGate_Event__response(
  void * untyped_member, size_t size)
{
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence * member =
    (navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence *)(untyped_member);
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__fini(member);
  return navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__TriggerInteractionGate_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event, request),  // bytes offset in struct
    NULL,  // default value
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__size_function__TriggerInteractionGate_Event__request,  // size() function pointer
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerInteractionGate_Event__request,  // get_const(index) function pointer
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__get_function__TriggerInteractionGate_Event__request,  // get(index) function pointer
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__fetch_function__TriggerInteractionGate_Event__request,  // fetch(index, &value) function pointer
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__assign_function__TriggerInteractionGate_Event__request,  // assign(index, value) function pointer
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__resize_function__TriggerInteractionGate_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event, response),  // bytes offset in struct
    NULL,  // default value
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__size_function__TriggerInteractionGate_Event__response,  // size() function pointer
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__get_const_function__TriggerInteractionGate_Event__response,  // get_const(index) function pointer
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__get_function__TriggerInteractionGate_Event__response,  // get(index) function pointer
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__fetch_function__TriggerInteractionGate_Event__response,  // fetch(index, &value) function pointer
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__assign_function__TriggerInteractionGate_Event__response,  // assign(index, value) function pointer
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__resize_function__TriggerInteractionGate_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__TriggerInteractionGate_Event_message_members = {
  "navpro_enterprise_interfaces__srv",  // message namespace
  "TriggerInteractionGate_Event",  // message name
  3,  // number of fields
  sizeof(navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event),
  false,  // has_any_key_member_
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__TriggerInteractionGate_Event_message_member_array,  // message members
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__TriggerInteractionGate_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__TriggerInteractionGate_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__TriggerInteractionGate_Event_message_type_support_handle = {
  0,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__TriggerInteractionGate_Event_message_members,
  get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__get_type_hash,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__get_type_description,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navpro_enterprise_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Event)() {
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__TriggerInteractionGate_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__TriggerInteractionGate_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Request)();
  navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__TriggerInteractionGate_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Response)();
  if (!navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__TriggerInteractionGate_Event_message_type_support_handle.typesupport_identifier) {
    navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__TriggerInteractionGate_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__TriggerInteractionGate_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "navpro_enterprise_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers navpro_enterprise_interfaces__srv__detail__trigger_interaction_gate__rosidl_typesupport_introspection_c__TriggerInteractionGate_service_members = {
  "navpro_enterprise_interfaces__srv",  // service namespace
  "TriggerInteractionGate",  // service name
  // the following fields are initialized below on first access
  NULL,  // request message
  // navpro_enterprise_interfaces__srv__detail__trigger_interaction_gate__rosidl_typesupport_introspection_c__TriggerInteractionGate_Request_message_type_support_handle,
  NULL,  // response message
  // navpro_enterprise_interfaces__srv__detail__trigger_interaction_gate__rosidl_typesupport_introspection_c__TriggerInteractionGate_Response_message_type_support_handle
  NULL  // event_message
  // navpro_enterprise_interfaces__srv__detail__trigger_interaction_gate__rosidl_typesupport_introspection_c__TriggerInteractionGate_Response_message_type_support_handle
};


static rosidl_service_type_support_t navpro_enterprise_interfaces__srv__detail__trigger_interaction_gate__rosidl_typesupport_introspection_c__TriggerInteractionGate_service_type_support_handle = {
  0,
  &navpro_enterprise_interfaces__srv__detail__trigger_interaction_gate__rosidl_typesupport_introspection_c__TriggerInteractionGate_service_members,
  get_service_typesupport_handle_function,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request__rosidl_typesupport_introspection_c__TriggerInteractionGate_Request_message_type_support_handle,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response__rosidl_typesupport_introspection_c__TriggerInteractionGate_Response_message_type_support_handle,
  &navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event__rosidl_typesupport_introspection_c__TriggerInteractionGate_Event_message_type_support_handle,
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

// Forward declaration of message type support functions for service members
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Request)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Response)(void);

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Event)(void);

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_navpro_enterprise_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate)(void) {
  if (!navpro_enterprise_interfaces__srv__detail__trigger_interaction_gate__rosidl_typesupport_introspection_c__TriggerInteractionGate_service_type_support_handle.typesupport_identifier) {
    navpro_enterprise_interfaces__srv__detail__trigger_interaction_gate__rosidl_typesupport_introspection_c__TriggerInteractionGate_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)navpro_enterprise_interfaces__srv__detail__trigger_interaction_gate__rosidl_typesupport_introspection_c__TriggerInteractionGate_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, srv, TriggerInteractionGate_Event)()->data;
  }

  return &navpro_enterprise_interfaces__srv__detail__trigger_interaction_gate__rosidl_typesupport_introspection_c__TriggerInteractionGate_service_type_support_handle;
}
