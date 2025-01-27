// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:msg/CapabilityImplementation.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_IMPLEMENTATION__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_IMPLEMENTATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/msg/detail/capability_implementation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'preconditions'
#include "ros_bt_py_interfaces/msg/detail/precondition__traits.hpp"
// Member 'tree'
#include "ros_bt_py_interfaces/msg/detail/tree__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CapabilityImplementation & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: version
  {
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << ", ";
  }

  // member: preconditions
  {
    if (msg.preconditions.size() == 0) {
      out << "preconditions: []";
    } else {
      out << "preconditions: [";
      size_t pending_items = msg.preconditions.size();
      for (auto item : msg.preconditions) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tags_dict
  {
    out << "tags_dict: ";
    rosidl_generator_traits::value_to_yaml(msg.tags_dict, out);
    out << ", ";
  }

  // member: tree
  {
    out << "tree: ";
    to_flow_style_yaml(msg.tree, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CapabilityImplementation & msg,
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

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << "\n";
  }

  // member: preconditions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.preconditions.size() == 0) {
      out << "preconditions: []\n";
    } else {
      out << "preconditions:\n";
      for (auto item : msg.preconditions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: tags_dict
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tags_dict: ";
    rosidl_generator_traits::value_to_yaml(msg.tags_dict, out);
    out << "\n";
  }

  // member: tree
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tree:\n";
    to_block_style_yaml(msg.tree, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CapabilityImplementation & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::msg::CapabilityImplementation & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::msg::CapabilityImplementation & msg)
{
  return ros_bt_py_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::msg::CapabilityImplementation>()
{
  return "ros_bt_py_interfaces::msg::CapabilityImplementation";
}

template<>
inline const char * name<ros_bt_py_interfaces::msg::CapabilityImplementation>()
{
  return "ros_bt_py_interfaces/msg/CapabilityImplementation";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::msg::CapabilityImplementation>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::msg::CapabilityImplementation>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::msg::CapabilityImplementation>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_IMPLEMENTATION__TRAITS_HPP_
