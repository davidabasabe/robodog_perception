// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:msg/NodeDataLocation.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_LOCATION__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/msg/detail/node_data_location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace msg
{

namespace builder
{

class Init_NodeDataLocation_data_key
{
public:
  explicit Init_NodeDataLocation_data_key(::ros_bt_py_interfaces::msg::NodeDataLocation & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::msg::NodeDataLocation data_key(::ros_bt_py_interfaces::msg::NodeDataLocation::_data_key_type arg)
  {
    msg_.data_key = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::NodeDataLocation msg_;
};

class Init_NodeDataLocation_data_kind
{
public:
  explicit Init_NodeDataLocation_data_kind(::ros_bt_py_interfaces::msg::NodeDataLocation & msg)
  : msg_(msg)
  {}
  Init_NodeDataLocation_data_key data_kind(::ros_bt_py_interfaces::msg::NodeDataLocation::_data_kind_type arg)
  {
    msg_.data_kind = std::move(arg);
    return Init_NodeDataLocation_data_key(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::NodeDataLocation msg_;
};

class Init_NodeDataLocation_node_name
{
public:
  Init_NodeDataLocation_node_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeDataLocation_data_kind node_name(::ros_bt_py_interfaces::msg::NodeDataLocation::_node_name_type arg)
  {
    msg_.node_name = std::move(arg);
    return Init_NodeDataLocation_data_kind(msg_);
  }

private:
  ::ros_bt_py_interfaces::msg::NodeDataLocation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::msg::NodeDataLocation>()
{
  return ros_bt_py_interfaces::msg::builder::Init_NodeDataLocation_node_name();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_LOCATION__BUILDER_HPP_
