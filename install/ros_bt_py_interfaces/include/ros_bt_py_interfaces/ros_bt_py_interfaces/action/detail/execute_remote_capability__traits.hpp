// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:action/ExecuteRemoteCapability.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__ACTION__DETAIL__EXECUTE_REMOTE_CAPABILITY__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__ACTION__DETAIL__EXECUTE_REMOTE_CAPABILITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/action/detail/execute_remote_capability__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'interface'
#include "ros_bt_py_interfaces/msg/detail/capability_interface__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteRemoteCapability_Goal & msg,
  std::ostream & out)
{
  out << "{";
  // member: interface
  {
    out << "interface: ";
    to_flow_style_yaml(msg.interface, out);
    out << ", ";
  }

  // member: implementation_name
  {
    out << "implementation_name: ";
    rosidl_generator_traits::value_to_yaml(msg.implementation_name, out);
    out << ", ";
  }

  // member: node_id
  {
    out << "node_id: ";
    rosidl_generator_traits::value_to_yaml(msg.node_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteRemoteCapability_Goal & msg,
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

  // member: implementation_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "implementation_name: ";
    rosidl_generator_traits::value_to_yaml(msg.implementation_name, out);
    out << "\n";
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteRemoteCapability_Goal & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_bt_py_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ros_bt_py_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal & msg)
{
  return ros_bt_py_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal>()
{
  return "ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal";
}

template<>
inline const char * name<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal>()
{
  return "ros_bt_py_interfaces/action/ExecuteRemoteCapability_Goal";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_bt_py_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteRemoteCapability_Result & msg,
  std::ostream & out)
{
  out << "{";
  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << ", ";
  }

  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: no_executor_available
  {
    out << "no_executor_available: ";
    rosidl_generator_traits::value_to_yaml(msg.no_executor_available, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteRemoteCapability_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
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

  // member: no_executor_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "no_executor_available: ";
    rosidl_generator_traits::value_to_yaml(msg.no_executor_available, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteRemoteCapability_Result & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_bt_py_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ros_bt_py_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result & msg)
{
  return ros_bt_py_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result>()
{
  return "ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result";
}

template<>
inline const char * name<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result>()
{
  return "ros_bt_py_interfaces/action/ExecuteRemoteCapability_Result";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_bt_py_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteRemoteCapability_Feedback & msg,
  std::ostream & out)
{
  out << "{";
  // member: completion_progress
  {
    out << "completion_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.completion_progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteRemoteCapability_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: completion_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "completion_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.completion_progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteRemoteCapability_Feedback & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_bt_py_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ros_bt_py_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_bt_py_interfaces::action::ExecuteRemoteCapability_Feedback & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::action::ExecuteRemoteCapability_Feedback & msg)
{
  return ros_bt_py_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Feedback>()
{
  return "ros_bt_py_interfaces::action::ExecuteRemoteCapability_Feedback";
}

template<>
inline const char * name<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Feedback>()
{
  return "ros_bt_py_interfaces/action/ExecuteRemoteCapability_Feedback";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "ros_bt_py_interfaces/action/detail/execute_remote_capability__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteRemoteCapability_SendGoal_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: goal
  {
    out << "goal: ";
    to_flow_style_yaml(msg.goal, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteRemoteCapability_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: goal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal:\n";
    to_block_style_yaml(msg.goal, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteRemoteCapability_SendGoal_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_bt_py_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ros_bt_py_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request & msg)
{
  return ros_bt_py_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request>()
{
  return "ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request";
}

template<>
inline const char * name<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request>()
{
  return "ros_bt_py_interfaces/action/ExecuteRemoteCapability_SendGoal_Request";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteRemoteCapability_SendGoal_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: accepted
  {
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << ", ";
  }

  // member: stamp
  {
    out << "stamp: ";
    to_flow_style_yaml(msg.stamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteRemoteCapability_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: accepted
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accepted: ";
    rosidl_generator_traits::value_to_yaml(msg.accepted, out);
    out << "\n";
  }

  // member: stamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stamp:\n";
    to_block_style_yaml(msg.stamp, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteRemoteCapability_SendGoal_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_bt_py_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ros_bt_py_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response & msg)
{
  return ros_bt_py_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response>()
{
  return "ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response";
}

template<>
inline const char * name<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response>()
{
  return "ros_bt_py_interfaces/action/ExecuteRemoteCapability_SendGoal_Response";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal>()
{
  return "ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal";
}

template<>
inline const char * name<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal>()
{
  return "ros_bt_py_interfaces/action/ExecuteRemoteCapability_SendGoal";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request>::value &&
    has_fixed_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request>::value &&
    has_bounded_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteRemoteCapability_GetResult_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteRemoteCapability_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteRemoteCapability_GetResult_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_bt_py_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ros_bt_py_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Request & msg)
{
  return ros_bt_py_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Request>()
{
  return "ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Request";
}

template<>
inline const char * name<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Request>()
{
  return "ros_bt_py_interfaces/action/ExecuteRemoteCapability_GetResult_Request";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "ros_bt_py_interfaces/action/detail/execute_remote_capability__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteRemoteCapability_GetResult_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: result
  {
    out << "result: ";
    to_flow_style_yaml(msg.result, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteRemoteCapability_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: result
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "result:\n";
    to_block_style_yaml(msg.result, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteRemoteCapability_GetResult_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_bt_py_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ros_bt_py_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response & msg)
{
  return ros_bt_py_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response>()
{
  return "ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response";
}

template<>
inline const char * name<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response>()
{
  return "ros_bt_py_interfaces/action/ExecuteRemoteCapability_GetResult_Response";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result>::value> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result>::value> {};

template<>
struct is_message<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult>()
{
  return "ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult";
}

template<>
inline const char * name<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult>()
{
  return "ros_bt_py_interfaces/action/ExecuteRemoteCapability_GetResult";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Request>::value &&
    has_fixed_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Request>::value &&
    has_bounded_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response>::value
  >
{
};

template<>
struct is_service<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "ros_bt_py_interfaces/action/detail/execute_remote_capability__traits.hpp"

namespace ros_bt_py_interfaces
{

namespace action
{

inline void to_flow_style_yaml(
  const ExecuteRemoteCapability_FeedbackMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_id
  {
    out << "goal_id: ";
    to_flow_style_yaml(msg.goal_id, out);
    out << ", ";
  }

  // member: feedback
  {
    out << "feedback: ";
    to_flow_style_yaml(msg.feedback, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ExecuteRemoteCapability_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_id:\n";
    to_block_style_yaml(msg.goal_id, out, indentation + 2);
  }

  // member: feedback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "feedback:\n";
    to_block_style_yaml(msg.feedback, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ExecuteRemoteCapability_FeedbackMessage & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace action

}  // namespace ros_bt_py_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use ros_bt_py_interfaces::action::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ros_bt_py_interfaces::action::ExecuteRemoteCapability_FeedbackMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::action::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::action::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::action::ExecuteRemoteCapability_FeedbackMessage & msg)
{
  return ros_bt_py_interfaces::action::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::action::ExecuteRemoteCapability_FeedbackMessage>()
{
  return "ros_bt_py_interfaces::action::ExecuteRemoteCapability_FeedbackMessage";
}

template<>
inline const char * name<ros_bt_py_interfaces::action::ExecuteRemoteCapability_FeedbackMessage>()
{
  return "ros_bt_py_interfaces/action/ExecuteRemoteCapability_FeedbackMessage";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<ros_bt_py_interfaces::action::ExecuteRemoteCapability_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<ros_bt_py_interfaces::action::ExecuteRemoteCapability>
  : std::true_type
{
};

template<>
struct is_action_goal<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<ros_bt_py_interfaces::action::ExecuteRemoteCapability_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // ROS_BT_PY_INTERFACES__ACTION__DETAIL__EXECUTE_REMOTE_CAPABILITY__TRAITS_HPP_
