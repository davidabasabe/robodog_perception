// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/DeleteCapabilityImplementation.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__DELETE_CAPABILITY_IMPLEMENTATION__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__DELETE_CAPABILITY_IMPLEMENTATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/delete_capability_implementation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_DeleteCapabilityImplementation_Request_implementation_name
{
public:
  explicit Init_DeleteCapabilityImplementation_Request_implementation_name(::ros_bt_py_interfaces::srv::DeleteCapabilityImplementation_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::DeleteCapabilityImplementation_Request implementation_name(::ros_bt_py_interfaces::srv::DeleteCapabilityImplementation_Request::_implementation_name_type arg)
  {
    msg_.implementation_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::DeleteCapabilityImplementation_Request msg_;
};

class Init_DeleteCapabilityImplementation_Request_interface
{
public:
  Init_DeleteCapabilityImplementation_Request_interface()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeleteCapabilityImplementation_Request_implementation_name interface(::ros_bt_py_interfaces::srv::DeleteCapabilityImplementation_Request::_interface_type arg)
  {
    msg_.interface = std::move(arg);
    return Init_DeleteCapabilityImplementation_Request_implementation_name(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::DeleteCapabilityImplementation_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::DeleteCapabilityImplementation_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_DeleteCapabilityImplementation_Request_interface();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_DeleteCapabilityImplementation_Response_error_message
{
public:
  explicit Init_DeleteCapabilityImplementation_Response_error_message(::ros_bt_py_interfaces::srv::DeleteCapabilityImplementation_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::DeleteCapabilityImplementation_Response error_message(::ros_bt_py_interfaces::srv::DeleteCapabilityImplementation_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::DeleteCapabilityImplementation_Response msg_;
};

class Init_DeleteCapabilityImplementation_Response_success
{
public:
  Init_DeleteCapabilityImplementation_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeleteCapabilityImplementation_Response_error_message success(::ros_bt_py_interfaces::srv::DeleteCapabilityImplementation_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DeleteCapabilityImplementation_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::DeleteCapabilityImplementation_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::DeleteCapabilityImplementation_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_DeleteCapabilityImplementation_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__DELETE_CAPABILITY_IMPLEMENTATION__BUILDER_HPP_
