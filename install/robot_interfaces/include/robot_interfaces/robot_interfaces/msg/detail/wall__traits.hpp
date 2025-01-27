// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces:msg/Wall.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__WALL__TRAITS_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__WALL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_interfaces/msg/detail/wall__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Wall & msg,
  std::ostream & out)
{
  out << "{";
  // member: distance_left
  {
    out << "distance_left: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_left, out);
    out << ", ";
  }

  // member: distance_right
  {
    out << "distance_right: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_right, out);
    out << ", ";
  }

  // member: distance_front
  {
    out << "distance_front: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_front, out);
    out << ", ";
  }

  // member: angle_left
  {
    out << "angle_left: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_left, out);
    out << ", ";
  }

  // member: angle_right
  {
    out << "angle_right: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_right, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Wall & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: distance_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_left: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_left, out);
    out << "\n";
  }

  // member: distance_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_right: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_right, out);
    out << "\n";
  }

  // member: distance_front
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_front: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_front, out);
    out << "\n";
  }

  // member: angle_left
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_left: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_left, out);
    out << "\n";
  }

  // member: angle_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle_right: ";
    rosidl_generator_traits::value_to_yaml(msg.angle_right, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Wall & msg, bool use_flow_style = false)
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
  const robot_interfaces::msg::Wall & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces::msg::Wall & msg)
{
  return robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces::msg::Wall>()
{
  return "robot_interfaces::msg::Wall";
}

template<>
inline const char * name<robot_interfaces::msg::Wall>()
{
  return "robot_interfaces/msg/Wall";
}

template<>
struct has_fixed_size<robot_interfaces::msg::Wall>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<robot_interfaces::msg::Wall>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<robot_interfaces::msg::Wall>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_INTERFACES__MSG__DETAIL__WALL__TRAITS_HPP_
