// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:msg/RemoteCapabilitySlotStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__REMOTE_CAPABILITY_SLOT_STATUS__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__REMOTE_CAPABILITY_SLOT_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/msg/detail/remote_capability_slot_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RemoteCapabilitySlotStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RemoteCapabilitySlotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RemoteCapabilitySlotStatus & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus & msg)
{
  return ros_bt_py_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus>()
{
  return "ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus";
}

template<>
inline const char * name<ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus>()
{
  return "ros_bt_py_interfaces/msg/RemoteCapabilitySlotStatus";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::msg::RemoteCapabilitySlotStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__REMOTE_CAPABILITY_SLOT_STATUS__TRAITS_HPP_
