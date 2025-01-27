// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'arrow'
// Member 'lava'
#include "robot_interfaces/msg/detail/yolo_detection__struct.hpp"
// Member 'stair'
#include "robot_interfaces/msg/detail/stair__struct.hpp"
// Member 'wall'
#include "robot_interfaces/msg/detail/wall__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__robot_interfaces__msg__Robot __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__msg__Robot __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Robot_
{
  using Type = Robot_<ContainerAllocator>;

  explicit Robot_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arrow(_init),
    lava(_init),
    stair(_init),
    wall(_init)
  {
    (void)_init;
  }

  explicit Robot_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : arrow(_alloc, _init),
    lava(_alloc, _init),
    stair(_alloc, _init),
    wall(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _arrow_type =
    robot_interfaces::msg::YoloDetection_<ContainerAllocator>;
  _arrow_type arrow;
  using _lava_type =
    robot_interfaces::msg::YoloDetection_<ContainerAllocator>;
  _lava_type lava;
  using _stair_type =
    robot_interfaces::msg::Stair_<ContainerAllocator>;
  _stair_type stair;
  using _wall_type =
    robot_interfaces::msg::Wall_<ContainerAllocator>;
  _wall_type wall;

  // setters for named parameter idiom
  Type & set__arrow(
    const robot_interfaces::msg::YoloDetection_<ContainerAllocator> & _arg)
  {
    this->arrow = _arg;
    return *this;
  }
  Type & set__lava(
    const robot_interfaces::msg::YoloDetection_<ContainerAllocator> & _arg)
  {
    this->lava = _arg;
    return *this;
  }
  Type & set__stair(
    const robot_interfaces::msg::Stair_<ContainerAllocator> & _arg)
  {
    this->stair = _arg;
    return *this;
  }
  Type & set__wall(
    const robot_interfaces::msg::Wall_<ContainerAllocator> & _arg)
  {
    this->wall = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::msg::Robot_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::msg::Robot_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::msg::Robot_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::msg::Robot_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::Robot_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::Robot_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::Robot_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::Robot_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::msg::Robot_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::msg::Robot_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__msg__Robot
    std::shared_ptr<robot_interfaces::msg::Robot_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__msg__Robot
    std::shared_ptr<robot_interfaces::msg::Robot_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Robot_ & other) const
  {
    if (this->arrow != other.arrow) {
      return false;
    }
    if (this->lava != other.lava) {
      return false;
    }
    if (this->stair != other.stair) {
      return false;
    }
    if (this->wall != other.wall) {
      return false;
    }
    return true;
  }
  bool operator!=(const Robot_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Robot_

// alias to use template instance with default allocator
using Robot =
  robot_interfaces::msg::Robot_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_HPP_
