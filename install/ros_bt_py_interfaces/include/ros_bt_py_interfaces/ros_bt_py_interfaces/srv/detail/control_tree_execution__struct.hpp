// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_bt_py_interfaces:srv/ControlTreeExecution.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__CONTROL_TREE_EXECUTION__STRUCT_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__CONTROL_TREE_EXECUTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__srv__ControlTreeExecution_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__ControlTreeExecution_Request __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlTreeExecution_Request_
{
  using Type = ControlTreeExecution_Request_<ContainerAllocator>;

  explicit ControlTreeExecution_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->tick_frequency_hz = 0.0;
    }
  }

  explicit ControlTreeExecution_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->command = 0;
      this->tick_frequency_hz = 0.0;
    }
  }

  // field types and members
  using _command_type =
    uint8_t;
  _command_type command;
  using _tick_frequency_hz_type =
    double;
  _tick_frequency_hz_type tick_frequency_hz;

  // setters for named parameter idiom
  Type & set__command(
    const uint8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }
  Type & set__tick_frequency_hz(
    const double & _arg)
  {
    this->tick_frequency_hz = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t DO_NOTHING =
    0u;
  static constexpr uint8_t TICK_ONCE =
    1u;
  static constexpr uint8_t TICK_PERIODICALLY =
    2u;
  static constexpr uint8_t TICK_UNTIL_RESULT =
    3u;
  static constexpr uint8_t STOP =
    4u;
  static constexpr uint8_t RESET =
    5u;
  static constexpr uint8_t SHUTDOWN =
    6u;
  static constexpr uint8_t SETUP_AND_SHUTDOWN =
    7u;

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::srv::ControlTreeExecution_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::ControlTreeExecution_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::ControlTreeExecution_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::ControlTreeExecution_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::ControlTreeExecution_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::ControlTreeExecution_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::ControlTreeExecution_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::ControlTreeExecution_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::ControlTreeExecution_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::ControlTreeExecution_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__ControlTreeExecution_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::ControlTreeExecution_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__ControlTreeExecution_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::ControlTreeExecution_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlTreeExecution_Request_ & other) const
  {
    if (this->command != other.command) {
      return false;
    }
    if (this->tick_frequency_hz != other.tick_frequency_hz) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlTreeExecution_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlTreeExecution_Request_

// alias to use template instance with default allocator
using ControlTreeExecution_Request =
  ros_bt_py_interfaces::srv::ControlTreeExecution_Request_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlTreeExecution_Request_<ContainerAllocator>::DO_NOTHING;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlTreeExecution_Request_<ContainerAllocator>::TICK_ONCE;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlTreeExecution_Request_<ContainerAllocator>::TICK_PERIODICALLY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlTreeExecution_Request_<ContainerAllocator>::TICK_UNTIL_RESULT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlTreeExecution_Request_<ContainerAllocator>::STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlTreeExecution_Request_<ContainerAllocator>::RESET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlTreeExecution_Request_<ContainerAllocator>::SHUTDOWN;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t ControlTreeExecution_Request_<ContainerAllocator>::SETUP_AND_SHUTDOWN;
#endif  // __cplusplus < 201703L

}  // namespace srv

}  // namespace ros_bt_py_interfaces


#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__srv__ControlTreeExecution_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__ControlTreeExecution_Response __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ControlTreeExecution_Response_
{
  using Type = ControlTreeExecution_Response_<ContainerAllocator>;

  explicit ControlTreeExecution_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
      this->tree_state = "";
    }
  }

  explicit ControlTreeExecution_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error_message(_alloc),
    tree_state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error_message = "";
      this->tree_state = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_message_type error_message;
  using _tree_state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tree_state_type tree_state;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error_message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error_message = _arg;
    return *this;
  }
  Type & set__tree_state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tree_state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::srv::ControlTreeExecution_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::ControlTreeExecution_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::ControlTreeExecution_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::ControlTreeExecution_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::ControlTreeExecution_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::ControlTreeExecution_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::ControlTreeExecution_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::ControlTreeExecution_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::ControlTreeExecution_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::ControlTreeExecution_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__ControlTreeExecution_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::ControlTreeExecution_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__ControlTreeExecution_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::ControlTreeExecution_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlTreeExecution_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error_message != other.error_message) {
      return false;
    }
    if (this->tree_state != other.tree_state) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlTreeExecution_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlTreeExecution_Response_

// alias to use template instance with default allocator
using ControlTreeExecution_Response =
  ros_bt_py_interfaces::srv::ControlTreeExecution_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_bt_py_interfaces

namespace ros_bt_py_interfaces
{

namespace srv
{

struct ControlTreeExecution
{
  using Request = ros_bt_py_interfaces::srv::ControlTreeExecution_Request;
  using Response = ros_bt_py_interfaces::srv::ControlTreeExecution_Response;
};

}  // namespace srv

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__CONTROL_TREE_EXECUTION__STRUCT_HPP_
