// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_bt_py_interfaces:msg/SubtreeInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__SUBTREE_INFO__STRUCT_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__SUBTREE_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'subtree_states'
#include "ros_bt_py_interfaces/msg/detail/tree__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__msg__SubtreeInfo __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__msg__SubtreeInfo __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SubtreeInfo_
{
  using Type = SubtreeInfo_<ContainerAllocator>;

  explicit SubtreeInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SubtreeInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _subtree_states_type =
    std::vector<ros_bt_py_interfaces::msg::Tree_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::Tree_<ContainerAllocator>>>;
  _subtree_states_type subtree_states;

  // setters for named parameter idiom
  Type & set__subtree_states(
    const std::vector<ros_bt_py_interfaces::msg::Tree_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::Tree_<ContainerAllocator>>> & _arg)
  {
    this->subtree_states = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::msg::SubtreeInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::msg::SubtreeInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::msg::SubtreeInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::msg::SubtreeInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::msg::SubtreeInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::msg::SubtreeInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::msg::SubtreeInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::msg::SubtreeInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::msg::SubtreeInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::msg::SubtreeInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__msg__SubtreeInfo
    std::shared_ptr<ros_bt_py_interfaces::msg::SubtreeInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__msg__SubtreeInfo
    std::shared_ptr<ros_bt_py_interfaces::msg::SubtreeInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SubtreeInfo_ & other) const
  {
    if (this->subtree_states != other.subtree_states) {
      return false;
    }
    return true;
  }
  bool operator!=(const SubtreeInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SubtreeInfo_

// alias to use template instance with default allocator
using SubtreeInfo =
  ros_bt_py_interfaces::msg::SubtreeInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__SUBTREE_INFO__STRUCT_HPP_
