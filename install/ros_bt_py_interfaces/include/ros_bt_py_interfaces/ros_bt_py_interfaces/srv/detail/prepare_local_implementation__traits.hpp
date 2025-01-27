// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:srv/PrepareLocalImplementation.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__PREPARE_LOCAL_IMPLEMENTATION__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__PREPARE_LOCAL_IMPLEMENTATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/srv/detail/prepare_local_implementation__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'interface'
#include "ros_bt_py_interfaces/msg/detail/capability_interface__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PrepareLocalImplementation_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: implementation_name
  {
    out << "implementation_name: ";
    rosidl_generator_traits::value_to_yaml(msg.implementation_name, out);
    out << ", ";
  }

  // member: interface
  {
    out << "interface: ";
    to_flow_style_yaml(msg.interface, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrepareLocalImplementation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: implementation_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "implementation_name: ";
    rosidl_generator_traits::value_to_yaml(msg.implementation_name, out);
    out << "\n";
  }

  // member: interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interface:\n";
    to_block_style_yaml(msg.interface, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrepareLocalImplementation_Request & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request>()
{
  return "ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request>()
{
  return "ros_bt_py_interfaces/srv/PrepareLocalImplementation_Request";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'implementation_subtree'
#include "ros_bt_py_interfaces/msg/detail/tree__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PrepareLocalImplementation_Response & msg,
  std::ostream & out)
{
  out << "{";
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
    out << ", ";
  }

  // member: implementation_subtree
  {
    out << "implementation_subtree: ";
    to_flow_style_yaml(msg.implementation_subtree, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PrepareLocalImplementation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
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

  // member: implementation_subtree
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "implementation_subtree:\n";
    to_block_style_yaml(msg.implementation_subtree, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PrepareLocalImplementation_Response & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response>()
{
  return "ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response>()
{
  return "ros_bt_py_interfaces/srv/PrepareLocalImplementation_Response";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::PrepareLocalImplementation>()
{
  return "ros_bt_py_interfaces::srv::PrepareLocalImplementation";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::PrepareLocalImplementation>()
{
  return "ros_bt_py_interfaces/srv/PrepareLocalImplementation";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::PrepareLocalImplementation>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request>::value &&
    has_fixed_size<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::PrepareLocalImplementation>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request>::value &&
    has_bounded_size<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response>::value
  >
{
};

template<>
struct is_service<ros_bt_py_interfaces::srv::PrepareLocalImplementation>
  : std::true_type
{
};

template<>
struct is_service_request<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__PREPARE_LOCAL_IMPLEMENTATION__TRAITS_HPP_
