// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:srv/GetAvailableNodes.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_NODES__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_NODES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/srv/detail/get_available_nodes__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetAvailableNodes_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_modules
  {
    if (msg.node_modules.size() == 0) {
      out << "node_modules: []";
    } else {
      out << "node_modules: [";
      size_t pending_items = msg.node_modules.size();
      for (auto item : msg.node_modules) {
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
  const GetAvailableNodes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_modules
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.node_modules.size() == 0) {
      out << "node_modules: []\n";
    } else {
      out << "node_modules:\n";
      for (auto item : msg.node_modules) {
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

inline std::string to_yaml(const GetAvailableNodes_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ros_bt_py_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ros_bt_py_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_bt_py_interfaces::srv::GetAvailableNodes_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::GetAvailableNodes_Request & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::GetAvailableNodes_Request>()
{
  return "ros_bt_py_interfaces::srv::GetAvailableNodes_Request";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::GetAvailableNodes_Request>()
{
  return "ros_bt_py_interfaces/srv/GetAvailableNodes_Request";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::GetAvailableNodes_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::GetAvailableNodes_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::GetAvailableNodes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'available_nodes'
#include "ros_bt_py_interfaces/msg/detail/documented_node__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetAvailableNodes_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: available_nodes
  {
    if (msg.available_nodes.size() == 0) {
      out << "available_nodes: []";
    } else {
      out << "available_nodes: [";
      size_t pending_items = msg.available_nodes.size();
      for (auto item : msg.available_nodes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetAvailableNodes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: available_nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.available_nodes.size() == 0) {
      out << "available_nodes: []\n";
    } else {
      out << "available_nodes:\n";
      for (auto item : msg.available_nodes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetAvailableNodes_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ros_bt_py_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ros_bt_py_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_bt_py_interfaces::srv::GetAvailableNodes_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::GetAvailableNodes_Response & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::GetAvailableNodes_Response>()
{
  return "ros_bt_py_interfaces::srv::GetAvailableNodes_Response";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::GetAvailableNodes_Response>()
{
  return "ros_bt_py_interfaces/srv/GetAvailableNodes_Response";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::GetAvailableNodes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::GetAvailableNodes_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::GetAvailableNodes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::GetAvailableNodes>()
{
  return "ros_bt_py_interfaces::srv::GetAvailableNodes";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::GetAvailableNodes>()
{
  return "ros_bt_py_interfaces/srv/GetAvailableNodes";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::GetAvailableNodes>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_bt_py_interfaces::srv::GetAvailableNodes_Request>::value &&
    has_fixed_size<ros_bt_py_interfaces::srv::GetAvailableNodes_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::GetAvailableNodes>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_bt_py_interfaces::srv::GetAvailableNodes_Request>::value &&
    has_bounded_size<ros_bt_py_interfaces::srv::GetAvailableNodes_Response>::value
  >
{
};

template<>
struct is_service<ros_bt_py_interfaces::srv::GetAvailableNodes>
  : std::true_type
{
};

template<>
struct is_service_request<ros_bt_py_interfaces::srv::GetAvailableNodes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_bt_py_interfaces::srv::GetAvailableNodes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_NODES__TRAITS_HPP_
