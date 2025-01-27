// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/ReserveRemoteCapabilitySlot.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__RESERVE_REMOTE_CAPABILITY_SLOT__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__RESERVE_REMOTE_CAPABILITY_SLOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/reserve_remote_capability_slot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_ReserveRemoteCapabilitySlot_Request_reauction_threshold
{
public:
  explicit Init_ReserveRemoteCapabilitySlot_Request_reauction_threshold(::ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request reauction_threshold(::ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request::_reauction_threshold_type arg)
  {
    msg_.reauction_threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request msg_;
};

class Init_ReserveRemoteCapabilitySlot_Request_implementation_name
{
public:
  explicit Init_ReserveRemoteCapabilitySlot_Request_implementation_name(::ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request & msg)
  : msg_(msg)
  {}
  Init_ReserveRemoteCapabilitySlot_Request_reauction_threshold implementation_name(::ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request::_implementation_name_type arg)
  {
    msg_.implementation_name = std::move(arg);
    return Init_ReserveRemoteCapabilitySlot_Request_reauction_threshold(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request msg_;
};

class Init_ReserveRemoteCapabilitySlot_Request_remote_mission_control
{
public:
  Init_ReserveRemoteCapabilitySlot_Request_remote_mission_control()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReserveRemoteCapabilitySlot_Request_implementation_name remote_mission_control(::ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request::_remote_mission_control_type arg)
  {
    msg_.remote_mission_control = std::move(arg);
    return Init_ReserveRemoteCapabilitySlot_Request_implementation_name(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_ReserveRemoteCapabilitySlot_Request_remote_mission_control();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_ReserveRemoteCapabilitySlot_Response_error
{
public:
  explicit Init_ReserveRemoteCapabilitySlot_Response_error(::ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response error(::ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response msg_;
};

class Init_ReserveRemoteCapabilitySlot_Response_success
{
public:
  Init_ReserveRemoteCapabilitySlot_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReserveRemoteCapabilitySlot_Response_error success(::ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ReserveRemoteCapabilitySlot_Response_error(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::ReserveRemoteCapabilitySlot_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_ReserveRemoteCapabilitySlot_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__RESERVE_REMOTE_CAPABILITY_SLOT__BUILDER_HPP_
