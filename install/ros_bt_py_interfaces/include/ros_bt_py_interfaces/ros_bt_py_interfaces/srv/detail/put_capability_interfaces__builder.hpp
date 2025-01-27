// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/PutCapabilityInterfaces.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__PUT_CAPABILITY_INTERFACES__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__PUT_CAPABILITY_INTERFACES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/put_capability_interfaces__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_PutCapabilityInterfaces_Request_capabilities
{
public:
  Init_PutCapabilityInterfaces_Request_capabilities()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request capabilities(::ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request::_capabilities_type arg)
  {
    msg_.capabilities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_PutCapabilityInterfaces_Request_capabilities();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_PutCapabilityInterfaces_Response_error_message
{
public:
  explicit Init_PutCapabilityInterfaces_Response_error_message(::ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response error_message(::ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response msg_;
};

class Init_PutCapabilityInterfaces_Response_success
{
public:
  Init_PutCapabilityInterfaces_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PutCapabilityInterfaces_Response_error_message success(::ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PutCapabilityInterfaces_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::PutCapabilityInterfaces_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_PutCapabilityInterfaces_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__PUT_CAPABILITY_INTERFACES__BUILDER_HPP_
