// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_bt_py_interfaces:msg/NodeDataWiring.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_WIRING__STRUCT_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_WIRING__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'source'
// Member 'target'
#include "ros_bt_py_interfaces/msg/detail/node_data_location__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__msg__NodeDataWiring __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__msg__NodeDataWiring __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct NodeDataWiring_
{
  using Type = NodeDataWiring_<ContainerAllocator>;

  explicit NodeDataWiring_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_init),
    target(_init)
  {
    (void)_init;
  }

  explicit NodeDataWiring_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_alloc, _init),
    target(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _source_type =
    ros_bt_py_interfaces::msg::NodeDataLocation_<ContainerAllocator>;
  _source_type source;
  using _target_type =
    ros_bt_py_interfaces::msg::NodeDataLocation_<ContainerAllocator>;
  _target_type target;

  // setters for named parameter idiom
  Type & set__source(
    const ros_bt_py_interfaces::msg::NodeDataLocation_<ContainerAllocator> & _arg)
  {
    this->source = _arg;
    return *this;
  }
  Type & set__target(
    const ros_bt_py_interfaces::msg::NodeDataLocation_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::msg::NodeDataWiring_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::msg::NodeDataWiring_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::msg::NodeDataWiring_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::msg::NodeDataWiring_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::msg::NodeDataWiring_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::msg::NodeDataWiring_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::msg::NodeDataWiring_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::msg::NodeDataWiring_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::msg::NodeDataWiring_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::msg::NodeDataWiring_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__msg__NodeDataWiring
    std::shared_ptr<ros_bt_py_interfaces::msg::NodeDataWiring_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__msg__NodeDataWiring
    std::shared_ptr<ros_bt_py_interfaces::msg::NodeDataWiring_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NodeDataWiring_ & other) const
  {
    if (this->source != other.source) {
      return false;
    }
    if (this->target != other.target) {
      return false;
    }
    return true;
  }
  bool operator!=(const NodeDataWiring_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NodeDataWiring_

// alias to use template instance with default allocator
using NodeDataWiring =
  ros_bt_py_interfaces::msg::NodeDataWiring_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_WIRING__STRUCT_HPP_
