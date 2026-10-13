// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from navpro_enterprise_interfaces:action/ExecuteMission.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "navpro_enterprise_interfaces/action/detail/execute_mission__struct.h"
#include "navpro_enterprise_interfaces/action/detail/execute_mission__type_support.h"
#include "navpro_enterprise_interfaces/action/detail/execute_mission__functions.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace navpro_enterprise_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteMission_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteMission_Goal_type_support_ids_t;

static const _ExecuteMission_Goal_type_support_ids_t _ExecuteMission_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteMission_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteMission_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteMission_Goal_type_support_symbol_names_t _ExecuteMission_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, action, ExecuteMission_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, action, ExecuteMission_Goal)),
  }
};

typedef struct _ExecuteMission_Goal_type_support_data_t
{
  void * data[2];
} _ExecuteMission_Goal_type_support_data_t;

static _ExecuteMission_Goal_type_support_data_t _ExecuteMission_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteMission_Goal_message_typesupport_map = {
  2,
  "navpro_enterprise_interfaces",
  &_ExecuteMission_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteMission_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteMission_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteMission_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteMission_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__action__ExecuteMission_Goal__get_type_hash,
  &navpro_enterprise_interfaces__action__ExecuteMission_Goal__get_type_description,
  &navpro_enterprise_interfaces__action__ExecuteMission_Goal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navpro_enterprise_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navpro_enterprise_interfaces, action, ExecuteMission_Goal)() {
  return &::navpro_enterprise_interfaces::action::rosidl_typesupport_c::ExecuteMission_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__type_support.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navpro_enterprise_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteMission_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteMission_Result_type_support_ids_t;

static const _ExecuteMission_Result_type_support_ids_t _ExecuteMission_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteMission_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteMission_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteMission_Result_type_support_symbol_names_t _ExecuteMission_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, action, ExecuteMission_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, action, ExecuteMission_Result)),
  }
};

typedef struct _ExecuteMission_Result_type_support_data_t
{
  void * data[2];
} _ExecuteMission_Result_type_support_data_t;

static _ExecuteMission_Result_type_support_data_t _ExecuteMission_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteMission_Result_message_typesupport_map = {
  2,
  "navpro_enterprise_interfaces",
  &_ExecuteMission_Result_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteMission_Result_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteMission_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteMission_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteMission_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__action__ExecuteMission_Result__get_type_hash,
  &navpro_enterprise_interfaces__action__ExecuteMission_Result__get_type_description,
  &navpro_enterprise_interfaces__action__ExecuteMission_Result__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navpro_enterprise_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navpro_enterprise_interfaces, action, ExecuteMission_Result)() {
  return &::navpro_enterprise_interfaces::action::rosidl_typesupport_c::ExecuteMission_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__type_support.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navpro_enterprise_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteMission_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteMission_Feedback_type_support_ids_t;

static const _ExecuteMission_Feedback_type_support_ids_t _ExecuteMission_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteMission_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteMission_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteMission_Feedback_type_support_symbol_names_t _ExecuteMission_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, action, ExecuteMission_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, action, ExecuteMission_Feedback)),
  }
};

typedef struct _ExecuteMission_Feedback_type_support_data_t
{
  void * data[2];
} _ExecuteMission_Feedback_type_support_data_t;

static _ExecuteMission_Feedback_type_support_data_t _ExecuteMission_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteMission_Feedback_message_typesupport_map = {
  2,
  "navpro_enterprise_interfaces",
  &_ExecuteMission_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteMission_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteMission_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteMission_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteMission_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__action__ExecuteMission_Feedback__get_type_hash,
  &navpro_enterprise_interfaces__action__ExecuteMission_Feedback__get_type_description,
  &navpro_enterprise_interfaces__action__ExecuteMission_Feedback__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navpro_enterprise_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navpro_enterprise_interfaces, action, ExecuteMission_Feedback)() {
  return &::navpro_enterprise_interfaces::action::rosidl_typesupport_c::ExecuteMission_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__type_support.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navpro_enterprise_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteMission_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteMission_SendGoal_Request_type_support_ids_t;

static const _ExecuteMission_SendGoal_Request_type_support_ids_t _ExecuteMission_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteMission_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteMission_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteMission_SendGoal_Request_type_support_symbol_names_t _ExecuteMission_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, action, ExecuteMission_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, action, ExecuteMission_SendGoal_Request)),
  }
};

