// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:msg/RemoteSlotState.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__REMOTE_SLOT_STATE__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__REMOTE_SLOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/msg/detail/remote_slot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_bt_py_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RemoteSlotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: tree_in_slot
  {
    out << "tree_in_slot: ";
    rosidl_generator_traits::value_to_yaml(msg.tree_in_slot, out);
    out << ", ";
  }

  // member: tree_running
  {
    out << "tree_running: ";
    rosidl_generator_traits::value_to_yaml(msg.tree_running, out);
    out << ", ";
  }

  // member: tree_finished
  {
    out << "tree_finished: ";
    rosidl_generator_traits::value_to_yaml(msg.tree_finished, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RemoteSlotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: tree_in_slot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tree_in_slot: ";
    rosidl_generator_traits::value_to_yaml(msg.tree_in_slot, out);
    out << "\n";
  }

  // member: tree_running
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tree_running: ";
    rosidl_generator_traits::value_to_yaml(msg.tree_running, out);
    out << "\n";
  }

  // member: tree_finished
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tree_finished: ";
    rosidl_generator_traits::value_to_yaml(msg.tree_finished, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RemoteSlotState & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::msg::RemoteSlotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::msg::RemoteSlotState & msg)
{
  return ros_bt_py_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::msg::RemoteSlotState>()
{
  return "ros_bt_py_interfaces::msg::RemoteSlotState";
}

template<>
inline const char * name<ros_bt_py_interfaces::msg::RemoteSlotState>()
{
  return "ros_bt_py_interfaces/msg/RemoteSlotState";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::msg::RemoteSlotState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::msg::RemoteSlotState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_bt_py_interfaces::msg::RemoteSlotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__REMOTE_SLOT_STATE__TRAITS_HPP_
