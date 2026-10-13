// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from navpro_enterprise_interfaces:action/ExecuteMission.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "navpro_enterprise_interfaces/action/execute_mission.h"


#ifndef NAVPRO_ENTERPRISE_INTERFACES__ACTION__DETAIL__EXECUTE_MISSION__STRUCT_H_
#define NAVPRO_ENTERPRISE_INTERFACES__ACTION__DETAIL__EXECUTE_MISSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mission_id'
// Member 'mission_json'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteMission in the package navpro_enterprise_interfaces.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_Goal
{
  rosidl_runtime_c__String mission_id;
  rosidl_runtime_c__String mission_json;
} navpro_enterprise_interfaces__action__ExecuteMission_Goal;

// Struct for a sequence of navpro_enterprise_interfaces__action__ExecuteMission_Goal.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence
{
  navpro_enterprise_interfaces__action__ExecuteMission_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navpro_enterprise_interfaces__action__ExecuteMission_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'execution_summary'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteMission in the package navpro_enterprise_interfaces.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_Result
{
  bool success;
  int32_t completed_nodes_count;
  rosidl_runtime_c__String execution_summary;
} navpro_enterprise_interfaces__action__ExecuteMission_Result;

// Struct for a sequence of navpro_enterprise_interfaces__action__ExecuteMission_Result.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence
{
  navpro_enterprise_interfaces__action__ExecuteMission_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navpro_enterprise_interfaces__action__ExecuteMission_Result__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'active_node_name'
// Member 'active_node_status'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/ExecuteMission in the package navpro_enterprise_interfaces.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_Feedback
{
  int32_t current_node_index;
  int32_t total_nodes_count;
  rosidl_runtime_c__String active_node_name;
  rosidl_runtime_c__String active_node_status;
  float percent_complete;
} navpro_enterprise_interfaces__action__ExecuteMission_Feedback;

// Struct for a sequence of navpro_enterprise_interfaces__action__ExecuteMission_Feedback.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence
{
  navpro_enterprise_interfaces__action__ExecuteMission_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navpro_enterprise_interfaces__action__ExecuteMission_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "navpro_enterprise_interfaces/action/detail/execute_mission__struct.h"

/// Struct defined in action/ExecuteMission in the package navpro_enterprise_interfaces.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  navpro_enterprise_interfaces__action__ExecuteMission_Goal goal;
} navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request;

// Struct for a sequence of navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence
{
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/ExecuteMission in the package navpro_enterprise_interfaces.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response;

// Struct for a sequence of navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence
{
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ExecuteMission in the package navpro_enterprise_interfaces.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Request__Sequence request;
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Response__Sequence response;
} navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event;

// Struct for a sequence of navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence
{
  navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navpro_enterprise_interfaces__action__ExecuteMission_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/ExecuteMission in the package navpro_enterprise_interfaces.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request;

// Struct for a sequence of navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence
{
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__struct.h"

/// Struct defined in action/ExecuteMission in the package navpro_enterprise_interfaces.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response
{
  int8_t status;
  navpro_enterprise_interfaces__action__ExecuteMission_Result result;
} navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response;

// Struct for a sequence of navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence
{
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/ExecuteMission in the package navpro_enterprise_interfaces.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Request__Sequence request;
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Response__Sequence response;
} navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event;

// Struct for a sequence of navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence
{
  navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navpro_enterprise_interfaces__action__ExecuteMission_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "navpro_enterprise_interfaces/action/detail/execute_mission__struct.h"

/// Struct defined in action/ExecuteMission in the package navpro_enterprise_interfaces.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  navpro_enterprise_interfaces__action__ExecuteMission_Feedback feedback;
} navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage;

// Struct for a sequence of navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage.
typedef struct navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence
{
  navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navpro_enterprise_interfaces__action__ExecuteMission_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAVPRO_ENTERPRISE_INTERFACES__ACTION__DETAIL__EXECUTE_MISSION__STRUCT_H_
