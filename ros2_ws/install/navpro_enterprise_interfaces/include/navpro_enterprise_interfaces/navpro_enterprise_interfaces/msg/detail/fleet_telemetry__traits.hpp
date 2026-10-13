// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from navpro_enterprise_interfaces:msg/FleetTelemetry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "navpro_enterprise_interfaces/msg/fleet_telemetry.hpp"


#ifndef NAVPRO_ENTERPRISE_INTERFACES__MSG__DETAIL__FLEET_TELEMETRY__TRAITS_HPP_
#define NAVPRO_ENTERPRISE_INTERFACES__MSG__DETAIL__FLEET_TELEMETRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "navpro_enterprise_interfaces/msg/detail/fleet_telemetry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__traits.hpp"

namespace navpro_enterprise_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const FleetTelemetry & msg,
  std::ostream & out)
{
  out << "{";
  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
    out << ", ";
  }

  // member: robot_id
  {
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    to_flow_style_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: battery_percentage
  {
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << ", ";
  }

  // member: battery_voltage
  {
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << ", ";
  }

  // member: is_charging
  {
    out << "is_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.is_charging, out);
    out << ", ";
  }

  // member: estop_engaged
  {
    out << "estop_engaged: ";
    rosidl_generator_traits::value_to_yaml(msg.estop_engaged, out);
    out << ", ";
  }

  // member: operational_status
  {
    out << "operational_status: ";
    rosidl_generator_traits::value_to_yaml(msg.operational_status, out);
    out << ", ";
  }

  // member: current_mission_id
  {
    out << "current_mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_mission_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FleetTelemetry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }

  // member: robot_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_id: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_id, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity:\n";
    to_block_style_yaml(msg.velocity, out, indentation + 2);
  }

  // member: battery_percentage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percentage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percentage, out);
    out << "\n";
  }

  // member: battery_voltage
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_voltage: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_voltage, out);
    out << "\n";
  }

  // member: is_charging
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_charging: ";
    rosidl_generator_traits::value_to_yaml(msg.is_charging, out);
    out << "\n";
  }

  // member: estop_engaged
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "estop_engaged: ";
    rosidl_generator_traits::value_to_yaml(msg.estop_engaged, out);
    out << "\n";
  }

  // member: operational_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operational_status: ";
    rosidl_generator_traits::value_to_yaml(msg.operational_status, out);
    out << "\n";
  }

  // member: current_mission_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_mission_id: ";
    rosidl_generator_traits::value_to_yaml(msg.current_mission_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FleetTelemetry & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace navpro_enterprise_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use navpro_enterprise_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const navpro_enterprise_interfaces::msg::FleetTelemetry & msg,
  std::ostream & out, size_t indentation = 0)
{
  navpro_enterprise_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use navpro_enterprise_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const navpro_enterprise_interfaces::msg::FleetTelemetry & msg)
{
  return navpro_enterprise_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<navpro_enterprise_interfaces::msg::FleetTelemetry>()
{
  return "navpro_enterprise_interfaces::msg::FleetTelemetry";
}

template<>
inline const char * name<navpro_enterprise_interfaces::msg::FleetTelemetry>()
{
  return "navpro_enterprise_interfaces/msg/FleetTelemetry";
}

template<>
struct has_fixed_size<navpro_enterprise_interfaces::msg::FleetTelemetry>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<navpro_enterprise_interfaces::msg::FleetTelemetry>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<navpro_enterprise_interfaces::msg::FleetTelemetry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAVPRO_ENTERPRISE_INTERFACES__MSG__DETAIL__FLEET_TELEMETRY__TRAITS_HPP_
