// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_bt_py_interfaces:msg/CapabilityInterface.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_INTERFACE__STRUCT_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_INTERFACE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'options'
// Member 'inputs'
// Member 'outputs'
#include "ros_bt_py_interfaces/msg/detail/node_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__msg__CapabilityInterface __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__msg__CapabilityInterface __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CapabilityInterface_
{
  using Type = CapabilityInterface_<ContainerAllocator>;

  explicit CapabilityInterface_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->description = "";
    }
  }

  explicit CapabilityInterface_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    description(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->description = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _description_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _description_type description;
  using _options_type =
    std::vector<ros_bt_py_interfaces::msg::NodeData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::NodeData_<ContainerAllocator>>>;
  _options_type options;
  using _inputs_type =
    std::vector<ros_bt_py_interfaces::msg::NodeData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::NodeData_<ContainerAllocator>>>;
  _inputs_type inputs;
  using _outputs_type =
    std::vector<ros_bt_py_interfaces::msg::NodeData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::NodeData_<ContainerAllocator>>>;
  _outputs_type outputs;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__description(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->description = _arg;
    return *this;
  }
  Type & set__options(
    const std::vector<ros_bt_py_interfaces::msg::NodeData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::NodeData_<ContainerAllocator>>> & _arg)
  {
    this->options = _arg;
    return *this;
  }
  Type & set__inputs(
    const std::vector<ros_bt_py_interfaces::msg::NodeData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::NodeData_<ContainerAllocator>>> & _arg)
  {
    this->inputs = _arg;
    return *this;
  }
  Type & set__outputs(
    const std::vector<ros_bt_py_interfaces::msg::NodeData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::NodeData_<ContainerAllocator>>> & _arg)
  {
    this->outputs = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__msg__CapabilityInterface
    std::shared_ptr<ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__msg__CapabilityInterface
    std::shared_ptr<ros_bt_py_interfaces::msg::CapabilityInterface_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CapabilityInterface_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->description != other.description) {
      return false;
    }
    if (this->options != other.options) {
      return false;
    }
    if (this->inputs != other.inputs) {
      return false;
    }
    if (this->outputs != other.outputs) {
      return false;
    }
    return true;
  }
  bool operator!=(const CapabilityInterface_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CapabilityInterface_

// alias to use template instance with default allocator
using CapabilityInterface =
  ros_bt_py_interfaces::msg::CapabilityInterface_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_INTERFACE__STRUCT_HPP_
