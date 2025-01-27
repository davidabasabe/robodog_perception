// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_bt_py_interfaces:msg/Precondition.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__PRECONDITION__STRUCT_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__PRECONDITION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'capability'
#include "ros_bt_py_interfaces/msg/detail/capability_interface__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__msg__Precondition __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__msg__Precondition __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Precondition_
{
  using Type = Precondition_<ContainerAllocator>;

  explicit Precondition_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : capability(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
    }
  }

  explicit Precondition_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc),
    capability(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _capability_type =
    ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator>;
  _capability_type capability;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__capability(
    const ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator> & _arg)
  {
    this->capability = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> LOCAL;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> REMOTE;

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::msg::Precondition_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::msg::Precondition_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::msg::Precondition_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::msg::Precondition_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::msg::Precondition_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::msg::Precondition_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::msg::Precondition_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::msg::Precondition_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::msg::Precondition_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::msg::Precondition_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__msg__Precondition
    std::shared_ptr<ros_bt_py_interfaces::msg::Precondition_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__msg__Precondition
    std::shared_ptr<ros_bt_py_interfaces::msg::Precondition_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Precondition_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->capability != other.capability) {
      return false;
    }
    return true;
  }
  bool operator!=(const Precondition_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Precondition_

// alias to use template instance with default allocator
using Precondition =
  ros_bt_py_interfaces::msg::Precondition_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Precondition_<ContainerAllocator>::LOCAL = "LOCAL";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Precondition_<ContainerAllocator>::REMOTE = "REMOTE";

}  // namespace msg

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__PRECONDITION__STRUCT_HPP_
