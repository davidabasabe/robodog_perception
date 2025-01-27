// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:srv/FindBestCapabilityExecutor.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__FIND_BEST_CAPABILITY_EXECUTOR__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__FIND_BEST_CAPABILITY_EXECUTOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/srv/detail/find_best_capability_executor__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'capability'
#include "ros_bt_py_interfaces/msg/detail/capability_interface__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const FindBestCapabilityExecutor_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: capability
  {
    out << "capability: ";
    to_flow_style_yaml(msg.capability, out);
    out << ", ";
  }

  // member: node_id
  {
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << ", ";
  }

  // member: mission_control_name
  {
    out << "mission_control_name: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_control_name, out);
    out << ", ";
  }

  // member: implementation_tags_dict
  {
    out << "implementation_tags_dict: ";
    rosidl_generator_traits::value_to_yaml(msg.implementation_tags_dict, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FindBestCapabilityExecutor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: capability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "capability:\n";
    to_block_style_yaml(msg.capability, out, indentation + 2);
  }

  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
    out << "\n";
  }

  // member: mission_control_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mission_control_name: ";
    rosidl_generator_traits::value_to_yaml(msg.mission_control_name, out);
    out << "\n";
  }

  // member: implementation_tags_dict
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "implementation_tags_dict: ";
    rosidl_generator_traits::value_to_yaml(msg.implementation_tags_dict, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FindBestCapabilityExecutor_Request & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request>()
{
  return "ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request>()
{
  return "ros_bt_py_interfaces/srv/FindBestCapabilityExecutor_Request";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const FindBestCapabilityExecutor_Response & msg,
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

  // member: execute_local
  {
    out << "execute_local: ";
    rosidl_generator_traits::value_to_yaml(msg.execute_local, out);
    out << ", ";
  }

  // member: executor_mission_control_topic
  {
    out << "executor_mission_control_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.executor_mission_control_topic, out);
    out << ", ";
  }

  // member: implementation_name
  {
    out << "implementation_name: ";
    rosidl_generator_traits::value_to_yaml(msg.implementation_name, out);
    out << ", ";
  }

  // member: max_allowed_costs
  {
    out << "max_allowed_costs: ";
    rosidl_generator_traits::value_to_yaml(msg.max_allowed_costs, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FindBestCapabilityExecutor_Response & msg,
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

  // member: execute_local
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "execute_local: ";
    rosidl_generator_traits::value_to_yaml(msg.execute_local, out);
    out << "\n";
  }

  // member: executor_mission_control_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "executor_mission_control_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.executor_mission_control_topic, out);
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

  // member: max_allowed_costs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_allowed_costs: ";
    rosidl_generator_traits::value_to_yaml(msg.max_allowed_costs, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FindBestCapabilityExecutor_Response & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response>()
{
  return "ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response>()
{
  return "ros_bt_py_interfaces/srv/FindBestCapabilityExecutor_Response";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor>()
{
  return "ros_bt_py_interfaces::srv::FindBestCapabilityExecutor";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor>()
{
  return "ros_bt_py_interfaces/srv/FindBestCapabilityExecutor";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request>::value &&
    has_fixed_size<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request>::value &&
    has_bounded_size<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response>::value
  >
{
};

template<>
struct is_service<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor>
  : std::true_type
{
};

template<>
struct is_service_request<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__FIND_BEST_CAPABILITY_EXECUTOR__TRAITS_HPP_
