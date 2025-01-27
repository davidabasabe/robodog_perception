// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:srv/ReserveRemoteCapabilitySlot.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__RESERVE_REMOTE_CAPABILITY_SLOT__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__RESERVE_REMOTE_CAPABILITY_SLOT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/srv/detail/reserve_remote_capability_slot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReserveRemoteCapabilitySlot_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: remote_mission_control
  {
    out << "remote_mission_control: ";
    rosidl_generator_traits::value_to_yaml(msg.remote_mission_control, out);
    out << ", ";
  }

  // member: implementation_name
  {
    out << "implementation_name: ";
    rosidl_generator_traits::value_to_yaml(msg.implementation_name, out);
    out << ", ";
  }

  // member: reauction_threshold
  {
    out << "reauction_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.reauction_threshold, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReserveRemoteCapabilitySlot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: remote_mission_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remote_mission_control: ";
    rosidl_generator_traits::value_to_yaml(msg.remote_mission_control, out);
    out << "\n";
  }

  // member: implementation_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "implementation_name: ";
    rosidl_generator_traits::value_to_yaml(msg.implementation_name, out);
    out << "\n";
  }

  // member: reauction_threshold
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reauction_threshold: ";
    rosidl_generator_traits::value_to_yaml(msg.reauction_threshold, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReserveRemoteCapabilitySlot_Request & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request>()
{
  return "ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request>()
{
  return "ros_bt_py_interfaces/srv/ReserveRemoteCapabilitySlot_Request";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReserveRemoteCapabilitySlot_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReserveRemoteCapabilitySlot_Response & msg,
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

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReserveRemoteCapabilitySlot_Response & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response>()
{
  return "ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response>()
{
  return "ros_bt_py_interfaces/srv/ReserveRemoteCapabilitySlot_Response";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot>()
{
  return "ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot>()
{
  return "ros_bt_py_interfaces/srv/ReserveRemoteCapabilitySlot";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request>::value &&
    has_fixed_size<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request>::value &&
    has_bounded_size<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response>::value
  >
{
};

template<>
struct is_service<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot>
  : std::true_type
{
};

template<>
struct is_service_request<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__RESERVE_REMOTE_CAPABILITY_SLOT__TRAITS_HPP_
