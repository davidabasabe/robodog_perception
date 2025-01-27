// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/PrepareLocalImplementation.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__PREPARE_LOCAL_IMPLEMENTATION__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__PREPARE_LOCAL_IMPLEMENTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/prepare_local_implementation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_PrepareLocalImplementation_Request_interface
{
public:
  explicit Init_PrepareLocalImplementation_Request_interface(::ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request interface(::ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request::_interface_type arg)
  {
    msg_.interface = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request msg_;
};

class Init_PrepareLocalImplementation_Request_implementation_name
{
public:
  Init_PrepareLocalImplementation_Request_implementation_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrepareLocalImplementation_Request_interface implementation_name(::ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request::_implementation_name_type arg)
  {
    msg_.implementation_name = std::move(arg);
    return Init_PrepareLocalImplementation_Request_interface(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::PrepareLocalImplementation_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_PrepareLocalImplementation_Request_implementation_name();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_PrepareLocalImplementation_Response_implementation_subtree
{
public:
  explicit Init_PrepareLocalImplementation_Response_implementation_subtree(::ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response implementation_subtree(::ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response::_implementation_subtree_type arg)
  {
    msg_.implementation_subtree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response msg_;
};

class Init_PrepareLocalImplementation_Response_error_message
{
public:
  explicit Init_PrepareLocalImplementation_Response_error_message(::ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response & msg)
  : msg_(msg)
  {}
  Init_PrepareLocalImplementation_Response_implementation_subtree error_message(::ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_PrepareLocalImplementation_Response_implementation_subtree(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response msg_;
};

class Init_PrepareLocalImplementation_Response_success
{
public:
  Init_PrepareLocalImplementation_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PrepareLocalImplementation_Response_error_message success(::ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PrepareLocalImplementation_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::PrepareLocalImplementation_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_PrepareLocalImplementation_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__PREPARE_LOCAL_IMPLEMENTATION__BUILDER_HPP_
