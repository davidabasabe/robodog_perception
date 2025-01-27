// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:srv/GetAvailableRemoteCapabilitySlots.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_REMOTE_CAPABILITY_SLOTS__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_REMOTE_CAPABILITY_SLOTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/srv/detail/get_available_remote_capability_slots__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetAvailableRemoteCapabilitySlots_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetAvailableRemoteCapabilitySlots_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetAvailableRemoteCapabilitySlots_Request & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request>()
{
  return "ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request>()
{
  return "ros_bt_py_interfaces/srv/GetAvailableRemoteCapabilitySlots_Request";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetAvailableRemoteCapabilitySlots_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: available_remote_capability_slots
  {
    out << "available_remote_capability_slots: ";
    rosidl_generator_traits::value_to_yaml(msg.available_remote_capability_slots, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetAvailableRemoteCapabilitySlots_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: available_remote_capability_slots
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "available_remote_capability_slots: ";
    rosidl_generator_traits::value_to_yaml(msg.available_remote_capability_slots, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetAvailableRemoteCapabilitySlots_Response & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response>()
{
  return "ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response>()
{
  return "ros_bt_py_interfaces/srv/GetAvailableRemoteCapabilitySlots_Response";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots>()
{
  return "ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots>()
{
  return "ros_bt_py_interfaces/srv/GetAvailableRemoteCapabilitySlots";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request>::value &&
    has_fixed_size<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request>::value &&
    has_bounded_size<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response>::value
  >
{
};

template<>
struct is_service<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots>
  : std::true_type
{
};

template<>
struct is_service_request<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_bt_py_interfaces::srv::GetAvailableRemoteCapabilitySlots_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_REMOTE_CAPABILITY_SLOTS__TRAITS_HPP_
