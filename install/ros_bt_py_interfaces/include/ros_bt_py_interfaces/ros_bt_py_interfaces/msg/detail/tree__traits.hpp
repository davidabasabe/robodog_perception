// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:msg/Tree.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__TREE__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__TREE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/msg/detail/tree__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'nodes'
#include "ros_bt_py_interfaces/msg/detail/node__traits.hpp"
// Member 'data_wirings'
#include "ros_bt_py_interfaces/msg/detail/node_data_wiring__traits.hpp"
// Member 'public_node_data'
#include "ros_bt_py_interfaces/msg/detail/node_data_location__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Tree & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: path
  {
    out << "path: ";
    rosidl_generator_traits::value_to_yaml(msg.path, out);
    out << ", ";
  }

  // member: root_name
  {
    out << "root_name: ";
    rosidl_generator_traits::value_to_yaml(msg.root_name, out);
    out << ", ";
  }

  // member: nodes
  {
    if (msg.nodes.size() == 0) {
      out << "nodes: []";
    } else {
      out << "nodes: [";
      size_t pending_items = msg.nodes.size();
      for (auto item : msg.nodes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: data_wirings
  {
    if (msg.data_wirings.size() == 0) {
      out << "data_wirings: []";
    } else {
      out << "data_wirings: [";
      size_t pending_items = msg.data_wirings.size();
      for (auto item : msg.data_wirings) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: tick_frequency_hz
  {
    out << "tick_frequency_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.tick_frequency_hz, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: public_node_data
  {
    if (msg.public_node_data.size() == 0) {
      out << "public_node_data: []";
    } else {
      out << "public_node_data: [";
      size_t pending_items = msg.public_node_data.size();
      for (auto item : msg.public_node_data) {
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
  const Tree & msg,
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

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "path: ";
    rosidl_generator_traits::value_to_yaml(msg.path, out);
    out << "\n";
  }

  // member: root_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "root_name: ";
    rosidl_generator_traits::value_to_yaml(msg.root_name, out);
    out << "\n";
  }

  // member: nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nodes.size() == 0) {
      out << "nodes: []\n";
    } else {
      out << "nodes:\n";
      for (auto item : msg.nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: data_wirings
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data_wirings.size() == 0) {
      out << "data_wirings: []\n";
    } else {
      out << "data_wirings:\n";
      for (auto item : msg.data_wirings) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: tick_frequency_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tick_frequency_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.tick_frequency_hz, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: public_node_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.public_node_data.size() == 0) {
      out << "public_node_data: []\n";
    } else {
      out << "public_node_data:\n";
      for (auto item : msg.public_node_data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Tree & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::msg::Tree & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::msg::Tree & msg)
{
  return ros_bt_py_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::msg::Tree>()
{
  return "ros_bt_py_interfaces::msg::Tree";
}

template<>
inline const char * name<ros_bt_py_interfaces::msg::Tree>()
{
  return "ros_bt_py_interfaces/msg/Tree";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::msg::Tree>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::msg::Tree>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::msg::Tree>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__TREE__TRAITS_HPP_
