// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/DocumentedNode.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__DOCUMENTED_NODE__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__DOCUMENTED_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/documented_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_DocumentedNode_state
{
public:
  explicit Init_DocumentedNode_state(::ros_bt_py_interfaces::msg::DocumentedNode & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::msg::DocumentedNode state(::ros_bt_py_interfaces::msg::DocumentedNode::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::DocumentedNode msg_;
};

class Init_DocumentedNode_tags
{
public:
  explicit Init_DocumentedNode_tags(::ros_bt_py_interfaces::msg::DocumentedNode & msg)
  : msg_(msg)
  {}
  Init_DocumentedNode_state tags(::ros_bt_py_interfaces::msg::DocumentedNode::_tags_type arg)
  {
    msg_.tags = std::move(arg);
    return Init_DocumentedNode_state(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::DocumentedNode msg_;
};

class Init_DocumentedNode_doc
{
public:
  explicit Init_DocumentedNode_doc(::ros_bt_py_interfaces::msg::DocumentedNode & msg)
  : msg_(msg)
  {}
  Init_DocumentedNode_tags doc(::ros_bt_py_interfaces::msg::DocumentedNode::_doc_type arg)
  {
    msg_.doc = std::move(arg);
    return Init_DocumentedNode_tags(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::DocumentedNode msg_;
};

class Init_DocumentedNode_outputs
{
public:
  explicit Init_DocumentedNode_outputs(::ros_bt_py_interfaces::msg::DocumentedNode & msg)
  : msg_(msg)
  {}
  Init_DocumentedNode_doc outputs(::ros_bt_py_interfaces::msg::DocumentedNode::_outputs_type arg)
  {
    msg_.outputs = std::move(arg);
    return Init_DocumentedNode_doc(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::DocumentedNode msg_;
};

class Init_DocumentedNode_inputs
{
public:
  explicit Init_DocumentedNode_inputs(::ros_bt_py_interfaces::msg::DocumentedNode & msg)
  : msg_(msg)
  {}
  Init_DocumentedNode_outputs inputs(::ros_bt_py_interfaces::msg::DocumentedNode::_inputs_type arg)
  {
    msg_.inputs = std::move(arg);
    return Init_DocumentedNode_outputs(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::DocumentedNode msg_;
};

class Init_DocumentedNode_options
{
public:
  explicit Init_DocumentedNode_options(::ros_bt_py_interfaces::msg::DocumentedNode & msg)
  : msg_(msg)
  {}
  Init_DocumentedNode_inputs options(::ros_bt_py_interfaces::msg::DocumentedNode::_options_type arg)
  {
    msg_.options = std::move(arg);
    return Init_DocumentedNode_inputs(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::DocumentedNode msg_;
};

class Init_DocumentedNode_child_names
{
public:
  explicit Init_DocumentedNode_child_names(::ros_bt_py_interfaces::msg::DocumentedNode & msg)
  : msg_(msg)
  {}
  Init_DocumentedNode_options child_names(::ros_bt_py_interfaces::msg::DocumentedNode::_child_names_type arg)
  {
    msg_.child_names = std::move(arg);
    return Init_DocumentedNode_options(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::DocumentedNode msg_;
};

class Init_DocumentedNode_name
{
public:
  explicit Init_DocumentedNode_name(::ros_bt_py_interfaces::msg::DocumentedNode & msg)
  : msg_(msg)
  {}
  Init_DocumentedNode_child_names name(::ros_bt_py_interfaces::msg::DocumentedNode::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_DocumentedNode_child_names(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::DocumentedNode msg_;
};

class Init_DocumentedNode_max_children
{
public:
  explicit Init_DocumentedNode_max_children(::ros_bt_py_interfaces::msg::DocumentedNode & msg)
  : msg_(msg)
  {}
  Init_DocumentedNode_name max_children(::ros_bt_py_interfaces::msg::DocumentedNode::_max_children_type arg)
  {
    msg_.max_children = std::move(arg);
    return Init_DocumentedNode_name(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::DocumentedNode msg_;
};

class Init_DocumentedNode_version
{
public:
  explicit Init_DocumentedNode_version(::ros_bt_py_interfaces::msg::DocumentedNode & msg)
  : msg_(msg)
  {}
  Init_DocumentedNode_max_children version(::ros_bt_py_interfaces::msg::DocumentedNode::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_DocumentedNode_max_children(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::DocumentedNode msg_;
};

class Init_DocumentedNode_node_class
{
public:
  explicit Init_DocumentedNode_node_class(::ros_bt_py_interfaces::msg::DocumentedNode & msg)
  : msg_(msg)
  {}
  Init_DocumentedNode_version node_class(::ros_bt_py_interfaces::msg::DocumentedNode::_node_class_type arg)
  {
    msg_.node_class = std::move(arg);
    return Init_DocumentedNode_version(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::DocumentedNode msg_;
};

class Init_DocumentedNode_module
{
public:
  Init_DocumentedNode_module()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DocumentedNode_node_class module(::ros_bt_py_interfaces::msg::DocumentedNode::_module_type arg)
  {
    msg_.module = std::move(arg);
    return Init_DocumentedNode_node_class(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::DocumentedNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::DocumentedNode>()
{
  return ros_bt_py_interfaces::msg::builder::Init_DocumentedNode_module();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__DOCUMENTED_NODE__BUILDER_HPP_
