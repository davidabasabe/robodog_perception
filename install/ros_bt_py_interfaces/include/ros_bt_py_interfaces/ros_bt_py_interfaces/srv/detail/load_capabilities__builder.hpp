// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/LoadCapabilities.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__LOAD_CAPABILITIES__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__LOAD_CAPABILITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/load_capabilities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_LoadCapabilities_Request_package
{
public:
  Init_LoadCapabilities_Request_package()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::srv::LoadCapabilities_Request package(::ros_bt_py_interfaces::srv::LoadCapabilities_Request::_package_type arg)
  {
    msg_.package = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::LoadCapabilities_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::LoadCapabilities_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_LoadCapabilities_Request_package();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_LoadCapabilities_Response_interfaces
{
public:
  explicit Init_LoadCapabilities_Response_interfaces(::ros_bt_py_interfaces::srv::LoadCapabilities_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::LoadCapabilities_Response interfaces(::ros_bt_py_interfaces::srv::LoadCapabilities_Response::_interfaces_type arg)
  {
    msg_.interfaces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::LoadCapabilities_Response msg_;
};

class Init_LoadCapabilities_Response_error_message
{
public:
  explicit Init_LoadCapabilities_Response_error_message(::ros_bt_py_interfaces::srv::LoadCapabilities_Response & msg)
  : msg_(msg)
  {}
  Init_LoadCapabilities_Response_interfaces error_message(::ros_bt_py_interfaces::srv::LoadCapabilities_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_LoadCapabilities_Response_interfaces(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::LoadCapabilities_Response msg_;
};

class Init_LoadCapabilities_Response_success
{
public:
  Init_LoadCapabilities_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadCapabilities_Response_error_message success(::ros_bt_py_interfaces::srv::LoadCapabilities_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_LoadCapabilities_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::LoadCapabilities_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::LoadCapabilities_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_LoadCapabilities_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__LOAD_CAPABILITIES__BUILDER_HPP_
