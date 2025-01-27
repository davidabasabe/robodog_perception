// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/GetSubtree.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_SUBTREE__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_SUBTREE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/get_subtree__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetSubtree_Request_subtree_root_name
{
public:
  Init_GetSubtree_Request_subtree_root_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::srv::GetSubtree_Request subtree_root_name(::ros_bt_py_interfaces::srv::GetSubtree_Request::_subtree_root_name_type arg)
  {
    msg_.subtree_root_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetSubtree_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::GetSubtree_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_GetSubtree_Request_subtree_root_name();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetSubtree_Response_subtree
{
public:
  explicit Init_GetSubtree_Response_subtree(::ros_bt_py_interfaces::srv::GetSubtree_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::GetSubtree_Response subtree(::ros_bt_py_interfaces::srv::GetSubtree_Response::_subtree_type arg)
  {
    msg_.subtree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetSubtree_Response msg_;
};

class Init_GetSubtree_Response_error_message
{
public:
  explicit Init_GetSubtree_Response_error_message(::ros_bt_py_interfaces::srv::GetSubtree_Response & msg)
  : msg_(msg)
  {}
  Init_GetSubtree_Response_subtree error_message(::ros_bt_py_interfaces::srv::GetSubtree_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_GetSubtree_Response_subtree(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetSubtree_Response msg_;
};

class Init_GetSubtree_Response_success
{
public:
  Init_GetSubtree_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetSubtree_Response_error_message success(::ros_bt_py_interfaces::srv::GetSubtree_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetSubtree_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetSubtree_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::GetSubtree_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_GetSubtree_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_SUBTREE__BUILDER_HPP_
