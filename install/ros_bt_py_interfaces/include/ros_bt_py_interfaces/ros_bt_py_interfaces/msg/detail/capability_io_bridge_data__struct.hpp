// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_bt_py_interfaces:msg/CapabilityIOBridgeData.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_IO_BRIDGE_DATA__STRUCT_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_IO_BRIDGE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'bridge_data'
#include "ros_bt_py_interfaces/msg/detail/node_data__struct.hpp"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__msg__CapabilityIOBridgeData __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__msg__CapabilityIOBridgeData __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CapabilityIOBridgeData_
{
  using Type = CapabilityIOBridgeData_<ContainerAllocator>;

  explicit CapabilityIOBridgeData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = "";
      this->type = "";
    }
  }

  explicit CapabilityIOBridgeData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : node_id(_alloc),
    type(_alloc),
    timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = "";
      this->type = "";
    }
  }

  // field types and members
  using _node_id_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _node_id_type node_id;
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _type_type type;
  using _bridge_data_type =
    std::vector<ros_bt_py_interfaces::msg::NodeData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::NodeData_<ContainerAllocator>>>;
  _bridge_data_type bridge_data;
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__node_id(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->node_id = _arg;
    return *this;
  }
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__bridge_data(
    const std::vector<ros_bt_py_interfaces::msg::NodeData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::NodeData_<ContainerAllocator>>> & _arg)
  {
    this->bridge_data = _arg;
    return *this;
  }
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> INPUT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> OUTPUT;

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::msg::CapabilityIOBridgeData_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::msg::CapabilityIOBridgeData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::msg::CapabilityIOBridgeData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::msg::CapabilityIOBridgeData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::msg::CapabilityIOBridgeData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::msg::CapabilityIOBridgeData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::msg::CapabilityIOBridgeData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::msg::CapabilityIOBridgeData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::msg::CapabilityIOBridgeData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::msg::CapabilityIOBridgeData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__msg__CapabilityIOBridgeData
    std::shared_ptr<ros_bt_py_interfaces::msg::CapabilityIOBridgeData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__msg__CapabilityIOBridgeData
    std::shared_ptr<ros_bt_py_interfaces::msg::CapabilityIOBridgeData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CapabilityIOBridgeData_ & other) const
  {
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    if (this->bridge_data != other.bridge_data) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const CapabilityIOBridgeData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CapabilityIOBridgeData_

// alias to use template instance with default allocator
using CapabilityIOBridgeData =
  ros_bt_py_interfaces::msg::CapabilityIOBridgeData_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
CapabilityIOBridgeData_<ContainerAllocator>::INPUT = "INPUT";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
CapabilityIOBridgeData_<ContainerAllocator>::OUTPUT = "OUTPUT";

}  // namespace msg

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_IO_BRIDGE_DATA__STRUCT_HPP_
