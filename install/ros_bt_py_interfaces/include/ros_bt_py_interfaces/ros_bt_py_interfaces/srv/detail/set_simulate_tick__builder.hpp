// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/SetSimulateTick.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__SET_SIMULATE_TICK__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__SET_SIMULATE_TICK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/set_simulate_tick__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetSimulateTick_Request_succeed_always
{
public:
  explicit Init_SetSimulateTick_Request_succeed_always(::ros_bt_py_interfaces::srv::SetSimulateTick_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::SetSimulateTick_Request succeed_always(::ros_bt_py_interfaces::srv::SetSimulateTick_Request::_succeed_always_type arg)
  {
    msg_.succeed_always = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::SetSimulateTick_Request msg_;
};

class Init_SetSimulateTick_Request_simulate_tick
{
public:
  Init_SetSimulateTick_Request_simulate_tick()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSimulateTick_Request_succeed_always simulate_tick(::ros_bt_py_interfaces::srv::SetSimulateTick_Request::_simulate_tick_type arg)
  {
    msg_.simulate_tick = std::move(arg);
    return Init_SetSimulateTick_Request_succeed_always(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::SetSimulateTick_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::SetSimulateTick_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_SetSimulateTick_Request_simulate_tick();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetSimulateTick_Response_error_message
{
public:
  explicit Init_SetSimulateTick_Response_error_message(::ros_bt_py_interfaces::srv::SetSimulateTick_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::SetSimulateTick_Response error_message(::ros_bt_py_interfaces::srv::SetSimulateTick_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::SetSimulateTick_Response msg_;
};

class Init_SetSimulateTick_Response_success
{
public:
  Init_SetSimulateTick_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSimulateTick_Response_error_message success(::ros_bt_py_interfaces::srv::SetSimulateTick_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetSimulateTick_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::SetSimulateTick_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::SetSimulateTick_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_SetSimulateTick_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__SET_SIMULATE_TICK__BUILDER_HPP_
