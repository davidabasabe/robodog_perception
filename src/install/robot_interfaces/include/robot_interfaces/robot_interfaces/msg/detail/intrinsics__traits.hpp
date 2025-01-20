// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from robot_interfaces:msg/Intrinsics.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__INTRINSICS__TRAITS_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__INTRINSICS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "robot_interfaces/msg/detail/intrinsics__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Intrinsics & msg,
  std::ostream & out)
{
  out << "{";
  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: ppx
  {
    out << "ppx: ";
    rosidl_generator_traits::value_to_yaml(msg.ppx, out);
    out << ", ";
  }

  // member: ppy
  {
    out << "ppy: ";
    rosidl_generator_traits::value_to_yaml(msg.ppy, out);
    out << ", ";
  }

  // member: fx
  {
    out << "fx: ";
    rosidl_generator_traits::value_to_yaml(msg.fx, out);
    out << ", ";
  }

  // member: fy
  {
    out << "fy: ";
    rosidl_generator_traits::value_to_yaml(msg.fy, out);
    out << ", ";
  }

  // member: depth_scale
  {
    out << "depth_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.depth_scale, out);
    out << ", ";
  }

  // member: model
  {
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << ", ";
  }

  // member: coeffs
  {
    if (msg.coeffs.size() == 0) {
      out << "coeffs: []";
    } else {
      out << "coeffs: [";
      size_t pending_items = msg.coeffs.size();
      for (auto item : msg.coeffs) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const Intrinsics & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: ppx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ppx: ";
    rosidl_generator_traits::value_to_yaml(msg.ppx, out);
    out << "\n";
  }

  // member: ppy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ppy: ";
    rosidl_generator_traits::value_to_yaml(msg.ppy, out);
    out << "\n";
  }

  // member: fx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fx: ";
    rosidl_generator_traits::value_to_yaml(msg.fx, out);
    out << "\n";
  }

  // member: fy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fy: ";
    rosidl_generator_traits::value_to_yaml(msg.fy, out);
    out << "\n";
  }

  // member: depth_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.depth_scale, out);
    out << "\n";
  }

  // member: model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << "\n";
  }

  // member: coeffs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.coeffs.size() == 0) {
      out << "coeffs: []\n";
    } else {
      out << "coeffs:\n";
      for (auto item : msg.coeffs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Intrinsics & msg, bool use_flow_style = false)
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
  const robot_interfaces::msg::Intrinsics & msg,
  std::ostream & out, size_t indentation = 0)
{
  robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const robot_interfaces::msg::Intrinsics & msg)
{
  return robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<robot_interfaces::msg::Intrinsics>()
{
  return "robot_interfaces::msg::Intrinsics";
}

template<>
inline const char * name<robot_interfaces::msg::Intrinsics>()
{
  return "robot_interfaces/msg/Intrinsics";
}

template<>
struct has_fixed_size<robot_interfaces::msg::Intrinsics>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<robot_interfaces::msg::Intrinsics>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<robot_interfaces::msg::Intrinsics>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROBOT_INTERFACES__MSG__DETAIL__INTRINSICS__TRAITS_HPP_
