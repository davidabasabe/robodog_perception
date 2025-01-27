// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/GenerateSubtree.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GENERATE_SUBTREE__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GENERATE_SUBTREE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/generate_subtree__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_GenerateSubtree_Request_nodes
{
public:
  Init_GenerateSubtree_Request_nodes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::srv::GenerateSubtree_Request nodes(::ros_bt_py_interfaces::srv::GenerateSubtree_Request::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GenerateSubtree_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::GenerateSubtree_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_GenerateSubtree_Request_nodes();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_GenerateSubtree_Response_error_message
{
public:
  explicit Init_GenerateSubtree_Response_error_message(::ros_bt_py_interfaces::srv::GenerateSubtree_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::GenerateSubtree_Response error_message(::ros_bt_py_interfaces::srv::GenerateSubtree_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GenerateSubtree_Response msg_;
};

class Init_GenerateSubtree_Response_success
{
public:
  explicit Init_GenerateSubtree_Response_success(::ros_bt_py_interfaces::srv::GenerateSubtree_Response & msg)
  : msg_(msg)
  {}
  Init_GenerateSubtree_Response_error_message success(::ros_bt_py_interfaces::srv::GenerateSubtree_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GenerateSubtree_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GenerateSubtree_Response msg_;
};

class Init_GenerateSubtree_Response_tree
{
public:
  Init_GenerateSubtree_Response_tree()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GenerateSubtree_Response_success tree(::ros_bt_py_interfaces::srv::GenerateSubtree_Response::_tree_type arg)
  {
    msg_.tree = std::move(arg);
    return Init_GenerateSubtree_Response_success(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GenerateSubtree_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::GenerateSubtree_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_GenerateSubtree_Response_tree();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GENERATE_SUBTREE__BUILDER_HPP_
