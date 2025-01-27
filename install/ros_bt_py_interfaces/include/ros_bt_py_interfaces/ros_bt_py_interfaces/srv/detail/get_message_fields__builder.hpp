// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/GetMessageFields.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_MESSAGE_FIELDS__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_MESSAGE_FIELDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/get_message_fields__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetMessageFields_Request_type
{
public:
  explicit Init_GetMessageFields_Request_type(::ros_bt_py_interfaces::srv::GetMessageFields_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::GetMessageFields_Request type(::ros_bt_py_interfaces::srv::GetMessageFields_Request::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetMessageFields_Request msg_;
};

class Init_GetMessageFields_Request_action
{
public:
  explicit Init_GetMessageFields_Request_action(::ros_bt_py_interfaces::srv::GetMessageFields_Request & msg)
  : msg_(msg)
  {}
  Init_GetMessageFields_Request_type action(::ros_bt_py_interfaces::srv::GetMessageFields_Request::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_GetMessageFields_Request_type(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetMessageFields_Request msg_;
};

class Init_GetMessageFields_Request_service
{
public:
  explicit Init_GetMessageFields_Request_service(::ros_bt_py_interfaces::srv::GetMessageFields_Request & msg)
  : msg_(msg)
  {}
  Init_GetMessageFields_Request_action service(::ros_bt_py_interfaces::srv::GetMessageFields_Request::_service_type arg)
  {
    msg_.service = std::move(arg);
    return Init_GetMessageFields_Request_action(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetMessageFields_Request msg_;
};

class Init_GetMessageFields_Request_message_type
{
public:
  Init_GetMessageFields_Request_message_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMessageFields_Request_service message_type(::ros_bt_py_interfaces::srv::GetMessageFields_Request::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_GetMessageFields_Request_service(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetMessageFields_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::GetMessageFields_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_GetMessageFields_Request_message_type();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetMessageFields_Response_error_message
{
public:
  explicit Init_GetMessageFields_Response_error_message(::ros_bt_py_interfaces::srv::GetMessageFields_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::GetMessageFields_Response error_message(::ros_bt_py_interfaces::srv::GetMessageFields_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetMessageFields_Response msg_;
};

class Init_GetMessageFields_Response_success
{
public:
  explicit Init_GetMessageFields_Response_success(::ros_bt_py_interfaces::srv::GetMessageFields_Response & msg)
  : msg_(msg)
  {}
  Init_GetMessageFields_Response_error_message success(::ros_bt_py_interfaces::srv::GetMessageFields_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetMessageFields_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetMessageFields_Response msg_;
};

class Init_GetMessageFields_Response_field_names
{
public:
  explicit Init_GetMessageFields_Response_field_names(::ros_bt_py_interfaces::srv::GetMessageFields_Response & msg)
  : msg_(msg)
  {}
  Init_GetMessageFields_Response_success field_names(::ros_bt_py_interfaces::srv::GetMessageFields_Response::_field_names_type arg)
  {
    msg_.field_names = std::move(arg);
    return Init_GetMessageFields_Response_success(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetMessageFields_Response msg_;
};

class Init_GetMessageFields_Response_fields
{
public:
  Init_GetMessageFields_Response_fields()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetMessageFields_Response_field_names fields(::ros_bt_py_interfaces::srv::GetMessageFields_Response::_fields_type arg)
  {
    msg_.fields = std::move(arg);
    return Init_GetMessageFields_Response_field_names(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetMessageFields_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::GetMessageFields_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_GetMessageFields_Response_fields();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_MESSAGE_FIELDS__BUILDER_HPP_
