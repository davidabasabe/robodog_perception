// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:msg/NodeDataWiring.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_WIRING__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_WIRING__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/msg/detail/node_data_wiring__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'source'
// Member 'target'
#include "ros_bt_py_interfaces/msg/detail/node_data_location__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeDataWiring & msg,
  std::ostream & out)
{
  out << "{";
  // member: source
  {
    out << "source: ";
    to_flow_style_yaml(msg.source, out);
    out << ", ";
  }

  // member: target
  {
    out << "target: ";
    to_flow_style_yaml(msg.target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeDataWiring & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source:\n";
    to_block_style_yaml(msg.source, out, indentation + 2);
  }

  // member: target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target:\n";
    to_block_style_yaml(msg.target, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeDataWiring & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace ros_bt_py_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ros_bt_py_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_bt_py_interfaces::msg::NodeDataWiring & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::msg::NodeDataWiring & msg)
{
  return ros_bt_py_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::msg::NodeDataWiring>()
{
  return "ros_bt_py_interfaces::msg::NodeDataWiring";
}

template<>
inline const char * name<ros_bt_py_interfaces::msg::NodeDataWiring>()
{
  return "ros_bt_py_interfaces/msg/NodeDataWiring";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::msg::NodeDataWiring>
  : std::integral_constant<bool, has_fixed_size<ros_bt_py_interfaces::msg::NodeDataLocation>::value> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::msg::NodeDataWiring>
  : std::integral_constant<bool, has_bounded_size<ros_bt_py_interfaces::msg::NodeDataLocation>::value> {};

template<>
struct is_message<ros_bt_py_interfaces::msg::NodeDataWiring>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_WIRING__TRAITS_HPP_
