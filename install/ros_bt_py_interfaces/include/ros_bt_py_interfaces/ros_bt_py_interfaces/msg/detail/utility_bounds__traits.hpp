// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:msg/UtilityBounds.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__UTILITY_BOUNDS__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__UTILITY_BOUNDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/msg/detail/utility_bounds__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_bt_py_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const UtilityBounds & msg,
  std::ostream & out)
{
  out << "{";
  // member: can_execute
  {
    out << "can_execute: ";
    rosidl_generator_traits::value_to_yaml(msg.can_execute, out);
    out << ", ";
  }

  // member: has_upper_bound_success
  {
    out << "has_upper_bound_success: ";
    rosidl_generator_traits::value_to_yaml(msg.has_upper_bound_success, out);
    out << ", ";
  }

  // member: upper_bound_success
  {
    out << "upper_bound_success: ";
    rosidl_generator_traits::value_to_yaml(msg.upper_bound_success, out);
    out << ", ";
  }

  // member: has_lower_bound_success
  {
    out << "has_lower_bound_success: ";
    rosidl_generator_traits::value_to_yaml(msg.has_lower_bound_success, out);
    out << ", ";
  }

  // member: lower_bound_success
  {
    out << "lower_bound_success: ";
    rosidl_generator_traits::value_to_yaml(msg.lower_bound_success, out);
    out << ", ";
  }

  // member: has_upper_bound_failure
  {
    out << "has_upper_bound_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.has_upper_bound_failure, out);
    out << ", ";
  }

  // member: upper_bound_failure
  {
    out << "upper_bound_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.upper_bound_failure, out);
    out << ", ";
  }

  // member: has_lower_bound_failure
  {
    out << "has_lower_bound_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.has_lower_bound_failure, out);
    out << ", ";
  }

  // member: lower_bound_failure
  {
    out << "lower_bound_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.lower_bound_failure, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UtilityBounds & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: can_execute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_execute: ";
    rosidl_generator_traits::value_to_yaml(msg.can_execute, out);
    out << "\n";
  }

  // member: has_upper_bound_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_upper_bound_success: ";
    rosidl_generator_traits::value_to_yaml(msg.has_upper_bound_success, out);
    out << "\n";
  }

  // member: upper_bound_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "upper_bound_success: ";
    rosidl_generator_traits::value_to_yaml(msg.upper_bound_success, out);
    out << "\n";
  }

  // member: has_lower_bound_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_lower_bound_success: ";
    rosidl_generator_traits::value_to_yaml(msg.has_lower_bound_success, out);
    out << "\n";
  }

  // member: lower_bound_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lower_bound_success: ";
    rosidl_generator_traits::value_to_yaml(msg.lower_bound_success, out);
    out << "\n";
  }

  // member: has_upper_bound_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_upper_bound_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.has_upper_bound_failure, out);
    out << "\n";
  }

  // member: upper_bound_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "upper_bound_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.upper_bound_failure, out);
    out << "\n";
  }

  // member: has_lower_bound_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_lower_bound_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.has_lower_bound_failure, out);
    out << "\n";
  }

  // member: lower_bound_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lower_bound_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.lower_bound_failure, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UtilityBounds & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::msg::UtilityBounds & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::msg::UtilityBounds & msg)
{
  return ros_bt_py_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::msg::UtilityBounds>()
{
  return "ros_bt_py_interfaces::msg::UtilityBounds";
}

template<>
inline const char * name<ros_bt_py_interfaces::msg::UtilityBounds>()
{
  return "ros_bt_py_interfaces/msg/UtilityBounds";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::msg::UtilityBounds>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::msg::UtilityBounds>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_bt_py_interfaces::msg::UtilityBounds>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__UTILITY_BOUNDS__TRAITS_HPP_
