// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:msg/Wall.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__WALL__STRUCT_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__WALL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_interfaces__msg__Wall __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__msg__Wall __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Wall_
{
  using Type = Wall_<ContainerAllocator>;

  explicit Wall_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_left = 0.0;
      this->distance_right = 0.0;
      this->distance_front = 0.0;
      this->angle_left = 0.0;
      this->angle_right = 0.0;
    }
  }

  explicit Wall_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance_left = 0.0;
      this->distance_right = 0.0;
      this->distance_front = 0.0;
      this->angle_left = 0.0;
      this->angle_right = 0.0;
    }
  }

  // field types and members
  using _distance_left_type =
    double;
  _distance_left_type distance_left;
  using _distance_right_type =
    double;
  _distance_right_type distance_right;
  using _distance_front_type =
    double;
  _distance_front_type distance_front;
  using _angle_left_type =
    double;
  _angle_left_type angle_left;
  using _angle_right_type =
    double;
  _angle_right_type angle_right;

  // setters for named parameter idiom
  Type & set__distance_left(
    const double & _arg)
  {
    this->distance_left = _arg;
    return *this;
  }
  Type & set__distance_right(
    const double & _arg)
  {
    this->distance_right = _arg;
    return *this;
  }
  Type & set__distance_front(
    const double & _arg)
  {
    this->distance_front = _arg;
    return *this;
  }
  Type & set__angle_left(
    const double & _arg)
  {
    this->angle_left = _arg;
    return *this;
  }
  Type & set__angle_right(
    const double & _arg)
  {
    this->angle_right = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::msg::Wall_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::msg::Wall_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::msg::Wall_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::msg::Wall_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::Wall_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::Wall_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::Wall_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::Wall_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::msg::Wall_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::msg::Wall_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__msg__Wall
    std::shared_ptr<robot_interfaces::msg::Wall_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__msg__Wall
    std::shared_ptr<robot_interfaces::msg::Wall_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Wall_ & other) const
  {
    if (this->distance_left != other.distance_left) {
      return false;
    }
    if (this->distance_right != other.distance_right) {
      return false;
    }
    if (this->distance_front != other.distance_front) {
      return false;
    }
    if (this->angle_left != other.angle_left) {
      return false;
    }
    if (this->angle_right != other.angle_right) {
      return false;
    }
    return true;
  }
  bool operator!=(const Wall_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Wall_

// alias to use template instance with default allocator
using Wall =
  robot_interfaces::msg::Wall_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__WALL__STRUCT_HPP_
