// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:msg/CapabilityExecutionStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_EXECUTION_STATUS__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_EXECUTION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/msg/detail/capability_execution_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'interface'
#include "ros_bt_py_interfaces/msg/detail/capability_interface__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CapabilityExecutionStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: interface
  {
    out << "interface: ";
    to_flow_style_yaml(msg.interface, out);
    out << ", ";
  }

  // member: node_name
  {
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CapabilityExecutionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interface:\n";
    to_block_style_yaml(msg.interface, out, indentation + 2);
  }

  // member: node_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_name: ";
    rosidl_generator_traits::value_to_yaml(msg.node_name, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CapabilityExecutionStatus & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::msg::CapabilityExecutionStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::msg::CapabilityExecutionStatus & msg)
{
  return ros_bt_py_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::msg::CapabilityExecutionStatus>()
{
  return "ros_bt_py_interfaces::msg::CapabilityExecutionStatus";
}

template<>
inline const char * name<ros_bt_py_interfaces::msg::CapabilityExecutionStatus>()
{
  return "ros_bt_py_interfaces/msg/CapabilityExecutionStatus";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::msg::CapabilityExecutionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::msg::CapabilityExecutionStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::msg::CapabilityExecutionStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_EXECUTION_STATUS__TRAITS_HPP_
