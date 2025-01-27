// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:msg/Messages.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__MESSAGES__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__MESSAGES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/msg/detail/messages__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'messages'
#include "ros_bt_py_interfaces/msg/detail/message__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Messages & msg,
  std::ostream & out)
{
  out << "{";
  // member: messages
  {
    if (msg.messages.size() == 0) {
      out << "messages: []";
    } else {
      out << "messages: [";
      size_t pending_items = msg.messages.size();
      for (auto item : msg.messages) {
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
  const Messages & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: messages
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.messages.size() == 0) {
      out << "messages: []\n";
    } else {
      out << "messages:\n";
      for (auto item : msg.messages) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Messages & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::msg::Messages & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::msg::Messages & msg)
{
  return ros_bt_py_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::msg::Messages>()
{
  return "ros_bt_py_interfaces::msg::Messages";
}

template<>
inline const char * name<ros_bt_py_interfaces::msg::Messages>()
{
  return "ros_bt_py_interfaces/msg/Messages";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::msg::Messages>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::msg::Messages>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::msg::Messages>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__MESSAGES__TRAITS_HPP_
