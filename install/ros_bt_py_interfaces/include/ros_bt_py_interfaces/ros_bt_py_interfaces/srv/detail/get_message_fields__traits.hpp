// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:srv/GetMessageFields.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_MESSAGE_FIELDS__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_MESSAGE_FIELDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/srv/detail/get_message_fields__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMessageFields_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: message_type
  {
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << ", ";
  }

  // member: service
  {
    out << "service: ";
    rosidl_generator_traits::value_to_yaml(msg.service, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetMessageFields_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: message_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << "\n";
  }

  // member: service
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "service: ";
    rosidl_generator_traits::value_to_yaml(msg.service, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetMessageFields_Request & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::srv::GetMessageFields_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::GetMessageFields_Request & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::GetMessageFields_Request>()
{
  return "ros_bt_py_interfaces::srv::GetMessageFields_Request";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::GetMessageFields_Request>()
{
  return "ros_bt_py_interfaces/srv/GetMessageFields_Request";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::GetMessageFields_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::GetMessageFields_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::GetMessageFields_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetMessageFields_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: fields
  {
    out << "fields: ";
    rosidl_generator_traits::value_to_yaml(msg.fields, out);
    out << ", ";
  }

  // member: field_names
  {
    if (msg.field_names.size() == 0) {
      out << "field_names: []";
    } else {
      out << "field_names: [";
      size_t pending_items = msg.field_names.size();
      for (auto item : msg.field_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const GetMessageFields_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fields
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fields: ";
    rosidl_generator_traits::value_to_yaml(msg.fields, out);
    out << "\n";
  }

  // member: field_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.field_names.size() == 0) {
      out << "field_names: []\n";
    } else {
      out << "field_names:\n";
      for (auto item : msg.field_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
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

inline std::string to_yaml(const GetMessageFields_Response & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::srv::GetMessageFields_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::GetMessageFields_Response & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::GetMessageFields_Response>()
{
  return "ros_bt_py_interfaces::srv::GetMessageFields_Response";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::GetMessageFields_Response>()
{
  return "ros_bt_py_interfaces/srv/GetMessageFields_Response";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::GetMessageFields_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::GetMessageFields_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::GetMessageFields_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::GetMessageFields>()
{
  return "ros_bt_py_interfaces::srv::GetMessageFields";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::GetMessageFields>()
{
  return "ros_bt_py_interfaces/srv/GetMessageFields";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::GetMessageFields>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_bt_py_interfaces::srv::GetMessageFields_Request>::value &&
    has_fixed_size<ros_bt_py_interfaces::srv::GetMessageFields_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::GetMessageFields>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_bt_py_interfaces::srv::GetMessageFields_Request>::value &&
    has_bounded_size<ros_bt_py_interfaces::srv::GetMessageFields_Response>::value
  >
{
};

template<>
struct is_service<ros_bt_py_interfaces::srv::GetMessageFields>
  : std::true_type
{
};

template<>
struct is_service_request<ros_bt_py_interfaces::srv::GetMessageFields_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_bt_py_interfaces::srv::GetMessageFields_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_MESSAGE_FIELDS__TRAITS_HPP_
