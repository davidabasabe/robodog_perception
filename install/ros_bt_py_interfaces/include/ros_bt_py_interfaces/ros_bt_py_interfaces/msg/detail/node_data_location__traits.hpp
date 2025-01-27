// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:msg/NodeDataLocation.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_LOCATION__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_LOCATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/msg/detail/node_data_location__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_bt_py_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const NodeDataLocation & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_name
  {
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << ", ";
  }

  // member: data_kind
  {
    out << "data_kind: ";
    rosidl_generator_traits::value_to_yaml(msg.data_kind, out);
    out << ", ";
  }

  // member: data_key
  {
    out << "data_key: ";
    rosidl_generator_traits::value_to_yaml(msg.data_key, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NodeDataLocation & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << "\n";
  }

  // member: data_kind
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_kind: ";
    rosidl_generator_traits::value_to_yaml(msg.data_kind, out);
    out << "\n";
  }

  // member: data_key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_key: ";
    rosidl_generator_traits::value_to_yaml(msg.data_key, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NodeDataLocation & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::msg::NodeDataLocation & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::msg::NodeDataLocation & msg)
{
  return ros_bt_py_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::msg::NodeDataLocation>()
{
  return "ros_bt_py_interfaces::msg::NodeDataLocation";
}

template<>
inline const char * name<ros_bt_py_interfaces::msg::NodeDataLocation>()
{
  return "ros_bt_py_interfaces/msg/NodeDataLocation";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::msg::NodeDataLocation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::msg::NodeDataLocation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::msg::NodeDataLocation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_LOCATION__TRAITS_HPP_