typedef struct _ExecuteMission_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _ExecuteMission_SendGoal_Request_type_support_data_t;

static _ExecuteMission_SendGoal_Request_type_support_data_t _ExecuteMission_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteMission_SendGoal_Request_message_typesupport_map = {
  2,
  "navpro_enterprise_interfaces",
  &_ExecuteMission_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteMission_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteMission_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteMission_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteMission_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__get_type_hash,
  &navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__get_type_description,
  &navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navpro_enterprise_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navpro_enterprise_interfaces, action, ExecuteMission_SendGoal_Request)() {
  return &::navpro_enterprise_interfaces::action::rosidl_typesupport_c::ExecuteMission_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__type_support.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navpro_enterprise_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteMission_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteMission_SendGoal_Response_type_support_ids_t;

static const _ExecuteMission_SendGoal_Response_type_support_ids_t _ExecuteMission_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteMission_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteMission_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteMission_SendGoal_Response_type_support_symbol_names_t _ExecuteMission_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, action, ExecuteMission_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, action, ExecuteMission_SendGoal_Response)),
  }
};

typedef struct _ExecuteMission_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _ExecuteMission_SendGoal_Response_type_support_data_t;

static _ExecuteMission_SendGoal_Response_type_support_data_t _ExecuteMission_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteMission_SendGoal_Response_message_typesupport_map = {
  2,
  "navpro_enterprise_interfaces",
  &_ExecuteMission_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteMission_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteMission_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteMission_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteMission_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__get_type_hash,
  &navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__get_type_description,
  &navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navpro_enterprise_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navpro_enterprise_interfaces, action, ExecuteMission_SendGoal_Response)() {
  return &::navpro_enterprise_interfaces::action::rosidl_typesupport_c::ExecuteMission_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__type_support.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navpro_enterprise_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteMission_SendGoal_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteMission_SendGoal_Event_type_support_ids_t;

static const _ExecuteMission_SendGoal_Event_type_support_ids_t _ExecuteMission_SendGoal_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteMission_SendGoal_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteMission_SendGoal_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteMission_SendGoal_Event_type_support_symbol_names_t _ExecuteMission_SendGoal_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, action, ExecuteMission_SendGoal_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, action, ExecuteMission_SendGoal_Event)),
  }
};

typedef struct _ExecuteMission_SendGoal_Event_type_support_data_t
{
  void * data[2];
} _ExecuteMission_SendGoal_Event_type_support_data_t;

static _ExecuteMission_SendGoal_Event_type_support_data_t _ExecuteMission_SendGoal_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteMission_SendGoal_Event_message_typesupport_map = {
  2,
  "navpro_enterprise_interfaces",
  &_ExecuteMission_SendGoal_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteMission_SendGoal_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteMission_SendGoal_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteMission_SendGoal_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteMission_SendGoal_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__get_type_hash,
  &navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__get_type_description,
  &navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navpro_enterprise_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navpro_enterprise_interfaces, action, ExecuteMission_SendGoal_Event)() {
  return &::navpro_enterprise_interfaces::action::rosidl_typesupport_c::ExecuteMission_SendGoal_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
#include "service_msgs/msg/service_event_info.h"
#include "builtin_interfaces/msg/time.h"

namespace navpro_enterprise_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _ExecuteMission_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteMission_SendGoal_type_support_ids_t;

static const _ExecuteMission_SendGoal_type_support_ids_t _ExecuteMission_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteMission_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteMission_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteMission_SendGoal_type_support_symbol_names_t _ExecuteMission_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, action, ExecuteMission_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, action, ExecuteMission_SendGoal)),
  }
};

typedef struct _ExecuteMission_SendGoal_type_support_data_t
{
  void * data[2];
} _ExecuteMission_SendGoal_type_support_data_t;

