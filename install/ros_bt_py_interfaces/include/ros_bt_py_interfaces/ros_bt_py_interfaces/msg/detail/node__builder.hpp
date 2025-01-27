// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_Node_state
{
public:
  explicit Init_Node_state(::ros_bt_py_interfaces::msg::Node & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::msg::Node state(::ros_bt_py_interfaces::msg::Node::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Node msg_;
};

class Init_Node_outputs
{
public:
  explicit Init_Node_outputs(::ros_bt_py_interfaces::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_state outputs(::ros_bt_py_interfaces::msg::Node::_outputs_type arg)
  {
    msg_.outputs = std::move(arg);
    return Init_Node_state(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Node msg_;
};

class Init_Node_inputs
{
public:
  explicit Init_Node_inputs(::ros_bt_py_interfaces::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_outputs inputs(::ros_bt_py_interfaces::msg::Node::_inputs_type arg)
  {
    msg_.inputs = std::move(arg);
    return Init_Node_outputs(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Node msg_;
};

class Init_Node_options
{
public:
  explicit Init_Node_options(::ros_bt_py_interfaces::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_inputs options(::ros_bt_py_interfaces::msg::Node::_options_type arg)
  {
    msg_.options = std::move(arg);
    return Init_Node_inputs(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Node msg_;
};

class Init_Node_child_names
{
public:
  explicit Init_Node_child_names(::ros_bt_py_interfaces::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_options child_names(::ros_bt_py_interfaces::msg::Node::_child_names_type arg)
  {
    msg_.child_names = std::move(arg);
    return Init_Node_options(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Node msg_;
};

class Init_Node_name
{
public:
  explicit Init_Node_name(::ros_bt_py_interfaces::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_child_names name(::ros_bt_py_interfaces::msg::Node::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Node_child_names(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Node msg_;
};

class Init_Node_max_children
{
public:
  explicit Init_Node_max_children(::ros_bt_py_interfaces::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_name max_children(::ros_bt_py_interfaces::msg::Node::_max_children_type arg)
  {
    msg_.max_children = std::move(arg);
    return Init_Node_name(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Node msg_;
};

class Init_Node_version
{
public:
  explicit Init_Node_version(::ros_bt_py_interfaces::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_max_children version(::ros_bt_py_interfaces::msg::Node::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_Node_max_children(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Node msg_;
};

class Init_Node_node_class
{
public:
  explicit Init_Node_node_class(::ros_bt_py_interfaces::msg::Node & msg)
  : msg_(msg)
  {}
  Init_Node_version node_class(::ros_bt_py_interfaces::msg::Node::_node_class_type arg)
  {
    msg_.node_class = std::move(arg);
    return Init_Node_version(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Node msg_;
};

class Init_Node_module
{
public:
  Init_Node_module()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Node_node_class module(::ros_bt_py_interfaces::msg::Node::_module_type arg)
  {
    msg_.module = std::move(arg);
    return Init_Node_node_class(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::Node msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::Node>()
{
  return ros_bt_py_interfaces::msg::builder::Init_Node_module();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE__BUILDER_HPP_
