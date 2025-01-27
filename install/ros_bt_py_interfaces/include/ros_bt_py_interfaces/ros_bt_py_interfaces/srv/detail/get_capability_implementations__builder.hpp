// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/GetCapabilityImplementations.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_CAPABILITY_IMPLEMENTATIONS__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_CAPABILITY_IMPLEMENTATIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/get_capability_implementations__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetCapabilityImplementations_Request_interface
{
public:
  Init_GetCapabilityImplementations_Request_interface()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::srv::GetCapabilityImplementations_Request interface(::ros_bt_py_interfaces::srv::GetCapabilityImplementations_Request::_interface_type arg)
  {
    msg_.interface = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetCapabilityImplementations_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::GetCapabilityImplementations_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_GetCapabilityImplementations_Request_interface();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetCapabilityImplementations_Response_error_message
{
public:
  explicit Init_GetCapabilityImplementations_Response_error_message(::ros_bt_py_interfaces::srv::GetCapabilityImplementations_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::GetCapabilityImplementations_Response error_message(::ros_bt_py_interfaces::srv::GetCapabilityImplementations_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetCapabilityImplementations_Response msg_;
};

class Init_GetCapabilityImplementations_Response_success
{
public:
  explicit Init_GetCapabilityImplementations_Response_success(::ros_bt_py_interfaces::srv::GetCapabilityImplementations_Response & msg)
  : msg_(msg)
  {}
  Init_GetCapabilityImplementations_Response_error_message success(::ros_bt_py_interfaces::srv::GetCapabilityImplementations_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetCapabilityImplementations_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetCapabilityImplementations_Response msg_;
};

class Init_GetCapabilityImplementations_Response_implementations
{
public:
  Init_GetCapabilityImplementations_Response_implementations()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetCapabilityImplementations_Response_success implementations(::ros_bt_py_interfaces::srv::GetCapabilityImplementations_Response::_implementations_type arg)
  {
    msg_.implementations = std::move(arg);
    return Init_GetCapabilityImplementations_Response_success(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetCapabilityImplementations_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::GetCapabilityImplementations_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_GetCapabilityImplementations_Response_implementations();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_CAPABILITY_IMPLEMENTATIONS__BUILDER_HPP_
