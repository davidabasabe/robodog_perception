// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:msg/SubtreeInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__SUBTREE_INFO__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__SUBTREE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/msg/detail/subtree_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'subtree_states'
#include "ros_bt_py_interfaces/msg/detail/tree__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SubtreeInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: subtree_states
  {
    if (msg.subtree_states.size() == 0) {
      out << "subtree_states: []";
    } else {
      out << "subtree_states: [";
      size_t pending_items = msg.subtree_states.size();
      for (auto item : msg.subtree_states) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SubtreeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: subtree_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.subtree_states.size() == 0) {
      out << "subtree_states: []\n";
    } else {
      out << "subtree_states:\n";
      for (auto item : msg.subtree_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SubtreeInfo & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::msg::SubtreeInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::msg::SubtreeInfo & msg)
{
  return ros_bt_py_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::msg::SubtreeInfo>()
{
  return "ros_bt_py_interfaces::msg::SubtreeInfo";
}

template<>
inline const char * name<ros_bt_py_interfaces::msg::SubtreeInfo>()
{
  return "ros_bt_py_interfaces/msg/SubtreeInfo";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::msg::SubtreeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::msg::SubtreeInfo>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::msg::SubtreeInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__SUBTREE_INFO__TRAITS_HPP_
