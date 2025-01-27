// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/RunRemoteCapabilitySlot.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__RUN_REMOTE_CAPABILITY_SLOT__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__RUN_REMOTE_CAPABILITY_SLOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/run_remote_capability_slot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_RunRemoteCapabilitySlot_Request_node_id
{
public:
  explicit Init_RunRemoteCapabilitySlot_Request_node_id(::ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request node_id(::ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request msg_;
};

class Init_RunRemoteCapabilitySlot_Request_implementation_tree
{
public:
  explicit Init_RunRemoteCapabilitySlot_Request_implementation_tree(::ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request & msg)
  : msg_(msg)
  {}
  Init_RunRemoteCapabilitySlot_Request_node_id implementation_tree(::ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request::_implementation_tree_type arg)
  {
    msg_.implementation_tree = std::move(arg);
    return Init_RunRemoteCapabilitySlot_Request_node_id(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request msg_;
};

class Init_RunRemoteCapabilitySlot_Request_interface
{
public:
  Init_RunRemoteCapabilitySlot_Request_interface()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunRemoteCapabilitySlot_Request_implementation_tree interface(::ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request::_interface_type arg)
  {
    msg_.interface = std::move(arg);
    return Init_RunRemoteCapabilitySlot_Request_implementation_tree(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_RunRemoteCapabilitySlot_Request_interface();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_RunRemoteCapabilitySlot_Response_error_message
{
public:
  explicit Init_RunRemoteCapabilitySlot_Response_error_message(::ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response error_message(::ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response msg_;
};

class Init_RunRemoteCapabilitySlot_Response_success
{
public:
  Init_RunRemoteCapabilitySlot_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunRemoteCapabilitySlot_Response_error_message success(::ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RunRemoteCapabilitySlot_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::RunRemoteCapabilitySlot_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_RunRemoteCapabilitySlot_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__RUN_REMOTE_CAPABILITY_SLOT__BUILDER_HPP_
