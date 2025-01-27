// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_bt_py_interfaces:srv/GetStorageFolders.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_STORAGE_FOLDERS__TRAITS_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_STORAGE_FOLDERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ros_bt_py_interfaces/srv/detail/get_storage_folders__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetStorageFolders_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetStorageFolders_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetStorageFolders_Request & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::srv::GetStorageFolders_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::GetStorageFolders_Request & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::GetStorageFolders_Request>()
{
  return "ros_bt_py_interfaces::srv::GetStorageFolders_Request";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::GetStorageFolders_Request>()
{
  return "ros_bt_py_interfaces/srv/GetStorageFolders_Request";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::GetStorageFolders_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::GetStorageFolders_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::GetStorageFolders_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ros_bt_py_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetStorageFolders_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: storage_folders
  {
    if (msg.storage_folders.size() == 0) {
      out << "storage_folders: []";
    } else {
      out << "storage_folders: [";
      size_t pending_items = msg.storage_folders.size();
      for (auto item : msg.storage_folders) {
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
  const GetStorageFolders_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: storage_folders
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.storage_folders.size() == 0) {
      out << "storage_folders: []\n";
    } else {
      out << "storage_folders:\n";
      for (auto item : msg.storage_folders) {
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

inline std::string to_yaml(const GetStorageFolders_Response & msg, bool use_flow_style = false)
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
  const ros_bt_py_interfaces::srv::GetStorageFolders_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ros_bt_py_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ros_bt_py_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const ros_bt_py_interfaces::srv::GetStorageFolders_Response & msg)
{
  return ros_bt_py_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::GetStorageFolders_Response>()
{
  return "ros_bt_py_interfaces::srv::GetStorageFolders_Response";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::GetStorageFolders_Response>()
{
  return "ros_bt_py_interfaces/srv/GetStorageFolders_Response";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::GetStorageFolders_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::GetStorageFolders_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ros_bt_py_interfaces::srv::GetStorageFolders_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_bt_py_interfaces::srv::GetStorageFolders>()
{
  return "ros_bt_py_interfaces::srv::GetStorageFolders";
}

template<>
inline const char * name<ros_bt_py_interfaces::srv::GetStorageFolders>()
{
  return "ros_bt_py_interfaces/srv/GetStorageFolders";
}

template<>
struct has_fixed_size<ros_bt_py_interfaces::srv::GetStorageFolders>
  : std::integral_constant<
    bool,
    has_fixed_size<ros_bt_py_interfaces::srv::GetStorageFolders_Request>::value &&
    has_fixed_size<ros_bt_py_interfaces::srv::GetStorageFolders_Response>::value
  >
{
};

template<>
struct has_bounded_size<ros_bt_py_interfaces::srv::GetStorageFolders>
  : std::integral_constant<
    bool,
    has_bounded_size<ros_bt_py_interfaces::srv::GetStorageFolders_Request>::value &&
    has_bounded_size<ros_bt_py_interfaces::srv::GetStorageFolders_Response>::value
  >
{
};

template<>
struct is_service<ros_bt_py_interfaces::srv::GetStorageFolders>
  : std::true_type
{
};

template<>
struct is_service_request<ros_bt_py_interfaces::srv::GetStorageFolders_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ros_bt_py_interfaces::srv::GetStorageFolders_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_STORAGE_FOLDERS__TRAITS_HPP_
