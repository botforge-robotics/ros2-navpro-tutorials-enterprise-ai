// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from navpro_enterprise_interfaces:srv/TriggerInteractionGate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "navpro_enterprise_interfaces/srv/trigger_interaction_gate.hpp"


#ifndef NAVPRO_ENTERPRISE_INTERFACES__SRV__DETAIL__TRIGGER_INTERACTION_GATE__TRAITS_HPP_
#define NAVPRO_ENTERPRISE_INTERFACES__SRV__DETAIL__TRIGGER_INTERACTION_GATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "navpro_enterprise_interfaces/srv/detail/trigger_interaction_gate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace navpro_enterprise_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TriggerInteractionGate_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: gate_id
  {
    out << "gate_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gate_id, out);
    out << ", ";
  }

  // member: prompt_message
  {
    out << "prompt_message: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt_message, out);
    out << ", ";
  }

  // member: available_actions
  {
    if (msg.available_actions.size() == 0) {
      out << "available_actions: []";
    } else {
      out << "available_actions: [";
      size_t pending_items = msg.available_actions.size();
      for (auto item : msg.available_actions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: timeout_seconds
  {
    out << "timeout_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_seconds, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TriggerInteractionGate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gate_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gate_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gate_id, out);
    out << "\n";
  }

  // member: prompt_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prompt_message: ";
    rosidl_generator_traits::value_to_yaml(msg.prompt_message, out);
    out << "\n";
  }

  // member: available_actions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.available_actions.size() == 0) {
      out << "available_actions: []\n";
    } else {
      out << "available_actions:\n";
      for (auto item : msg.available_actions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: timeout_seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout_seconds: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout_seconds, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TriggerInteractionGate_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace navpro_enterprise_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navpro_enterprise_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  navpro_enterprise_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navpro_enterprise_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request & msg)
{
  return navpro_enterprise_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request>()
{
  return "navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request";
}

template<>
inline const char * name<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request>()
{
  return "navpro_enterprise_interfaces/srv/TriggerInteractionGate_Request";
}

template<>
struct has_fixed_size<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace navpro_enterprise_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TriggerInteractionGate_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: selected_action
  {
    out << "selected_action: ";
    rosidl_generator_traits::value_to_yaml(msg.selected_action, out);
    out << ", ";
  }

  // member: operator_notes
  {
    out << "operator_notes: ";
    rosidl_generator_traits::value_to_yaml(msg.operator_notes, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TriggerInteractionGate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: selected_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "selected_action: ";
    rosidl_generator_traits::value_to_yaml(msg.selected_action, out);
    out << "\n";
  }

  // member: operator_notes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operator_notes: ";
    rosidl_generator_traits::value_to_yaml(msg.operator_notes, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TriggerInteractionGate_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace navpro_enterprise_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navpro_enterprise_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  navpro_enterprise_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navpro_enterprise_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response & msg)
{
  return navpro_enterprise_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response>()
{
  return "navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response";
}

template<>
inline const char * name<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response>()
{
  return "navpro_enterprise_interfaces/srv/TriggerInteractionGate_Response";
}

template<>
struct has_fixed_size<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace navpro_enterprise_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const TriggerInteractionGate_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TriggerInteractionGate_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TriggerInteractionGate_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace navpro_enterprise_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navpro_enterprise_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  navpro_enterprise_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navpro_enterprise_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event & msg)
{
  return navpro_enterprise_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event>()
{
  return "navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event";
}

template<>
inline const char * name<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event>()
{
  return "navpro_enterprise_interfaces/srv/TriggerInteractionGate_Event";
}

template<>
struct has_fixed_size<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event>
  : std::integral_constant<bool, has_bounded_size<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request>::value && has_bounded_size<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response>::value && has_bounded_size<service_msgs::msg::ServiceEventInfo>::value> {};

template<>
struct is_message<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<navpro_enterprise_interfaces::srv::TriggerInteractionGate>()
{
  return "navpro_enterprise_interfaces::srv::TriggerInteractionGate";
}

template<>
inline const char * name<navpro_enterprise_interfaces::srv::TriggerInteractionGate>()
{
  return "navpro_enterprise_interfaces/srv/TriggerInteractionGate";
}

template<>
struct has_fixed_size<navpro_enterprise_interfaces::srv::TriggerInteractionGate>
  : std::integral_constant<
    bool,
    has_fixed_size<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request>::value &&
    has_fixed_size<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response>::value
  >
{
};

template<>
struct has_bounded_size<navpro_enterprise_interfaces::srv::TriggerInteractionGate>
  : std::integral_constant<
    bool,
    has_bounded_size<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request>::value &&
    has_bounded_size<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response>::value
  >
{
};

template<>
struct is_service<navpro_enterprise_interfaces::srv::TriggerInteractionGate>
  : std::true_type
{
};

template<>
struct is_service_request<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request>
  : std::true_type
{
};

template<>
struct is_service_response<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAVPRO_ENTERPRISE_INTERFACES__SRV__DETAIL__TRIGGER_INTERACTION_GATE__TRAITS_HPP_
