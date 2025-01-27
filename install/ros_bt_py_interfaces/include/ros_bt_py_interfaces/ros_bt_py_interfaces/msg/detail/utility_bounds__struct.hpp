// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_bt_py_interfaces:msg/UtilityBounds.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__UTILITY_BOUNDS__STRUCT_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__UTILITY_BOUNDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__msg__UtilityBounds __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__msg__UtilityBounds __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct UtilityBounds_
{
  using Type = UtilityBounds_<ContainerAllocator>;

  explicit UtilityBounds_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_execute = false;
      this->has_upper_bound_success = false;
      this->upper_bound_success = 0.0;
      this->has_lower_bound_success = false;
      this->lower_bound_success = 0.0;
      this->has_upper_bound_failure = false;
      this->upper_bound_failure = 0.0;
      this->has_lower_bound_failure = false;
      this->lower_bound_failure = 0.0;
    }
  }

  explicit UtilityBounds_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->can_execute = false;
      this->has_upper_bound_success = false;
      this->upper_bound_success = 0.0;
      this->has_lower_bound_success = false;
      this->lower_bound_success = 0.0;
      this->has_upper_bound_failure = false;
      this->upper_bound_failure = 0.0;
      this->has_lower_bound_failure = false;
      this->lower_bound_failure = 0.0;
    }
  }

  // field types and members
  using _can_execute_type =
    bool;
  _can_execute_type can_execute;
  using _has_upper_bound_success_type =
    bool;
  _has_upper_bound_success_type has_upper_bound_success;
  using _upper_bound_success_type =
    double;
  _upper_bound_success_type upper_bound_success;
  using _has_lower_bound_success_type =
    bool;
  _has_lower_bound_success_type has_lower_bound_success;
  using _lower_bound_success_type =
    double;
  _lower_bound_success_type lower_bound_success;
  using _has_upper_bound_failure_type =
    bool;
  _has_upper_bound_failure_type has_upper_bound_failure;
  using _upper_bound_failure_type =
    double;
  _upper_bound_failure_type upper_bound_failure;
  using _has_lower_bound_failure_type =
    bool;
  _has_lower_bound_failure_type has_lower_bound_failure;
  using _lower_bound_failure_type =
    double;
  _lower_bound_failure_type lower_bound_failure;

  // setters for named parameter idiom
  Type & set__can_execute(
    const bool & _arg)
  {
    this->can_execute = _arg;
    return *this;
  }
  Type & set__has_upper_bound_success(
    const bool & _arg)
  {
    this->has_upper_bound_success = _arg;
    return *this;
  }
  Type & set__upper_bound_success(
    const double & _arg)
  {
    this->upper_bound_success = _arg;
    return *this;
  }
  Type & set__has_lower_bound_success(
    const bool & _arg)
  {
    this->has_lower_bound_success = _arg;
    return *this;
  }
  Type & set__lower_bound_success(
    const double & _arg)
  {
    this->lower_bound_success = _arg;
    return *this;
  }
  Type & set__has_upper_bound_failure(
    const bool & _arg)
  {
    this->has_upper_bound_failure = _arg;
    return *this;
  }
  Type & set__upper_bound_failure(
    const double & _arg)
  {
    this->upper_bound_failure = _arg;
    return *this;
  }
  Type & set__has_lower_bound_failure(
    const bool & _arg)
  {
    this->has_lower_bound_failure = _arg;
    return *this;
  }
  Type & set__lower_bound_failure(
    const double & _arg)
  {
    this->lower_bound_failure = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::msg::UtilityBounds_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::msg::UtilityBounds_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::msg::UtilityBounds_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::msg::UtilityBounds_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::msg::UtilityBounds_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::msg::UtilityBounds_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::msg::UtilityBounds_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::msg::UtilityBounds_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::msg::UtilityBounds_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::msg::UtilityBounds_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__msg__UtilityBounds
    std::shared_ptr<ros_bt_py_interfaces::msg::UtilityBounds_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__msg__UtilityBounds
    std::shared_ptr<ros_bt_py_interfaces::msg::UtilityBounds_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UtilityBounds_ & other) const
  {
    if (this->can_execute != other.can_execute) {
      return false;
    }
    if (this->has_upper_bound_success != other.has_upper_bound_success) {
      return false;
    }
    if (this->upper_bound_success != other.upper_bound_success) {
      return false;
    }
    if (this->has_lower_bound_success != other.has_lower_bound_success) {
      return false;
    }
    if (this->lower_bound_success != other.lower_bound_success) {
      return false;
    }
    if (this->has_upper_bound_failure != other.has_upper_bound_failure) {
      return false;
    }
    if (this->upper_bound_failure != other.upper_bound_failure) {
      return false;
    }
    if (this->has_lower_bound_failure != other.has_lower_bound_failure) {
      return false;
    }
    if (this->lower_bound_failure != other.lower_bound_failure) {
      return false;
    }
    return true;
  }
  bool operator!=(const UtilityBounds_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UtilityBounds_

// alias to use template instance with default allocator
using UtilityBounds =
  ros_bt_py_interfaces::msg::UtilityBounds_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__UTILITY_BOUNDS__STRUCT_HPP_
