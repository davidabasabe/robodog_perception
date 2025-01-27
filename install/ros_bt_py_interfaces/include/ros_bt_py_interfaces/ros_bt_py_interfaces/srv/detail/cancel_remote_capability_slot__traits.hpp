// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:srv/CancelRemoteCapabilitySlot.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__CANCEL_REMOTE_CAPABILITY_SLOT__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__CANCEL_REMOTE_CAPABILITY_SLOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/srv/detail/cancel_remote_capability_slot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CancelRemoteCapabilitySlot_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CancelRemoteCapabilitySlot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CancelRemoteCapabilitySlot_Request & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Request & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Request>()
{
  return "ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Request";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Request>()
{
  return "ros_bt_py_interfaces/srv/CancelRemoteCapabilitySlot_Request";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const CancelRemoteCapabilitySlot_Response & msg,
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CancelRemoteCapabilitySlot_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CancelRemoteCapabilitySlot_Response & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Response & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Response>()
{
  return "ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Response";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Response>()
{
  return "ros_bt_py_interfaces/srv/CancelRemoteCapabilitySlot_Response";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot>()
{
  return "ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot>()
{
  return "ros_bt_py_interfaces/srv/CancelRemoteCapabilitySlot";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Request>::value &&
    has_fixed_size<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Request>::value &&
    has_bounded_size<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Response>::value
  >
{
};

template<>
struct is_service<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot>
  : std::true_type
{
};

template<>
struct is_service_request<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_bt_py_interfaces::srv::CancelRemoteCapabilitySlot_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__CANCEL_REMOTE_CAPABILITY_SLOT__TRAITS_HPP_
