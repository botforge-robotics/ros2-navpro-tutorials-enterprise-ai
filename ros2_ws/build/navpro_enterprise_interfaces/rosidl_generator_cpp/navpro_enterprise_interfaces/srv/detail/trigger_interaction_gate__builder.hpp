// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navpro_enterprise_interfaces:srv/TriggerInteractionGate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "navpro_enterprise_interfaces/srv/trigger_interaction_gate.hpp"


#ifndef NAVPRO_ENTERPRISE_INTERFACES__SRV__DETAIL__TRIGGER_INTERACTION_GATE__BUILDER_HPP_
#define NAVPRO_ENTERPRISE_INTERFACES__SRV__DETAIL__TRIGGER_INTERACTION_GATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace navpro_enterprise_interfaces
{

namespace srv
{

namespace builder
{

class Init_TriggerInteractionGate_Request_timeout_seconds
{
public:
  explicit Init_TriggerInteractionGate_Request_timeout_seconds(::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request & msg)
  : msg_(msg)
  {}
  ::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request timeout_seconds(::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request::_timeout_seconds_type arg)
  {
    msg_.timeout_seconds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request msg_;
};

class Init_TriggerInteractionGate_Request_available_actions
{
public:
  explicit Init_TriggerInteractionGate_Request_available_actions(::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request & msg)
  : msg_(msg)
  {}
  Init_TriggerInteractionGate_Request_timeout_seconds available_actions(::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request::_available_actions_type arg)
  {
    msg_.available_actions = std::move(arg);
    return Init_TriggerInteractionGate_Request_timeout_seconds(msg_);
  }

private:
  ::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request msg_;
};

class Init_TriggerInteractionGate_Request_prompt_message
{
public:
  explicit Init_TriggerInteractionGate_Request_prompt_message(::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request & msg)
  : msg_(msg)
  {}
  Init_TriggerInteractionGate_Request_available_actions prompt_message(::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request::_prompt_message_type arg)
  {
    msg_.prompt_message = std::move(arg);
    return Init_TriggerInteractionGate_Request_available_actions(msg_);
  }

private:
  ::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request msg_;
};

class Init_TriggerInteractionGate_Request_gate_id
{
public:
  Init_TriggerInteractionGate_Request_gate_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TriggerInteractionGate_Request_prompt_message gate_id(::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request::_gate_id_type arg)
  {
    msg_.gate_id = std::move(arg);
    return Init_TriggerInteractionGate_Request_prompt_message(msg_);
  }

private:
  ::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request>()
{
  return navpro_enterprise_interfaces::srv::builder::Init_TriggerInteractionGate_Request_gate_id();
}

}  // namespace navpro_enterprise_interfaces


namespace navpro_enterprise_interfaces
{

namespace srv
{

namespace builder
{

class Init_TriggerInteractionGate_Response_operator_notes
{
public:
  explicit Init_TriggerInteractionGate_Response_operator_notes(::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response & msg)
  : msg_(msg)
  {}
  ::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response operator_notes(::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response::_operator_notes_type arg)
  {
    msg_.operator_notes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response msg_;
};

class Init_TriggerInteractionGate_Response_selected_action
{
public:
  explicit Init_TriggerInteractionGate_Response_selected_action(::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response & msg)
  : msg_(msg)
  {}
  Init_TriggerInteractionGate_Response_operator_notes selected_action(::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response::_selected_action_type arg)
  {
    msg_.selected_action = std::move(arg);
    return Init_TriggerInteractionGate_Response_operator_notes(msg_);
  }

private:
  ::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response msg_;
};

class Init_TriggerInteractionGate_Response_success
{
public:
  Init_TriggerInteractionGate_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TriggerInteractionGate_Response_selected_action success(::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TriggerInteractionGate_Response_selected_action(msg_);
  }

private:
  ::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response>()
{
  return navpro_enterprise_interfaces::srv::builder::Init_TriggerInteractionGate_Response_success();
}

}  // namespace navpro_enterprise_interfaces


namespace navpro_enterprise_interfaces
{

namespace srv
{

namespace builder
{

class Init_TriggerInteractionGate_Event_response
{
public:
  explicit Init_TriggerInteractionGate_Event_response(::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event & msg)
  : msg_(msg)
  {}
  ::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event response(::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event msg_;
};

class Init_TriggerInteractionGate_Event_request
{
public:
  explicit Init_TriggerInteractionGate_Event_request(::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event & msg)
  : msg_(msg)
  {}
  Init_TriggerInteractionGate_Event_response request(::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_TriggerInteractionGate_Event_response(msg_);
  }

private:
  ::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event msg_;
};

class Init_TriggerInteractionGate_Event_info
{
public:
  Init_TriggerInteractionGate_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TriggerInteractionGate_Event_request info(::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_TriggerInteractionGate_Event_request(msg_);
  }

private:
  ::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event>()
{
  return navpro_enterprise_interfaces::srv::builder::Init_TriggerInteractionGate_Event_info();
}

}  // namespace navpro_enterprise_interfaces

#endif  // NAVPRO_ENTERPRISE_INTERFACES__SRV__DETAIL__TRIGGER_INTERACTION_GATE__BUILDER_HPP_
