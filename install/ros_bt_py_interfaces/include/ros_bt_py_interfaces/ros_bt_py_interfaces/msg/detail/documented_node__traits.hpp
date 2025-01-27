// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:msg/DocumentedNode.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__DOCUMENTED_NODE__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__DOCUMENTED_NODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/msg/detail/documented_node__struct.hpp"
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
  const DocumentedNode & msg,
  std::ostream & out)
{
  out << "{";
  // member: module
  {
    out << "module: ";
    rosidl_generator_traits::value_to_yaml(msg.module, out);
    out << ", ";
  }

  // member: node_class
  {
    out << "node_class: ";
    rosidl_generator_traits::value_to_yaml(msg.node_class, out);
    out << ", ";
  }

  // member: version
  {
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << ", ";
  }

  // member: max_children
  {
    out << "max_children: ";
    rosidl_generator_traits::value_to_yaml(msg.max_children, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: child_names
  {
    if (msg.child_names.size() == 0) {
      out << "child_names: []";
    } else {
      out << "child_names: [";
      size_t pending_items = msg.child_names.size();
      for (auto item : msg.child_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
    out << ", ";
  }

  // member: doc
  {
    out << "doc: ";
    rosidl_generator_traits::value_to_yaml(msg.doc, out);
    out << ", ";
  }

  // member: tags
  {
    if (msg.tags.size() == 0) {
      out << "tags: []";
    } else {
      out << "tags: [";
      size_t pending_items = msg.tags.size();
      for (auto item : msg.tags) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DocumentedNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: module
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "module: ";
    rosidl_generator_traits::value_to_yaml(msg.module, out);
    out << "\n";
  }

  // member: node_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_class: ";
    rosidl_generator_traits::value_to_yaml(msg.node_class, out);
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

  // member: max_children
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_children: ";
    rosidl_generator_traits::value_to_yaml(msg.max_children, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: child_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.child_names.size() == 0) {
      out << "child_names: []\n";
    } else {
      out << "child_names:\n";
      for (auto item : msg.child_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: doc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "doc: ";
    rosidl_generator_traits::value_to_yaml(msg.doc, out);
    out << "\n";
  }

  // member: tags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tags.size() == 0) {
      out << "tags: []\n";
    } else {
      out << "tags:\n";
      for (auto item : msg.tags) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DocumentedNode & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::msg::DocumentedNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::msg::DocumentedNode & msg)
{
  return ros_bt_py_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::msg::DocumentedNode>()
{
  return "ros_bt_py_interfaces::msg::DocumentedNode";
}

template<>
inline const char * name<ros_bt_py_interfaces::msg::DocumentedNode>()
{
  return "ros_bt_py_interfaces/msg/DocumentedNode";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::msg::DocumentedNode>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::msg::DocumentedNode>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::msg::DocumentedNode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__DOCUMENTED_NODE__TRAITS_HPP_
