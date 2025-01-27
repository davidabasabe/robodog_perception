// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_bt_py_interfaces:msg/RemoteSlotState.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__REMOTE_SLOT_STATE__STRUCT_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__REMOTE_SLOT_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__msg__RemoteSlotState __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__msg__RemoteSlotState __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RemoteSlotState_
{
  using Type = RemoteSlotState_<ContainerAllocator>;

  explicit RemoteSlotState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tree_in_slot = false;
      this->tree_running = false;
      this->tree_finished = false;
    }
  }

  explicit RemoteSlotState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tree_in_slot = false;
      this->tree_running = false;
      this->tree_finished = false;
    }
  }

  // field types and members
  using _tree_in_slot_type =
    bool;
  _tree_in_slot_type tree_in_slot;
  using _tree_running_type =
    bool;
  _tree_running_type tree_running;
  using _tree_finished_type =
    bool;
  _tree_finished_type tree_finished;

  // setters for named parameter idiom
  Type & set__tree_in_slot(
    const bool & _arg)
  {
    this->tree_in_slot = _arg;
    return *this;
  }
  Type & set__tree_running(
    const bool & _arg)
  {
    this->tree_running = _arg;
    return *this;
  }
  Type & set__tree_finished(
    const bool & _arg)
  {
    this->tree_finished = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::msg::RemoteSlotState_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::msg::RemoteSlotState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::msg::RemoteSlotState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::msg::RemoteSlotState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::msg::RemoteSlotState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::msg::RemoteSlotState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::msg::RemoteSlotState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::msg::RemoteSlotState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::msg::RemoteSlotState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::msg::RemoteSlotState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__msg__RemoteSlotState
    std::shared_ptr<ros_bt_py_interfaces::msg::RemoteSlotState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__msg__RemoteSlotState
    std::shared_ptr<ros_bt_py_interfaces::msg::RemoteSlotState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RemoteSlotState_ & other) const
  {
    if (this->tree_in_slot != other.tree_in_slot) {
      return false;
    }
    if (this->tree_running != other.tree_running) {
      return false;
    }
    if (this->tree_finished != other.tree_finished) {
      return false;
    }
    return true;
  }
  bool operator!=(const RemoteSlotState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RemoteSlotState_

// alias to use template instance with default allocator
using RemoteSlotState =
  ros_bt_py_interfaces::msg::RemoteSlotState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__REMOTE_SLOT_STATE__STRUCT_HPP_
