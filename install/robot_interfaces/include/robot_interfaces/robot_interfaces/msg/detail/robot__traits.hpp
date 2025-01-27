// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__ROBOT__TRAITS_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__ROBOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_interfaces/msg/detail/robot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'arrow'
// Member 'lava'
#include "robot_interfaces/msg/detail/yolo_detection__traits.hpp"
// Member 'stair'
#include "robot_interfaces/msg/detail/stair__traits.hpp"
// Member 'wall'
#include "robot_interfaces/msg/detail/wall__traits.hpp"

namespace robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Robot & msg,
  std::ostream & out)
{
  out << "{";
  // member: arrow
  {
    out << "arrow: ";
    to_flow_style_yaml(msg.arrow, out);
    out << ", ";
  }

  // member: lava
  {
    out << "lava: ";
    to_flow_style_yaml(msg.lava, out);
    out << ", ";
  }

  // member: stair
  {
    out << "stair: ";
    to_flow_style_yaml(msg.stair, out);
    out << ", ";
  }

  // member: wall
  {
    out << "wall: ";
    to_flow_style_yaml(msg.wall, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Robot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: arrow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "arrow:\n";
    to_block_style_yaml(msg.arrow, out, indentation + 2);
  }

  // member: lava
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lava:\n";
    to_block_style_yaml(msg.lava, out, indentation + 2);
  }

  // member: stair
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stair:\n";
    to_block_style_yaml(msg.stair, out, indentation + 2);
  }

  // member: wall
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wall:\n";
    to_block_style_yaml(msg.wall, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Robot & msg, bool use_flow_style = false)
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

}  // namespace robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use robot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const robot_interfaces::msg::Robot & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces::msg::Robot & msg)
{
  return robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces::msg::Robot>()
{
  return "robot_interfaces::msg::Robot";
}

template<>
inline const char * name<robot_interfaces::msg::Robot>()
{
  return "robot_interfaces/msg/Robot";
}

template<>
struct has_fixed_size<robot_interfaces::msg::Robot>
  : std::integral_constant<bool, has_fixed_size<robot_interfaces::msg::Stair>::value && has_fixed_size<robot_interfaces::msg::Wall>::value && has_fixed_size<robot_interfaces::msg::YoloDetection>::value> {};

template<>
struct has_bounded_size<robot_interfaces::msg::Robot>
  : std::integral_constant<bool, has_bounded_size<robot_interfaces::msg::Stair>::value && has_bounded_size<robot_interfaces::msg::Wall>::value && has_bounded_size<robot_interfaces::msg::YoloDetection>::value> {};

template<>
struct is_message<robot_interfaces::msg::Robot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_INTERFACES__MSG__DETAIL__ROBOT__TRAITS_HPP_
