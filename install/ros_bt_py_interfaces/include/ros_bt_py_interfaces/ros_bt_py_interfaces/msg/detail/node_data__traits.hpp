// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:msg/NodeData.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/msg/detail/node_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_bt_py_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeData & msg,
  std::ostream & out)
{
  out << "{";
  // member: key
  {
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << ", ";
  }

  // member: serialized_value
  {
    out << "serialized_value: ";
    rosidl_generator_traits::value_to_yaml(msg.serialized_value, out);
    out << ", ";
  }

  // member: serialized_type
  {
    out << "serialized_type: ";
    rosidl_generator_traits::value_to_yaml(msg.serialized_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << "\n";
  }

  // member: serialized_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serialized_value: ";
    rosidl_generator_traits::value_to_yaml(msg.serialized_value, out);
    out << "\n";
  }

  // member: serialized_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "serialized_type: ";
    rosidl_generator_traits::value_to_yaml(msg.serialized_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeData & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::msg::NodeData & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::msg::NodeData & msg)
{
  return ros_bt_py_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::msg::NodeData>()
{
  return "ros_bt_py_interfaces::msg::NodeData";
}

template<>
inline const char * name<ros_bt_py_interfaces::msg::NodeData>()
{
  return "ros_bt_py_interfaces/msg/NodeData";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::msg::NodeData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::msg::NodeData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::msg::NodeData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA__TRAITS_HPP_
