// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/ControlTreeExecution.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__CONTROL_TREE_EXECUTION__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__CONTROL_TREE_EXECUTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/control_tree_execution__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_ControlTreeExecution_Request_tick_frequency_hz
{
public:
  explicit Init_ControlTreeExecution_Request_tick_frequency_hz(::ros_bt_py_interfaces::srv::ControlTreeExecution_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::ControlTreeExecution_Request tick_frequency_hz(::ros_bt_py_interfaces::srv::ControlTreeExecution_Request::_tick_frequency_hz_type arg)
  {
    msg_.tick_frequency_hz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::ControlTreeExecution_Request msg_;
};

class Init_ControlTreeExecution_Request_command
{
public:
  Init_ControlTreeExecution_Request_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlTreeExecution_Request_tick_frequency_hz command(::ros_bt_py_interfaces::srv::ControlTreeExecution_Request::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_ControlTreeExecution_Request_tick_frequency_hz(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::ControlTreeExecution_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::ControlTreeExecution_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_ControlTreeExecution_Request_command();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_ControlTreeExecution_Response_tree_state
{
public:
  explicit Init_ControlTreeExecution_Response_tree_state(::ros_bt_py_interfaces::srv::ControlTreeExecution_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::ControlTreeExecution_Response tree_state(::ros_bt_py_interfaces::srv::ControlTreeExecution_Response::_tree_state_type arg)
  {
    msg_.tree_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::ControlTreeExecution_Response msg_;
};

class Init_ControlTreeExecution_Response_error_message
{
public:
  explicit Init_ControlTreeExecution_Response_error_message(::ros_bt_py_interfaces::srv::ControlTreeExecution_Response & msg)
  : msg_(msg)
  {}
  Init_ControlTreeExecution_Response_tree_state error_message(::ros_bt_py_interfaces::srv::ControlTreeExecution_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_ControlTreeExecution_Response_tree_state(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::ControlTreeExecution_Response msg_;
};

class Init_ControlTreeExecution_Response_success
{
public:
  Init_ControlTreeExecution_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlTreeExecution_Response_error_message success(::ros_bt_py_interfaces::srv::ControlTreeExecution_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ControlTreeExecution_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::ControlTreeExecution_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::ControlTreeExecution_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_ControlTreeExecution_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__CONTROL_TREE_EXECUTION__BUILDER_HPP_
