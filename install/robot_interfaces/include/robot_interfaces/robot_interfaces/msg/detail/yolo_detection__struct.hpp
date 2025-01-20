// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__YOLO_DETECTION__STRUCT_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__YOLO_DETECTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_interfaces__msg__YoloDetection __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__msg__YoloDetection __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct YoloDetection_
{
  using Type = YoloDetection_<ContainerAllocator>;

  explicit YoloDetection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_name = "";
      this->distance = 0.0;
      this->x = 0ull;
      this->y = 0ull;
      this->w = 0ull;
      this->h = 0ull;
    }
  }

  explicit YoloDetection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : class_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->class_name = "";
      this->distance = 0.0;
      this->x = 0ull;
      this->y = 0ull;
      this->w = 0ull;
      this->h = 0ull;
    }
  }

  // field types and members
  using _class_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _class_name_type class_name;
  using _distance_type =
    double;
  _distance_type distance;
  using _x_type =
    uint64_t;
  _x_type x;
  using _y_type =
    uint64_t;
  _y_type y;
  using _w_type =
    uint64_t;
  _w_type w;
  using _h_type =
    uint64_t;
  _h_type h;

  // setters for named parameter idiom
  Type & set__class_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->class_name = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__x(
    const uint64_t & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const uint64_t & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__w(
    const uint64_t & _arg)
  {
    this->w = _arg;
    return *this;
  }
  Type & set__h(
    const uint64_t & _arg)
  {
    this->h = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::msg::YoloDetection_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::msg::YoloDetection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::msg::YoloDetection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::msg::YoloDetection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::YoloDetection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::YoloDetection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::YoloDetection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::YoloDetection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::msg::YoloDetection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::msg::YoloDetection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__msg__YoloDetection
    std::shared_ptr<robot_interfaces::msg::YoloDetection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__msg__YoloDetection
    std::shared_ptr<robot_interfaces::msg::YoloDetection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YoloDetection_ & other) const
  {
    if (this->class_name != other.class_name) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->w != other.w) {
      return false;
    }
    if (this->h != other.h) {
      return false;
    }
    return true;
  }
  bool operator!=(const YoloDetection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YoloDetection_

// alias to use template instance with default allocator
using YoloDetection =
  robot_interfaces::msg::YoloDetection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__YOLO_DETECTION__STRUCT_HPP_
