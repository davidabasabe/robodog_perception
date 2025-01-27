// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/NodeData.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/node_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_NodeData_serialized_type
{
public:
  explicit Init_NodeData_serialized_type(::ros_bt_py_interfaces::msg::NodeData & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::msg::NodeData serialized_type(::ros_bt_py_interfaces::msg::NodeData::_serialized_type_type arg)
  {
    msg_.serialized_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::NodeData msg_;
};

class Init_NodeData_serialized_value
{
public:
  explicit Init_NodeData_serialized_value(::ros_bt_py_interfaces::msg::NodeData & msg)
  : msg_(msg)
  {}
  Init_NodeData_serialized_type serialized_value(::ros_bt_py_interfaces::msg::NodeData::_serialized_value_type arg)
  {
    msg_.serialized_value = std::move(arg);
    return Init_NodeData_serialized_type(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::NodeData msg_;
};

class Init_NodeData_key
{
public:
  Init_NodeData_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeData_serialized_value key(::ros_bt_py_interfaces::msg::NodeData::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_NodeData_serialized_value(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::NodeData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::NodeData>()
{
  return ros_bt_py_interfaces::msg::builder::Init_NodeData_key();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA__BUILDER_HPP_