static _ExecuteMission_SendGoal_type_support_data_t _ExecuteMission_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteMission_SendGoal_service_typesupport_map = {
  2,
  "navpro_enterprise_interfaces",
  &_ExecuteMission_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_ExecuteMission_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_ExecuteMission_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ExecuteMission_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteMission_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ExecuteMission_SendGoal_Request_message_type_support_handle,
  &ExecuteMission_SendGoal_Response_message_type_support_handle,
  &ExecuteMission_SendGoal_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    navpro_enterprise_interfaces,
    action,
    ExecuteMission_SendGoal
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    navpro_enterprise_interfaces,
    action,
    ExecuteMission_SendGoal
  ),
  &navpro_enterprise_interfaces__action__ExecuteMission_SendGoal__get_type_hash,
  &navpro_enterprise_interfaces__action__ExecuteMission_SendGoal__get_type_description,
  &navpro_enterprise_interfaces__action__ExecuteMission_SendGoal__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navpro_enterprise_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, navpro_enterprise_interfaces, action, ExecuteMission_SendGoal)() {
  return &::navpro_enterprise_interfaces::action::rosidl_typesupport_c::ExecuteMission_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__type_support.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navpro_enterprise_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteMission_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteMission_GetResult_Request_type_support_ids_t;

static const _ExecuteMission_GetResult_Request_type_support_ids_t _ExecuteMission_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteMission_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteMission_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteMission_GetResult_Request_type_support_symbol_names_t _ExecuteMission_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, action, ExecuteMission_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, action, ExecuteMission_GetResult_Request)),
  }
};

typedef struct _ExecuteMission_GetResult_Request_type_support_data_t
{
  void * data[2];
} _ExecuteMission_GetResult_Request_type_support_data_t;

static _ExecuteMission_GetResult_Request_type_support_data_t _ExecuteMission_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteMission_GetResult_Request_message_typesupport_map = {
  2,
  "navpro_enterprise_interfaces",
  &_ExecuteMission_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteMission_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteMission_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteMission_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteMission_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__get_type_hash,
  &navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__get_type_description,
  &navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navpro_enterprise_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navpro_enterprise_interfaces, action, ExecuteMission_GetResult_Request)() {
  return &::navpro_enterprise_interfaces::action::rosidl_typesupport_c::ExecuteMission_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__type_support.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navpro_enterprise_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteMission_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteMission_GetResult_Response_type_support_ids_t;

static const _ExecuteMission_GetResult_Response_type_support_ids_t _ExecuteMission_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteMission_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteMission_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteMission_GetResult_Response_type_support_symbol_names_t _ExecuteMission_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, action, ExecuteMission_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, action, ExecuteMission_GetResult_Response)),
  }
};

typedef struct _ExecuteMission_GetResult_Response_type_support_data_t
{
  void * data[2];
} _ExecuteMission_GetResult_Response_type_support_data_t;

static _ExecuteMission_GetResult_Response_type_support_data_t _ExecuteMission_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteMission_GetResult_Response_message_typesupport_map = {
  2,
  "navpro_enterprise_interfaces",
  &_ExecuteMission_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteMission_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteMission_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteMission_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteMission_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__get_type_hash,
  &navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__get_type_description,
  &navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navpro_enterprise_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navpro_enterprise_interfaces, action, ExecuteMission_GetResult_Response)() {
  return &::navpro_enterprise_interfaces::action::rosidl_typesupport_c::ExecuteMission_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__type_support.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navpro_enterprise_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteMission_GetResult_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteMission_GetResult_Event_type_support_ids_t;

static const _ExecuteMission_GetResult_Event_type_support_ids_t _ExecuteMission_GetResult_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteMission_GetResult_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteMission_GetResult_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteMission_GetResult_Event_type_support_symbol_names_t _ExecuteMission_GetResult_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, action, ExecuteMission_GetResult_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, action, ExecuteMission_GetResult_Event)),
  }
};

typedef struct _ExecuteMission_GetResult_Event_type_support_data_t
{
  void * data[2];
} _ExecuteMission_GetResult_Event_type_support_data_t;

static _ExecuteMission_GetResult_Event_type_support_data_t _ExecuteMission_GetResult_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteMission_GetResult_Event_message_typesupport_map = {
  2,
  "navpro_enterprise_interfaces",
  &_ExecuteMission_GetResult_Event_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteMission_GetResult_Event_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteMission_GetResult_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteMission_GetResult_Event_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteMission_GetResult_Event_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__get_type_hash,
  &navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__get_type_description,
  &navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navpro_enterprise_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navpro_enterprise_interfaces, action, ExecuteMission_GetResult_Event)() {
  return &::navpro_enterprise_interfaces::action::rosidl_typesupport_c::ExecuteMission_GetResult_Event_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "service_msgs/msg/service_event_info.h"
// already included above
// #include "builtin_interfaces/msg/time.h"

namespace navpro_enterprise_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{
typedef struct _ExecuteMission_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteMission_GetResult_type_support_ids_t;

static const _ExecuteMission_GetResult_type_support_ids_t _ExecuteMission_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteMission_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteMission_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteMission_GetResult_type_support_symbol_names_t _ExecuteMission_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, action, ExecuteMission_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, action, ExecuteMission_GetResult)),
  }
};

