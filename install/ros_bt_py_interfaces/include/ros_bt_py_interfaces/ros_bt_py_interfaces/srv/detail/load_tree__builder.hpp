// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/LoadTree.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__LOAD_TREE__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__LOAD_TREE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/load_tree__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_LoadTree_Request_permissive
{
public:
  explicit Init_LoadTree_Request_permissive(::ros_bt_py_interfaces::srv::LoadTree_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::LoadTree_Request permissive(::ros_bt_py_interfaces::srv::LoadTree_Request::_permissive_type arg)
  {
    msg_.permissive = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::LoadTree_Request msg_;
};

class Init_LoadTree_Request_tree
{
public:
  Init_LoadTree_Request_tree()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadTree_Request_permissive tree(::ros_bt_py_interfaces::srv::LoadTree_Request::_tree_type arg)
  {
    msg_.tree = std::move(arg);
    return Init_LoadTree_Request_permissive(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::LoadTree_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::LoadTree_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_LoadTree_Request_tree();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_LoadTree_Response_error_message
{
public:
  explicit Init_LoadTree_Response_error_message(::ros_bt_py_interfaces::srv::LoadTree_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::LoadTree_Response error_message(::ros_bt_py_interfaces::srv::LoadTree_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::LoadTree_Response msg_;
};

class Init_LoadTree_Response_success
{
public:
  Init_LoadTree_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadTree_Response_error_message success(::ros_bt_py_interfaces::srv::LoadTree_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_LoadTree_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::LoadTree_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::LoadTree_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_LoadTree_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__LOAD_TREE__BUILDER_HPP_
