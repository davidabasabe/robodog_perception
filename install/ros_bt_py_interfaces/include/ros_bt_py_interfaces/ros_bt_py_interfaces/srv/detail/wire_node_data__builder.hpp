// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/WireNodeData.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__WIRE_NODE_DATA__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__WIRE_NODE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/wire_node_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_WireNodeData_Request_ignore_failure
{
public:
  explicit Init_WireNodeData_Request_ignore_failure(::ros_bt_py_interfaces::srv::WireNodeData_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::WireNodeData_Request ignore_failure(::ros_bt_py_interfaces::srv::WireNodeData_Request::_ignore_failure_type arg)
  {
    msg_.ignore_failure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::WireNodeData_Request msg_;
};

class Init_WireNodeData_Request_wirings
{
public:
  Init_WireNodeData_Request_wirings()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WireNodeData_Request_ignore_failure wirings(::ros_bt_py_interfaces::srv::WireNodeData_Request::_wirings_type arg)
  {
    msg_.wirings = std::move(arg);
    return Init_WireNodeData_Request_ignore_failure(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::WireNodeData_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::WireNodeData_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_WireNodeData_Request_wirings();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_WireNodeData_Response_error_message
{
public:
  explicit Init_WireNodeData_Response_error_message(::ros_bt_py_interfaces::srv::WireNodeData_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::WireNodeData_Response error_message(::ros_bt_py_interfaces::srv::WireNodeData_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::WireNodeData_Response msg_;
};

class Init_WireNodeData_Response_success
{
public:
  Init_WireNodeData_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WireNodeData_Response_error_message success(::ros_bt_py_interfaces::srv::WireNodeData_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_WireNodeData_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::WireNodeData_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::WireNodeData_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_WireNodeData_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__WIRE_NODE_DATA__BUILDER_HPP_
