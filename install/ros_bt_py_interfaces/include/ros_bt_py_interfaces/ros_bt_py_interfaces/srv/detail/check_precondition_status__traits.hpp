// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:srv/CheckPreconditionStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__CHECK_PRECONDITION_STATUS__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__CHECK_PRECONDITION_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/srv/detail/check_precondition_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'interface'
#include "ros_bt_py_interfaces/msg/detail/capability_interface__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckPreconditionStatus_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: interface
  {
    out << "interface: ";
    to_flow_style_yaml(msg.interface, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckPreconditionStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: interface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interface:\n";
    to_block_style_yaml(msg.interface, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckPreconditionStatus_Request & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request>()
{
  return "ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request>()
{
  return "ros_bt_py_interfaces/srv/CheckPreconditionStatus_Request";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request>
  : std::integral_constant<bool, has_fixed_size<ros_bt_py_interfaces::msg::CapabilityInterface>::value> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request>
  : std::integral_constant<bool, has_bounded_size<ros_bt_py_interfaces::msg::CapabilityInterface>::value> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CheckPreconditionStatus_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: available
  {
    out << "available: ";
    rosidl_generator_traits::value_to_yaml(msg.available, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CheckPreconditionStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "available: ";
    rosidl_generator_traits::value_to_yaml(msg.available, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CheckPreconditionStatus_Response & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response>()
{
  return "ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response>()
{
  return "ros_bt_py_interfaces/srv/CheckPreconditionStatus_Response";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::CheckPreconditionStatus>()
{
  return "ros_bt_py_interfaces::srv::CheckPreconditionStatus";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::CheckPreconditionStatus>()
{
  return "ros_bt_py_interfaces/srv/CheckPreconditionStatus";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::CheckPreconditionStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request>::value &&
    has_fixed_size<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::CheckPreconditionStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request>::value &&
    has_bounded_size<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response>::value
  >
{
};

template<>
struct is_service<ros_bt_py_interfaces::srv::CheckPreconditionStatus>
  : std::true_type
{
};

template<>
struct is_service_request<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__CHECK_PRECONDITION_STATUS__TRAITS_HPP_
