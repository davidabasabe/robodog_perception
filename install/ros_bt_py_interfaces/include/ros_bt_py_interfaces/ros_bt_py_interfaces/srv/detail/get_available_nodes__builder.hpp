// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/GetAvailableNodes.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_NODES__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_NODES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/get_available_nodes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetAvailableNodes_Request_node_modules
{
public:
  Init_GetAvailableNodes_Request_node_modules()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::srv::GetAvailableNodes_Request node_modules(::ros_bt_py_interfaces::srv::GetAvailableNodes_Request::_node_modules_type arg)
  {
    msg_.node_modules = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetAvailableNodes_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::GetAvailableNodes_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_GetAvailableNodes_Request_node_modules();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetAvailableNodes_Response_error_message
{
public:
  explicit Init_GetAvailableNodes_Response_error_message(::ros_bt_py_interfaces::srv::GetAvailableNodes_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::GetAvailableNodes_Response error_message(::ros_bt_py_interfaces::srv::GetAvailableNodes_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetAvailableNodes_Response msg_;
};

class Init_GetAvailableNodes_Response_success
{
public:
  explicit Init_GetAvailableNodes_Response_success(::ros_bt_py_interfaces::srv::GetAvailableNodes_Response & msg)
  : msg_(msg)
  {}
  Init_GetAvailableNodes_Response_error_message success(::ros_bt_py_interfaces::srv::GetAvailableNodes_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetAvailableNodes_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetAvailableNodes_Response msg_;
};

class Init_GetAvailableNodes_Response_available_nodes
{
public:
  Init_GetAvailableNodes_Response_available_nodes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAvailableNodes_Response_success available_nodes(::ros_bt_py_interfaces::srv::GetAvailableNodes_Response::_available_nodes_type arg)
  {
    msg_.available_nodes = std::move(arg);
    return Init_GetAvailableNodes_Response_success(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetAvailableNodes_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::GetAvailableNodes_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_GetAvailableNodes_Response_available_nodes();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_AVAILABLE_NODES__BUILDER_HPP_
