// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/CheckPreconditionStatus.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__CHECK_PRECONDITION_STATUS__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__CHECK_PRECONDITION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/check_precondition_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckPreconditionStatus_Request_interface
{
public:
  Init_CheckPreconditionStatus_Request_interface()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request interface(::ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request::_interface_type arg)
  {
    msg_.interface = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::CheckPreconditionStatus_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_CheckPreconditionStatus_Request_interface();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_CheckPreconditionStatus_Response_available
{
public:
  Init_CheckPreconditionStatus_Response_available()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response available(::ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response::_available_type arg)
  {
    msg_.available = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::CheckPreconditionStatus_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_CheckPreconditionStatus_Response_available();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__CHECK_PRECONDITION_STATUS__BUILDER_HPP_
