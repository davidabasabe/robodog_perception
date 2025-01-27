// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/AddNodeAtIndex.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__ADD_NODE_AT_INDEX__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__ADD_NODE_AT_INDEX__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/add_node_at_index__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddNodeAtIndex_Request_new_child_index
{
public:
  explicit Init_AddNodeAtIndex_Request_new_child_index(::ros_bt_py_interfaces::srv::AddNodeAtIndex_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::AddNodeAtIndex_Request new_child_index(::ros_bt_py_interfaces::srv::AddNodeAtIndex_Request::_new_child_index_type arg)
  {
    msg_.new_child_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::AddNodeAtIndex_Request msg_;
};

class Init_AddNodeAtIndex_Request_allow_rename
{
public:
  explicit Init_AddNodeAtIndex_Request_allow_rename(::ros_bt_py_interfaces::srv::AddNodeAtIndex_Request & msg)
  : msg_(msg)
  {}
  Init_AddNodeAtIndex_Request_new_child_index allow_rename(::ros_bt_py_interfaces::srv::AddNodeAtIndex_Request::_allow_rename_type arg)
  {
    msg_.allow_rename = std::move(arg);
    return Init_AddNodeAtIndex_Request_new_child_index(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::AddNodeAtIndex_Request msg_;
};

class Init_AddNodeAtIndex_Request_node
{
public:
  explicit Init_AddNodeAtIndex_Request_node(::ros_bt_py_interfaces::srv::AddNodeAtIndex_Request & msg)
  : msg_(msg)
  {}
  Init_AddNodeAtIndex_Request_allow_rename node(::ros_bt_py_interfaces::srv::AddNodeAtIndex_Request::_node_type arg)
  {
    msg_.node = std::move(arg);
    return Init_AddNodeAtIndex_Request_allow_rename(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::AddNodeAtIndex_Request msg_;
};

class Init_AddNodeAtIndex_Request_parent_name
{
public:
  Init_AddNodeAtIndex_Request_parent_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddNodeAtIndex_Request_node parent_name(::ros_bt_py_interfaces::srv::AddNodeAtIndex_Request::_parent_name_type arg)
  {
    msg_.parent_name = std::move(arg);
    return Init_AddNodeAtIndex_Request_node(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::AddNodeAtIndex_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::AddNodeAtIndex_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_AddNodeAtIndex_Request_parent_name();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_AddNodeAtIndex_Response_error_message
{
public:
  explicit Init_AddNodeAtIndex_Response_error_message(::ros_bt_py_interfaces::srv::AddNodeAtIndex_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::AddNodeAtIndex_Response error_message(::ros_bt_py_interfaces::srv::AddNodeAtIndex_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::AddNodeAtIndex_Response msg_;
};

class Init_AddNodeAtIndex_Response_actual_node_name
{
public:
  explicit Init_AddNodeAtIndex_Response_actual_node_name(::ros_bt_py_interfaces::srv::AddNodeAtIndex_Response & msg)
  : msg_(msg)
  {}
  Init_AddNodeAtIndex_Response_error_message actual_node_name(::ros_bt_py_interfaces::srv::AddNodeAtIndex_Response::_actual_node_name_type arg)
  {
    msg_.actual_node_name = std::move(arg);
    return Init_AddNodeAtIndex_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::AddNodeAtIndex_Response msg_;
};

class Init_AddNodeAtIndex_Response_success
{
public:
  Init_AddNodeAtIndex_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AddNodeAtIndex_Response_actual_node_name success(::ros_bt_py_interfaces::srv::AddNodeAtIndex_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AddNodeAtIndex_Response_actual_node_name(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::AddNodeAtIndex_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::AddNodeAtIndex_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_AddNodeAtIndex_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__ADD_NODE_AT_INDEX__BUILDER_HPP_
