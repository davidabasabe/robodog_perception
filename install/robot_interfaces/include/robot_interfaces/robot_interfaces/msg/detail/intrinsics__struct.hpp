// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from robot_interfaces:msg/Intrinsics.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__INTRINSICS__STRUCT_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__INTRINSICS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__robot_interfaces__msg__Intrinsics __attribute__((deprecated))
#else
# define DEPRECATED__robot_interfaces__msg__Intrinsics __declspec(deprecated)
#endif

namespace robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Intrinsics_
{
  using Type = Intrinsics_<ContainerAllocator>;

  explicit Intrinsics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0;
      this->height = 0;
      this->ppx = 0.0;
      this->ppy = 0.0;
      this->fx = 0.0;
      this->fy = 0.0;
      this->depth_scale = 0.0;
      this->model = "";
    }
  }

  explicit Intrinsics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : model(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0;
      this->height = 0;
      this->ppx = 0.0;
      this->ppy = 0.0;
      this->fx = 0.0;
      this->fy = 0.0;
      this->depth_scale = 0.0;
      this->model = "";
    }
  }

  // field types and members
  using _width_type =
    uint16_t;
  _width_type width;
  using _height_type =
    uint16_t;
  _height_type height;
  using _ppx_type =
    double;
  _ppx_type ppx;
  using _ppy_type =
    double;
  _ppy_type ppy;
  using _fx_type =
    double;
  _fx_type fx;
  using _fy_type =
    double;
  _fy_type fy;
  using _depth_scale_type =
    double;
  _depth_scale_type depth_scale;
  using _model_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_type model;
  using _coeffs_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _coeffs_type coeffs;

  // setters for named parameter idiom
  Type & set__width(
    const uint16_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const uint16_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__ppx(
    const double & _arg)
  {
    this->ppx = _arg;
    return *this;
  }
  Type & set__ppy(
    const double & _arg)
  {
    this->ppy = _arg;
    return *this;
  }
  Type & set__fx(
    const double & _arg)
  {
    this->fx = _arg;
    return *this;
  }
  Type & set__fy(
    const double & _arg)
  {
    this->fy = _arg;
    return *this;
  }
  Type & set__depth_scale(
    const double & _arg)
  {
    this->depth_scale = _arg;
    return *this;
  }
  Type & set__model(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model = _arg;
    return *this;
  }
  Type & set__coeffs(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->coeffs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    robot_interfaces::msg::Intrinsics_<ContainerAllocator> *;
  using ConstRawPtr =
    const robot_interfaces::msg::Intrinsics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<robot_interfaces::msg::Intrinsics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<robot_interfaces::msg::Intrinsics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::Intrinsics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::Intrinsics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      robot_interfaces::msg::Intrinsics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<robot_interfaces::msg::Intrinsics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<robot_interfaces::msg::Intrinsics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<robot_interfaces::msg::Intrinsics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__robot_interfaces__msg__Intrinsics
    std::shared_ptr<robot_interfaces::msg::Intrinsics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__robot_interfaces__msg__Intrinsics
    std::shared_ptr<robot_interfaces::msg::Intrinsics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Intrinsics_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->ppx != other.ppx) {
      return false;
    }
    if (this->ppy != other.ppy) {
      return false;
    }
    if (this->fx != other.fx) {
      return false;
    }
    if (this->fy != other.fy) {
      return false;
    }
    if (this->depth_scale != other.depth_scale) {
      return false;
    }
    if (this->model != other.model) {
      return false;
    }
    if (this->coeffs != other.coeffs) {
      return false;
    }
    return true;
  }
  bool operator!=(const Intrinsics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Intrinsics_

// alias to use template instance with default allocator
using Intrinsics =
  robot_interfaces::msg::Intrinsics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__INTRINSICS__STRUCT_HPP_
