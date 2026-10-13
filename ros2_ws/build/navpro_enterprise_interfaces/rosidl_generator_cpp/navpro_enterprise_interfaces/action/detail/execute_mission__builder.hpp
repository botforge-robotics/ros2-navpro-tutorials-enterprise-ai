// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navpro_enterprise_interfaces:action/ExecuteMission.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "navpro_enterprise_interfaces/action/execute_mission.hpp"


#ifndef NAVPRO_ENTERPRISE_INTERFACES__ACTION__DETAIL__EXECUTE_MISSION__BUILDER_HPP_
#define NAVPRO_ENTERPRISE_INTERFACES__ACTION__DETAIL__EXECUTE_MISSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "navpro_enterprise_interfaces/action/detail/execute_mission__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace navpro_enterprise_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_Goal_mission_json
{
public:
  explicit Init_ExecuteMission_Goal_mission_json(::navpro_enterprise_interfaces::action::ExecuteMission_Goal & msg)
  : msg_(msg)
  {}
  ::navpro_enterprise_interfaces::action::ExecuteMission_Goal mission_json(::navpro_enterprise_interfaces::action::ExecuteMission_Goal::_mission_json_type arg)
  {
    msg_.mission_json = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_Goal msg_;
};

class Init_ExecuteMission_Goal_mission_id
{
public:
  Init_ExecuteMission_Goal_mission_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMission_Goal_mission_json mission_id(::navpro_enterprise_interfaces::action::ExecuteMission_Goal::_mission_id_type arg)
  {
    msg_.mission_id = std::move(arg);
    return Init_ExecuteMission_Goal_mission_json(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navpro_enterprise_interfaces::action::ExecuteMission_Goal>()
{
  return navpro_enterprise_interfaces::action::builder::Init_ExecuteMission_Goal_mission_id();
}

}  // namespace navpro_enterprise_interfaces


namespace navpro_enterprise_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_Result_execution_summary
{
public:
  explicit Init_ExecuteMission_Result_execution_summary(::navpro_enterprise_interfaces::action::ExecuteMission_Result & msg)
  : msg_(msg)
  {}
  ::navpro_enterprise_interfaces::action::ExecuteMission_Result execution_summary(::navpro_enterprise_interfaces::action::ExecuteMission_Result::_execution_summary_type arg)
  {
    msg_.execution_summary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_Result msg_;
};

class Init_ExecuteMission_Result_completed_nodes_count
{
public:
  explicit Init_ExecuteMission_Result_completed_nodes_count(::navpro_enterprise_interfaces::action::ExecuteMission_Result & msg)
  : msg_(msg)
  {}
  Init_ExecuteMission_Result_execution_summary completed_nodes_count(::navpro_enterprise_interfaces::action::ExecuteMission_Result::_completed_nodes_count_type arg)
  {
    msg_.completed_nodes_count = std::move(arg);
    return Init_ExecuteMission_Result_execution_summary(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_Result msg_;
};

class Init_ExecuteMission_Result_success
{
public:
  Init_ExecuteMission_Result_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMission_Result_completed_nodes_count success(::navpro_enterprise_interfaces::action::ExecuteMission_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecuteMission_Result_completed_nodes_count(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navpro_enterprise_interfaces::action::ExecuteMission_Result>()
{
  return navpro_enterprise_interfaces::action::builder::Init_ExecuteMission_Result_success();
}

}  // namespace navpro_enterprise_interfaces


namespace navpro_enterprise_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_Feedback_percent_complete
{
public:
  explicit Init_ExecuteMission_Feedback_percent_complete(::navpro_enterprise_interfaces::action::ExecuteMission_Feedback & msg)
  : msg_(msg)
  {}
  ::navpro_enterprise_interfaces::action::ExecuteMission_Feedback percent_complete(::navpro_enterprise_interfaces::action::ExecuteMission_Feedback::_percent_complete_type arg)
  {
    msg_.percent_complete = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_Feedback msg_;
};

class Init_ExecuteMission_Feedback_active_node_status
{
public:
  explicit Init_ExecuteMission_Feedback_active_node_status(::navpro_enterprise_interfaces::action::ExecuteMission_Feedback & msg)
  : msg_(msg)
  {}
  Init_ExecuteMission_Feedback_percent_complete active_node_status(::navpro_enterprise_interfaces::action::ExecuteMission_Feedback::_active_node_status_type arg)
  {
    msg_.active_node_status = std::move(arg);
    return Init_ExecuteMission_Feedback_percent_complete(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_Feedback msg_;
};

class Init_ExecuteMission_Feedback_active_node_name
{
public:
  explicit Init_ExecuteMission_Feedback_active_node_name(::navpro_enterprise_interfaces::action::ExecuteMission_Feedback & msg)
  : msg_(msg)
  {}
  Init_ExecuteMission_Feedback_active_node_status active_node_name(::navpro_enterprise_interfaces::action::ExecuteMission_Feedback::_active_node_name_type arg)
  {
    msg_.active_node_name = std::move(arg);
    return Init_ExecuteMission_Feedback_active_node_status(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_Feedback msg_;
};

class Init_ExecuteMission_Feedback_total_nodes_count
{
public:
  explicit Init_ExecuteMission_Feedback_total_nodes_count(::navpro_enterprise_interfaces::action::ExecuteMission_Feedback & msg)
  : msg_(msg)
  {}
  Init_ExecuteMission_Feedback_active_node_name total_nodes_count(::navpro_enterprise_interfaces::action::ExecuteMission_Feedback::_total_nodes_count_type arg)
  {
    msg_.total_nodes_count = std::move(arg);
    return Init_ExecuteMission_Feedback_active_node_name(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_Feedback msg_;
};

class Init_ExecuteMission_Feedback_current_node_index
{
public:
  Init_ExecuteMission_Feedback_current_node_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMission_Feedback_total_nodes_count current_node_index(::navpro_enterprise_interfaces::action::ExecuteMission_Feedback::_current_node_index_type arg)
  {
    msg_.current_node_index = std::move(arg);
    return Init_ExecuteMission_Feedback_total_nodes_count(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navpro_enterprise_interfaces::action::ExecuteMission_Feedback>()
{
  return navpro_enterprise_interfaces::action::builder::Init_ExecuteMission_Feedback_current_node_index();
}

}  // namespace navpro_enterprise_interfaces


namespace navpro_enterprise_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_SendGoal_Request_goal
{
public:
  explicit Init_ExecuteMission_SendGoal_Request_goal(::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Request goal(::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Request msg_;
};

class Init_ExecuteMission_SendGoal_Request_goal_id
{
public:
  Init_ExecuteMission_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMission_SendGoal_Request_goal goal_id(::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteMission_SendGoal_Request_goal(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Request>()
{
  return navpro_enterprise_interfaces::action::builder::Init_ExecuteMission_SendGoal_Request_goal_id();
}

}  // namespace navpro_enterprise_interfaces


namespace navpro_enterprise_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_SendGoal_Response_stamp
{
public:
  explicit Init_ExecuteMission_SendGoal_Response_stamp(::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Response stamp(::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Response msg_;
};

class Init_ExecuteMission_SendGoal_Response_accepted
{
public:
  Init_ExecuteMission_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMission_SendGoal_Response_stamp accepted(::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecuteMission_SendGoal_Response_stamp(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Response>()
{
  return navpro_enterprise_interfaces::action::builder::Init_ExecuteMission_SendGoal_Response_accepted();
}

}  // namespace navpro_enterprise_interfaces


namespace navpro_enterprise_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_SendGoal_Event_response
{
public:
  explicit Init_ExecuteMission_SendGoal_Event_response(::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Event response(::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Event msg_;
};

class Init_ExecuteMission_SendGoal_Event_request
{
public:
  explicit Init_ExecuteMission_SendGoal_Event_request(::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteMission_SendGoal_Event_response request(::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteMission_SendGoal_Event_response(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Event msg_;
};

class Init_ExecuteMission_SendGoal_Event_info
{
public:
  Init_ExecuteMission_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMission_SendGoal_Event_request info(::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteMission_SendGoal_Event_request(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navpro_enterprise_interfaces::action::ExecuteMission_SendGoal_Event>()
{
  return navpro_enterprise_interfaces::action::builder::Init_ExecuteMission_SendGoal_Event_info();
}

}  // namespace navpro_enterprise_interfaces


namespace navpro_enterprise_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_GetResult_Request_goal_id
{
public:
  Init_ExecuteMission_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Request goal_id(::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Request>()
{
  return navpro_enterprise_interfaces::action::builder::Init_ExecuteMission_GetResult_Request_goal_id();
}

}  // namespace navpro_enterprise_interfaces


namespace navpro_enterprise_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_GetResult_Response_result
{
public:
  explicit Init_ExecuteMission_GetResult_Response_result(::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Response result(::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Response msg_;
};

class Init_ExecuteMission_GetResult_Response_status
{
public:
  Init_ExecuteMission_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMission_GetResult_Response_result status(::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecuteMission_GetResult_Response_result(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Response>()
{
  return navpro_enterprise_interfaces::action::builder::Init_ExecuteMission_GetResult_Response_status();
}

}  // namespace navpro_enterprise_interfaces


namespace navpro_enterprise_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_GetResult_Event_response
{
public:
  explicit Init_ExecuteMission_GetResult_Event_response(::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Event response(::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Event msg_;
};

class Init_ExecuteMission_GetResult_Event_request
{
public:
  explicit Init_ExecuteMission_GetResult_Event_request(::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_ExecuteMission_GetResult_Event_response request(::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ExecuteMission_GetResult_Event_response(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Event msg_;
};

class Init_ExecuteMission_GetResult_Event_info
{
public:
  Init_ExecuteMission_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMission_GetResult_Event_request info(::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_ExecuteMission_GetResult_Event_request(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navpro_enterprise_interfaces::action::ExecuteMission_GetResult_Event>()
{
  return navpro_enterprise_interfaces::action::builder::Init_ExecuteMission_GetResult_Event_info();
}

}  // namespace navpro_enterprise_interfaces


namespace navpro_enterprise_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteMission_FeedbackMessage_feedback
{
public:
  explicit Init_ExecuteMission_FeedbackMessage_feedback(::navpro_enterprise_interfaces::action::ExecuteMission_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::navpro_enterprise_interfaces::action::ExecuteMission_FeedbackMessage feedback(::navpro_enterprise_interfaces::action::ExecuteMission_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_FeedbackMessage msg_;
};

class Init_ExecuteMission_FeedbackMessage_goal_id
{
public:
  Init_ExecuteMission_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteMission_FeedbackMessage_feedback goal_id(::navpro_enterprise_interfaces::action::ExecuteMission_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteMission_FeedbackMessage_feedback(msg_);
  }

private:
  ::navpro_enterprise_interfaces::action::ExecuteMission_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::navpro_enterprise_interfaces::action::ExecuteMission_FeedbackMessage>()
{
  return navpro_enterprise_interfaces::action::builder::Init_ExecuteMission_FeedbackMessage_goal_id();
}

}  // namespace navpro_enterprise_interfaces

#endif  // NAVPRO_ENTERPRISE_INTERFACES__ACTION__DETAIL__EXECUTE_MISSION__BUILDER_HPP_
