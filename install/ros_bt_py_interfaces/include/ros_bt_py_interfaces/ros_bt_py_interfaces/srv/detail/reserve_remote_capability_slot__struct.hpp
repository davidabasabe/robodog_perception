// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_bt_py_interfaces:srv/ReserveRemoteCapabilitySlot.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__RESERVE_REMOTE_CAPABILITY_SLOT__STRUCT_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__RESERVE_REMOTE_CAPABILITY_SLOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Request __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReserveRemoteCapabilitySlot_Request_
{
  using Type = ReserveRemoteCapabilitySlot_Request_<ContainerAllocator>;

  explicit ReserveRemoteCapabilitySlot_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remote_mission_control = "";
      this->implementation_name = "";
      this->reauction_threshold = 0.0;
    }
  }

  explicit ReserveRemoteCapabilitySlot_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : remote_mission_control(_alloc),
    implementation_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->remote_mission_control = "";
      this->implementation_name = "";
      this->reauction_threshold = 0.0;
    }
  }

  // field types and members
  using _remote_mission_control_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _remote_mission_control_type remote_mission_control;
  using _implementation_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _implementation_name_type implementation_name;
  using _reauction_threshold_type =
    double;
  _reauction_threshold_type reauction_threshold;

  // setters for named parameter idiom
  Type & set__remote_mission_control(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->remote_mission_control = _arg;
    return *this;
  }
  Type & set__implementation_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->implementation_name = _arg;
    return *this;
  }
  Type & set__reauction_threshold(
    const double & _arg)
  {
    this->reauction_threshold = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Request
    std::shared_ptr<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReserveRemoteCapabilitySlot_Request_ & other) const
  {
    if (this->remote_mission_control != other.remote_mission_control) {
      return false;
    }
    if (this->implementation_name != other.implementation_name) {
      return false;
    }
    if (this->reauction_threshold != other.reauction_threshold) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReserveRemoteCapabilitySlot_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReserveRemoteCapabilitySlot_Request_

// alias to use template instance with default allocator
using ReserveRemoteCapabilitySlot_Request =
  ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_bt_py_interfaces


#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Response __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReserveRemoteCapabilitySlot_Response_
{
  using Type = ReserveRemoteCapabilitySlot_Response_<ContainerAllocator>;

  explicit ReserveRemoteCapabilitySlot_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error = "";
    }
  }

  explicit ReserveRemoteCapabilitySlot_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : error(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->error = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _error_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _error_type error;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__error(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->error = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__srv__ReserveRemoteCapabilitySlot_Response
    std::shared_ptr<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReserveRemoteCapabilitySlot_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->error != other.error) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReserveRemoteCapabilitySlot_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReserveRemoteCapabilitySlot_Response_

// alias to use template instance with default allocator
using ReserveRemoteCapabilitySlot_Response =
  ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_bt_py_interfaces

namespace ros_bt_py_interfaces
{

namespace srv
{

struct ReserveRemoteCapabilitySlot
{
  using Request = ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request;
  using Response = ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response;
};

}  // namespace srv

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__RESERVE_REMOTE_CAPABILITY_SLOT__STRUCT_HPP_
