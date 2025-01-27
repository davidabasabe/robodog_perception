// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:msg/CapabilityInterface.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_INTERFACE__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_INTERFACE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/msg/detail/capability_interface__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'options'
// Member 'inputs'
// Member 'outputs'
#include "ros_bt_py_interfaces/msg/detail/node_data__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CapabilityInterface & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << ", ";
  }

  // member: options
  {
    if (msg.options.size() == 0) {
      out << "options: []";
    } else {
      out << "options: [";
      size_t pending_items = msg.options.size();
      for (auto item : msg.options) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: inputs
  {
    if (msg.inputs.size() == 0) {
      out << "inputs: []";
    } else {
      out << "inputs: [";
      size_t pending_items = msg.inputs.size();
      for (auto item : msg.inputs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: outputs
  {
    if (msg.outputs.size() == 0) {
      out << "outputs: []";
    } else {
      out << "outputs: [";
      size_t pending_items = msg.outputs.size();
      for (auto item : msg.outputs) {
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
  const CapabilityInterface & msg,
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

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description: ";
    rosidl_generator_traits::value_to_yaml(msg.description, out);
    out << "\n";
  }

  // member: options
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.options.size() == 0) {
      out << "options: []\n";
    } else {
      out << "options:\n";
      for (auto item : msg.options) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: inputs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.inputs.size() == 0) {
      out << "inputs: []\n";
    } else {
      out << "inputs:\n";
      for (auto item : msg.inputs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: outputs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.outputs.size() == 0) {
      out << "outputs: []\n";
    } else {
      out << "outputs:\n";
      for (auto item : msg.outputs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CapabilityInterface & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::msg::CapabilityInterface & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::msg::CapabilityInterface & msg)
{
  return ros_bt_py_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::msg::CapabilityInterface>()
{
  return "ros_bt_py_interfaces::msg::CapabilityInterface";
}

template<>
inline const char * name<ros_bt_py_interfaces::msg::CapabilityInterface>()
{
  return "ros_bt_py_interfaces/msg/CapabilityInterface";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::msg::CapabilityInterface>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::msg::CapabilityInterface>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::msg::CapabilityInterface>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_INTERFACE__TRAITS_HPP_
