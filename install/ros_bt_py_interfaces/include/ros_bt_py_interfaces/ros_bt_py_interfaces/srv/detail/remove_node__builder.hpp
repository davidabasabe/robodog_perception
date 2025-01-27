// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/RemoveNode.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__REMOVE_NODE__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__REMOVE_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/remove_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_RemoveNode_Request_remove_children
{
public:
  explicit Init_RemoveNode_Request_remove_children(::ros_bt_py_interfaces::srv::RemoveNode_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::RemoveNode_Request remove_children(::ros_bt_py_interfaces::srv::RemoveNode_Request::_remove_children_type arg)
  {
    msg_.remove_children = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RemoveNode_Request msg_;
};

class Init_RemoveNode_Request_node_name
{
public:
  Init_RemoveNode_Request_node_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RemoveNode_Request_remove_children node_name(::ros_bt_py_interfaces::srv::RemoveNode_Request::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_RemoveNode_Request_remove_children(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RemoveNode_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::RemoveNode_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_RemoveNode_Request_node_name();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_RemoveNode_Response_error_message
{
public:
  explicit Init_RemoveNode_Response_error_message(::ros_bt_py_interfaces::srv::RemoveNode_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::RemoveNode_Response error_message(::ros_bt_py_interfaces::srv::RemoveNode_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RemoveNode_Response msg_;
};

class Init_RemoveNode_Response_success
{
public:
  Init_RemoveNode_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RemoveNode_Response_error_message success(::ros_bt_py_interfaces::srv::RemoveNode_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RemoveNode_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RemoveNode_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::RemoveNode_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_RemoveNode_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__REMOVE_NODE__BUILDER_HPP_
