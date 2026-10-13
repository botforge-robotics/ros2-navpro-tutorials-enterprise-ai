// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from navpro_enterprise_interfaces:srv/TriggerInteractionGate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "navpro_enterprise_interfaces/srv/trigger_interaction_gate.hpp"


#ifndef NAVPRO_ENTERPRISE_INTERFACES__SRV__DETAIL__TRIGGER_INTERACTION_GATE__STRUCT_HPP_
#define NAVPRO_ENTERPRISE_INTERFACES__SRV__DETAIL__TRIGGER_INTERACTION_GATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request __attribute__((deprecated))
#else
# define DEPRECATED__navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request __declspec(deprecated)
#endif

namespace navpro_enterprise_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TriggerInteractionGate_Request_
{
  using Type = TriggerInteractionGate_Request_<ContainerAllocator>;

  explicit TriggerInteractionGate_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gate_id = "";
      this->prompt_message = "";
      this->timeout_seconds = 0l;
    }
  }

  explicit TriggerInteractionGate_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : gate_id(_alloc),
    prompt_message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gate_id = "";
      this->prompt_message = "";
      this->timeout_seconds = 0l;
    }
  }

  // field types and members
  using _gate_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gate_id_type gate_id;
  using _prompt_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _prompt_message_type prompt_message;
  using _available_actions_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _available_actions_type available_actions;
  using _timeout_seconds_type =
    int32_t;
  _timeout_seconds_type timeout_seconds;

  // setters for named parameter idiom
  Type & set__gate_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gate_id = _arg;
    return *this;
  }
  Type & set__prompt_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->prompt_message = _arg;
    return *this;
  }
  Type & set__available_actions(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->available_actions = _arg;
    return *this;
  }
  Type & set__timeout_seconds(
    const int32_t & _arg)
  {
    this->timeout_seconds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request
    std::shared_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navpro_enterprise_interfaces__srv__TriggerInteractionGate_Request
    std::shared_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TriggerInteractionGate_Request_ & other) const
  {
    if (this->gate_id != other.gate_id) {
      return false;
    }
    if (this->prompt_message != other.prompt_message) {
      return false;
    }
    if (this->available_actions != other.available_actions) {
      return false;
    }
    if (this->timeout_seconds != other.timeout_seconds) {
      return false;
    }
    return true;
  }
  bool operator!=(const TriggerInteractionGate_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TriggerInteractionGate_Request_

// alias to use template instance with default allocator
using TriggerInteractionGate_Request =
  navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace navpro_enterprise_interfaces


#ifndef _WIN32
# define DEPRECATED__navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response __attribute__((deprecated))
#else
# define DEPRECATED__navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response __declspec(deprecated)
#endif

namespace navpro_enterprise_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TriggerInteractionGate_Response_
{
  using Type = TriggerInteractionGate_Response_<ContainerAllocator>;

  explicit TriggerInteractionGate_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->selected_action = "";
      this->operator_notes = "";
    }
  }

  explicit TriggerInteractionGate_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : selected_action(_alloc),
    operator_notes(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->selected_action = "";
      this->operator_notes = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _selected_action_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _selected_action_type selected_action;
  using _operator_notes_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _operator_notes_type operator_notes;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__selected_action(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->selected_action = _arg;
    return *this;
  }
  Type & set__operator_notes(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->operator_notes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response
    std::shared_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navpro_enterprise_interfaces__srv__TriggerInteractionGate_Response
    std::shared_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TriggerInteractionGate_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->selected_action != other.selected_action) {
      return false;
    }
    if (this->operator_notes != other.operator_notes) {
      return false;
    }
    return true;
  }
  bool operator!=(const TriggerInteractionGate_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TriggerInteractionGate_Response_

// alias to use template instance with default allocator
using TriggerInteractionGate_Response =
  navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace navpro_enterprise_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event __attribute__((deprecated))
#else
# define DEPRECATED__navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event __declspec(deprecated)
#endif

namespace navpro_enterprise_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TriggerInteractionGate_Event_
{
  using Type = TriggerInteractionGate_Event_<ContainerAllocator>;

  explicit TriggerInteractionGate_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit TriggerInteractionGate_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event
    std::shared_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__navpro_enterprise_interfaces__srv__TriggerInteractionGate_Event
    std::shared_ptr<navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TriggerInteractionGate_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const TriggerInteractionGate_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TriggerInteractionGate_Event_

// alias to use template instance with default allocator
using TriggerInteractionGate_Event =
  navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace navpro_enterprise_interfaces

namespace navpro_enterprise_interfaces
{

namespace srv
{

struct TriggerInteractionGate
{
  using Request = navpro_enterprise_interfaces::srv::TriggerInteractionGate_Request;
  using Response = navpro_enterprise_interfaces::srv::TriggerInteractionGate_Response;
  using Event = navpro_enterprise_interfaces::srv::TriggerInteractionGate_Event;
};

}  // namespace srv

}  // namespace navpro_enterprise_interfaces

#endif  // NAVPRO_ENTERPRISE_INTERFACES__SRV__DETAIL__TRIGGER_INTERACTION_GATE__STRUCT_HPP_
