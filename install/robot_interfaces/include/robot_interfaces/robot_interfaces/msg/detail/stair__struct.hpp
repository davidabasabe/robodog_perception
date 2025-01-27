// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:msg/Stair.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__STAIR__STRUCT_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__STAIR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_interfaces__msg__Stair __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__msg__Stair __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Stair_
{
  using Type = Stair_<ContainerAllocator>;

  explicit Stair_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected = false;
      this->upstairs = false;
      this->distance = 0.0;
    }
  }

  explicit Stair_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->detected = false;
      this->upstairs = false;
      this->distance = 0.0;
    }
  }

  // field types and members
  using _detected_type =
    bool;
  _detected_type detected;
  using _upstairs_type =
    bool;
  _upstairs_type upstairs;
  using _distance_type =
    double;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__detected(
    const bool & _arg)
  {
    this->detected = _arg;
    return *this;
  }
  Type & set__upstairs(
    const bool & _arg)
  {
    this->upstairs = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::msg::Stair_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::msg::Stair_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::msg::Stair_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::msg::Stair_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::Stair_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::Stair_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::Stair_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::Stair_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::msg::Stair_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::msg::Stair_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__msg__Stair
    std::shared_ptr<robot_interfaces::msg::Stair_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__msg__Stair
    std::shared_ptr<robot_interfaces::msg::Stair_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Stair_ & other) const
  {
    if (this->detected != other.detected) {
      return false;
    }
    if (this->upstairs != other.upstairs) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const Stair_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Stair_

// alias to use template instance with default allocator
using Stair =
  robot_interfaces::msg::Stair_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__STAIR__STRUCT_HPP_
