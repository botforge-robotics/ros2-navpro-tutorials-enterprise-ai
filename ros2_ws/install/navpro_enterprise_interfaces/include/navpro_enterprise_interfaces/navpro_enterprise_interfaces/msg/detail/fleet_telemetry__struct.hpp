// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from navpro_enterprise_interfaces:msg/FleetTelemetry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "navpro_enterprise_interfaces/msg/fleet_telemetry.hpp"


#ifndef NAVPRO_ENTERPRISE_INTERFACES__MSG__DETAIL__FLEET_TELEMETRY__STRUCT_HPP_
#define NAVPRO_ENTERPRISE_INTERFACES__MSG__DETAIL__FLEET_TELEMETRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'velocity'
#include "geometry_msgs/msg/detail/twist__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__navpro_enterprise_interfaces__msg__FleetTelemetry __attribute__((deprecated))
#else
# define DEPRECATED__navpro_enterprise_interfaces__msg__FleetTelemetry __declspec(deprecated)
#endif

namespace navpro_enterprise_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FleetTelemetry_
{
  using Type = FleetTelemetry_<ContainerAllocator>;

  explicit FleetTelemetry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init),
    pose(_init),
    velocity(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->battery_percentage = 0.0f;
      this->battery_voltage = 0.0f;
      this->is_charging = false;
      this->estop_engaged = false;
      this->operational_status = "";
      this->current_mission_id = "";
    }
  }

  explicit FleetTelemetry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init),
    robot_id(_alloc),
    pose(_alloc, _init),
    velocity(_alloc, _init),
    operational_status(_alloc),
    current_mission_id(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robot_id = "";
      this->battery_percentage = 0.0f;
      this->battery_voltage = 0.0f;
      this->is_charging = false;
      this->estop_engaged = false;
      this->operational_status = "";
      this->current_mission_id = "";
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _robot_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_id_type robot_id;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;
  using _velocity_type =
    geometry_msgs::msg::Twist_<ContainerAllocator>;
  _velocity_type velocity;
  using _battery_percentage_type =
    float;
  _battery_percentage_type battery_percentage;
  using _battery_voltage_type =
    float;
  _battery_voltage_type battery_voltage;
  using _is_charging_type =
    bool;
  _is_charging_type is_charging;
  using _estop_engaged_type =
    bool;
  _estop_engaged_type estop_engaged;
  using _operational_status_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _operational_status_type operational_status;
  using _current_mission_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _current_mission_id_type current_mission_id;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__robot_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_id = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }
  Type & set__velocity(
    const geometry_msgs::msg::Twist_<ContainerAllocator> & _arg)
  {
    this->velocity = _arg;
    return *this;
  }
  Type & set__battery_percentage(
    const float & _arg)
  {
    this->battery_percentage = _arg;
    return *this;
  }
  Type & set__battery_voltage(
    const float & _arg)
  {
    this->battery_voltage = _arg;
    return *this;
  }
  Type & set__is_charging(
    const bool & _arg)
  {
    this->is_charging = _arg;
    return *this;
  }
  Type & set__estop_engaged(
    const bool & _arg)
  {
    this->estop_engaged = _arg;
    return *this;
  }
  Type & set__operational_status(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->operational_status = _arg;
    return *this;
  }
  Type & set__current_mission_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->current_mission_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navpro_enterprise_interfaces::msg::FleetTelemetry_<ContainerAllocator> *;
  using ConstRawPtr =
    const navpro_enterprise_interfaces::msg::FleetTelemetry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navpro_enterprise_interfaces::msg::FleetTelemetry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navpro_enterprise_interfaces::msg::FleetTelemetry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navpro_enterprise_interfaces::msg::FleetTelemetry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navpro_enterprise_interfaces::msg::FleetTelemetry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navpro_enterprise_interfaces::msg::FleetTelemetry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navpro_enterprise_interfaces::msg::FleetTelemetry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navpro_enterprise_interfaces::msg::FleetTelemetry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navpro_enterprise_interfaces::msg::FleetTelemetry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navpro_enterprise_interfaces__msg__FleetTelemetry
    std::shared_ptr<navpro_enterprise_interfaces::msg::FleetTelemetry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navpro_enterprise_interfaces__msg__FleetTelemetry
    std::shared_ptr<navpro_enterprise_interfaces::msg::FleetTelemetry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FleetTelemetry_ & other) const
  {
    if (this->stamp != other.stamp) {
      return false;
    }
    if (this->robot_id != other.robot_id) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    if (this->velocity != other.velocity) {
      return false;
    }
    if (this->battery_percentage != other.battery_percentage) {
      return false;
    }
    if (this->battery_voltage != other.battery_voltage) {
      return false;
    }
    if (this->is_charging != other.is_charging) {
      return false;
    }
    if (this->estop_engaged != other.estop_engaged) {
      return false;
    }
    if (this->operational_status != other.operational_status) {
      return false;
    }
    if (this->current_mission_id != other.current_mission_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const FleetTelemetry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FleetTelemetry_

// alias to use template instance with default allocator
using FleetTelemetry =
  navpro_enterprise_interfaces::msg::FleetTelemetry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace navpro_enterprise_interfaces

#endif  // NAVPRO_ENTERPRISE_INTERFACES__MSG__DETAIL__FLEET_TELEMETRY__STRUCT_HPP_
