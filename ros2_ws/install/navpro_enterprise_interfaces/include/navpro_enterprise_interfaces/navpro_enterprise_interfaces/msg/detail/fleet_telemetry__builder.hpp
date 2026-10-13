// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navpro_enterprise_interfaces:msg/FleetTelemetry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "navpro_enterprise_interfaces/msg/fleet_telemetry.hpp"


#ifndef NAVPRO_ENTERPRISE_INTERFACES__MSG__DETAIL__FLEET_TELEMETRY__BUILDER_HPP_
#define NAVPRO_ENTERPRISE_INTERFACES__MSG__DETAIL__FLEET_TELEMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "navpro_enterprise_interfaces/msg/detail/fleet_telemetry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace navpro_enterprise_interfaces
{

namespace msg
{

namespace builder
{

class Init_FleetTelemetry_current_mission_id
{
public:
  explicit Init_FleetTelemetry_current_mission_id(::navpro_enterprise_interfaces::msg::FleetTelemetry & msg)
  : msg_(msg)
  {}
  ::navpro_enterprise_interfaces::msg::FleetTelemetry current_mission_id(::navpro_enterprise_interfaces::msg::FleetTelemetry::_current_mission_id_type arg)
  {
    msg_.current_mission_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navpro_enterprise_interfaces::msg::FleetTelemetry msg_;
};

class Init_FleetTelemetry_operational_status
{
public:
  explicit Init_FleetTelemetry_operational_status(::navpro_enterprise_interfaces::msg::FleetTelemetry & msg)
  : msg_(msg)
  {}
  Init_FleetTelemetry_current_mission_id operational_status(::navpro_enterprise_interfaces::msg::FleetTelemetry::_operational_status_type arg)
  {
    msg_.operational_status = std::move(arg);
    return Init_FleetTelemetry_current_mission_id(msg_);
  }

private:
  ::navpro_enterprise_interfaces::msg::FleetTelemetry msg_;
};

class Init_FleetTelemetry_estop_engaged
{
public:
  explicit Init_FleetTelemetry_estop_engaged(::navpro_enterprise_interfaces::msg::FleetTelemetry & msg)
  : msg_(msg)
  {}
  Init_FleetTelemetry_operational_status estop_engaged(::navpro_enterprise_interfaces::msg::FleetTelemetry::_estop_engaged_type arg)
  {
    msg_.estop_engaged = std::move(arg);
    return Init_FleetTelemetry_operational_status(msg_);
  }

private:
  ::navpro_enterprise_interfaces::msg::FleetTelemetry msg_;
};

class Init_FleetTelemetry_is_charging
{
public:
  explicit Init_FleetTelemetry_is_charging(::navpro_enterprise_interfaces::msg::FleetTelemetry & msg)
  : msg_(msg)
  {}
  Init_FleetTelemetry_estop_engaged is_charging(::navpro_enterprise_interfaces::msg::FleetTelemetry::_is_charging_type arg)
  {
    msg_.is_charging = std::move(arg);
    return Init_FleetTelemetry_estop_engaged(msg_);
  }

private:
  ::navpro_enterprise_interfaces::msg::FleetTelemetry msg_;
};

class Init_FleetTelemetry_battery_voltage
{
public:
  explicit Init_FleetTelemetry_battery_voltage(::navpro_enterprise_interfaces::msg::FleetTelemetry & msg)
  : msg_(msg)
  {}
  Init_FleetTelemetry_is_charging battery_voltage(::navpro_enterprise_interfaces::msg::FleetTelemetry::_battery_voltage_type arg)
  {
    msg_.battery_voltage = std::move(arg);
    return Init_FleetTelemetry_is_charging(msg_);
  }

private:
  ::navpro_enterprise_interfaces::msg::FleetTelemetry msg_;
};

class Init_FleetTelemetry_battery_percentage
{
public:
  explicit Init_FleetTelemetry_battery_percentage(::navpro_enterprise_interfaces::msg::FleetTelemetry & msg)
  : msg_(msg)
  {}
  Init_FleetTelemetry_battery_voltage battery_percentage(::navpro_enterprise_interfaces::msg::FleetTelemetry::_battery_percentage_type arg)
  {
    msg_.battery_percentage = std::move(arg);
    return Init_FleetTelemetry_battery_voltage(msg_);
  }

private:
  ::navpro_enterprise_interfaces::msg::FleetTelemetry msg_;
};

class Init_FleetTelemetry_velocity
{
public:
  explicit Init_FleetTelemetry_velocity(::navpro_enterprise_interfaces::msg::FleetTelemetry & msg)
  : msg_(msg)
  {}
  Init_FleetTelemetry_battery_percentage velocity(::navpro_enterprise_interfaces::msg::FleetTelemetry::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_FleetTelemetry_battery_percentage(msg_);
  }

private:
  ::navpro_enterprise_interfaces::msg::FleetTelemetry msg_;
};

class Init_FleetTelemetry_pose
{
public:
  explicit Init_FleetTelemetry_pose(::navpro_enterprise_interfaces::msg::FleetTelemetry & msg)
  : msg_(msg)
  {}
  Init_FleetTelemetry_velocity pose(::navpro_enterprise_interfaces::msg::FleetTelemetry::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_FleetTelemetry_velocity(msg_);
  }

private:
  ::navpro_enterprise_interfaces::msg::FleetTelemetry msg_;
};

class Init_FleetTelemetry_robot_id
{
public:
  explicit Init_FleetTelemetry_robot_id(::navpro_enterprise_interfaces::msg::FleetTelemetry & msg)
  : msg_(msg)
  {}
  Init_FleetTelemetry_pose robot_id(::navpro_enterprise_interfaces::msg::FleetTelemetry::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_FleetTelemetry_pose(msg_);
  }

private:
  ::navpro_enterprise_interfaces::msg::FleetTelemetry msg_;
};

class Init_FleetTelemetry_stamp
{
public:
  Init_FleetTelemetry_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetTelemetry_robot_id stamp(::navpro_enterprise_interfaces::msg::FleetTelemetry::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_FleetTelemetry_robot_id(msg_);
  }

private:
  ::navpro_enterprise_interfaces::msg::FleetTelemetry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::navpro_enterprise_interfaces::msg::FleetTelemetry>()
{
  return navpro_enterprise_interfaces::msg::builder::Init_FleetTelemetry_stamp();
}

}  // namespace navpro_enterprise_interfaces

#endif  // NAVPRO_ENTERPRISE_INTERFACES__MSG__DETAIL__FLEET_TELEMETRY__BUILDER_HPP_