typedef struct _ExecuteMission_GetResult_type_support_data_t
{
  void * data[2];
} _ExecuteMission_GetResult_type_support_data_t;

static _ExecuteMission_GetResult_type_support_data_t _ExecuteMission_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteMission_GetResult_service_typesupport_map = {
  2,
  "navpro_enterprise_interfaces",
  &_ExecuteMission_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_ExecuteMission_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_ExecuteMission_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ExecuteMission_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteMission_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
  &ExecuteMission_GetResult_Request_message_type_support_handle,
  &ExecuteMission_GetResult_Response_message_type_support_handle,
  &ExecuteMission_GetResult_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    navpro_enterprise_interfaces,
    action,
    ExecuteMission_GetResult
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    navpro_enterprise_interfaces,
    action,
    ExecuteMission_GetResult
  ),
  &navpro_enterprise_interfaces__action__ExecuteMission_GetResult__get_type_hash,
  &navpro_enterprise_interfaces__action__ExecuteMission_GetResult__get_type_description,
  &navpro_enterprise_interfaces__action__ExecuteMission_GetResult__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navpro_enterprise_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, navpro_enterprise_interfaces, action, ExecuteMission_GetResult)() {
  return &::navpro_enterprise_interfaces::action::rosidl_typesupport_c::ExecuteMission_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__struct.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__type_support.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__functions.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace navpro_enterprise_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _ExecuteMission_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ExecuteMission_FeedbackMessage_type_support_ids_t;

static const _ExecuteMission_FeedbackMessage_type_support_ids_t _ExecuteMission_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ExecuteMission_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ExecuteMission_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ExecuteMission_FeedbackMessage_type_support_symbol_names_t _ExecuteMission_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, navpro_enterprise_interfaces, action, ExecuteMission_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, navpro_enterprise_interfaces, action, ExecuteMission_FeedbackMessage)),
  }
};

typedef struct _ExecuteMission_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _ExecuteMission_FeedbackMessage_type_support_data_t;

static _ExecuteMission_FeedbackMessage_type_support_data_t _ExecuteMission_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ExecuteMission_FeedbackMessage_message_typesupport_map = {
  2,
  "navpro_enterprise_interfaces",
  &_ExecuteMission_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_ExecuteMission_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_ExecuteMission_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ExecuteMission_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ExecuteMission_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
  &navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__get_type_hash,
  &navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__get_type_description,
  &navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__get_type_description_sources,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace navpro_enterprise_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, navpro_enterprise_interfaces, action, ExecuteMission_FeedbackMessage)() {
  return &::navpro_enterprise_interfaces::action::rosidl_typesupport_c::ExecuteMission_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "navpro_enterprise_interfaces/action/execute_mission.h"
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__type_support.h"

static rosidl_action_type_support_t _navpro_enterprise_interfaces__action__ExecuteMission__typesupport_c = {
  NULL, NULL, NULL, NULL, NULL,
  &navpro_enterprise_interfaces__action__ExecuteMission__get_type_hash,
  &navpro_enterprise_interfaces__action__ExecuteMission__get_type_description,
  &navpro_enterprise_interfaces__action__ExecuteMission__get_type_description_sources,
};

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, navpro_enterprise_interfaces, action, ExecuteMission)()
{
  // Thread-safe by always writing the same values to the static struct
  _navpro_enterprise_interfaces__action__ExecuteMission__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, navpro_enterprise_interfaces, action, ExecuteMission_SendGoal)();
  _navpro_enterprise_interfaces__action__ExecuteMission__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, navpro_enterprise_interfaces, action, ExecuteMission_GetResult)();
  _navpro_enterprise_interfaces__action__ExecuteMission__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _navpro_enterprise_interfaces__action__ExecuteMission__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, navpro_enterprise_interfaces, action, ExecuteMission_FeedbackMessage)();
  _navpro_enterprise_interfaces__action__ExecuteMission__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_navpro_enterprise_interfaces__action__ExecuteMission__typesupport_c;
}

#ifdef __cplusplus
}
#endif
