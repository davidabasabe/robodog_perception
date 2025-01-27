// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_bt_py_interfaces:msg/Tree.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__TREE__STRUCT_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__TREE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'nodes'
#include "ros_bt_py_interfaces/msg/detail/node__struct.hpp"
// Member 'data_wirings'
#include "ros_bt_py_interfaces/msg/detail/node_data_wiring__struct.hpp"
// Member 'public_node_data'
#include "ros_bt_py_interfaces/msg/detail/node_data_location__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_bt_py_interfaces__msg__Tree __attribute__((deprecated))
#else
# define DEPRECATED__ros_bt_py_interfaces__msg__Tree __declspec(deprecated)
#endif

namespace ros_bt_py_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Tree_
{
  using Type = Tree_<ContainerAllocator>;

  explicit Tree_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->path = "";
      this->root_name = "";
      this->tick_frequency_hz = 0.0;
      this->state = "";
    }
  }

  explicit Tree_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc),
    path(_alloc),
    root_name(_alloc),
    state(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->path = "";
      this->root_name = "";
      this->tick_frequency_hz = 0.0;
      this->state = "";
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _path_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _path_type path;
  using _root_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _root_name_type root_name;
  using _nodes_type =
    std::vector<ros_bt_py_interfaces::msg::Node_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::Node_<ContainerAllocator>>>;
  _nodes_type nodes;
  using _data_wirings_type =
    std::vector<ros_bt_py_interfaces::msg::NodeDataWiring_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::NodeDataWiring_<ContainerAllocator>>>;
  _data_wirings_type data_wirings;
  using _tick_frequency_hz_type =
    double;
  _tick_frequency_hz_type tick_frequency_hz;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _state_type state;
  using _public_node_data_type =
    std::vector<ros_bt_py_interfaces::msg::NodeDataLocation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::NodeDataLocation_<ContainerAllocator>>>;
  _public_node_data_type public_node_data;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__path(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->path = _arg;
    return *this;
  }
  Type & set__root_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->root_name = _arg;
    return *this;
  }
  Type & set__nodes(
    const std::vector<ros_bt_py_interfaces::msg::Node_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::Node_<ContainerAllocator>>> & _arg)
  {
    this->nodes = _arg;
    return *this;
  }
  Type & set__data_wirings(
    const std::vector<ros_bt_py_interfaces::msg::NodeDataWiring_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::NodeDataWiring_<ContainerAllocator>>> & _arg)
  {
    this->data_wirings = _arg;
    return *this;
  }
  Type & set__tick_frequency_hz(
    const double & _arg)
  {
    this->tick_frequency_hz = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->state = _arg;
    return *this;
  }
  Type & set__public_node_data(
    const std::vector<ros_bt_py_interfaces::msg::NodeDataLocation_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<ros_bt_py_interfaces::msg::NodeDataLocation_<ContainerAllocator>>> & _arg)
  {
    this->public_node_data = _arg;
    return *this;
  }

  // constant declarations
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> IDLE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> EDITABLE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> TICKING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> WAITING_FOR_TICK;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> STOP_REQUESTED;
  // guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ERROR;
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

  // pointer types
  using RawPtr =
    ros_bt_py_interfaces::msg::Tree_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_bt_py_interfaces::msg::Tree_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::msg::Tree_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_bt_py_interfaces::msg::Tree_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::msg::Tree_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::msg::Tree_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_bt_py_interfaces::msg::Tree_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_bt_py_interfaces::msg::Tree_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::msg::Tree_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_bt_py_interfaces::msg::Tree_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_bt_py_interfaces__msg__Tree
    std::shared_ptr<ros_bt_py_interfaces::msg::Tree_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_bt_py_interfaces__msg__Tree
    std::shared_ptr<ros_bt_py_interfaces::msg::Tree_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tree_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->path != other.path) {
      return false;
    }
    if (this->root_name != other.root_name) {
      return false;
    }
    if (this->nodes != other.nodes) {
      return false;
    }
    if (this->data_wirings != other.data_wirings) {
      return false;
    }
    if (this->tick_frequency_hz != other.tick_frequency_hz) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->public_node_data != other.public_node_data) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tree_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tree_

// alias to use template instance with default allocator
using Tree =
  ros_bt_py_interfaces::msg::Tree_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Tree_<ContainerAllocator>::IDLE = "IDLE";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Tree_<ContainerAllocator>::EDITABLE = "EDITABLE";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Tree_<ContainerAllocator>::TICKING = "TICKING";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Tree_<ContainerAllocator>::WAITING_FOR_TICK = "WAITING_FOR_TICK";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Tree_<ContainerAllocator>::STOP_REQUESTED = "STOP_REQUESTED";
// guard against 'ERROR' being predefined by MSVC by temporarily undefining it
#if defined(_WIN32)
#  if defined(ERROR)
#    pragma push_macro("ERROR")
#    undef ERROR
#  endif
#endif
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
Tree_<ContainerAllocator>::ERROR = "ERROR";
#if defined(_WIN32)
#  pragma warning(suppress : 4602)
#  pragma pop_macro("ERROR")
#endif

}  // namespace msg

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__TREE__STRUCT_HPP_
