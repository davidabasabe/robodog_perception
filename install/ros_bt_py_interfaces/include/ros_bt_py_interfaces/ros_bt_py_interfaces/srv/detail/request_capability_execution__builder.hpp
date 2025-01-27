// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/RequestCapabilityExecution.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__REQUEST_CAPABILITY_EXECUTION__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__REQUEST_CAPABILITY_EXECUTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/request_capability_execution__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_RequestCapabilityExecution_Request_implementation_tags_dict
{
public:
  explicit Init_RequestCapabilityExecution_Request_implementation_tags_dict(::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Request implementation_tags_dict(::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Request::_implementation_tags_dict_type arg)
  {
    msg_.implementation_tags_dict = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Request msg_;
};

class Init_RequestCapabilityExecution_Request_require_local_execution
{
public:
  explicit Init_RequestCapabilityExecution_Request_require_local_execution(::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Request & msg)
  : msg_(msg)
  {}
  Init_RequestCapabilityExecution_Request_implementation_tags_dict require_local_execution(::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Request::_require_local_execution_type arg)
  {
    msg_.require_local_execution = std::move(arg);
    return Init_RequestCapabilityExecution_Request_implementation_tags_dict(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Request msg_;
};

class Init_RequestCapabilityExecution_Request_node_id
{
public:
  explicit Init_RequestCapabilityExecution_Request_node_id(::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Request & msg)
  : msg_(msg)
  {}
  Init_RequestCapabilityExecution_Request_require_local_execution node_id(::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Request::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_RequestCapabilityExecution_Request_require_local_execution(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Request msg_;
};

class Init_RequestCapabilityExecution_Request_capability
{
public:
  Init_RequestCapabilityExecution_Request_capability()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestCapabilityExecution_Request_node_id capability(::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Request::_capability_type arg)
  {
    msg_.capability = std::move(arg);
    return Init_RequestCapabilityExecution_Request_node_id(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_RequestCapabilityExecution_Request_capability();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_RequestCapabilityExecution_Response_remote_mission_controller_topic
{
public:
  explicit Init_RequestCapabilityExecution_Response_remote_mission_controller_topic(::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Response remote_mission_controller_topic(::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Response::_remote_mission_controller_topic_type arg)
  {
    msg_.remote_mission_controller_topic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Response msg_;
};

class Init_RequestCapabilityExecution_Response_implementation_name
{
public:
  explicit Init_RequestCapabilityExecution_Response_implementation_name(::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Response & msg)
  : msg_(msg)
  {}
  Init_RequestCapabilityExecution_Response_remote_mission_controller_topic implementation_name(::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Response::_implementation_name_type arg)
  {
    msg_.implementation_name = std::move(arg);
    return Init_RequestCapabilityExecution_Response_remote_mission_controller_topic(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Response msg_;
};

class Init_RequestCapabilityExecution_Response_execute_local
{
public:
  explicit Init_RequestCapabilityExecution_Response_execute_local(::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Response & msg)
  : msg_(msg)
  {}
  Init_RequestCapabilityExecution_Response_implementation_name execute_local(::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Response::_execute_local_type arg)
  {
    msg_.execute_local = std::move(arg);
    return Init_RequestCapabilityExecution_Response_implementation_name(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Response msg_;
};

class Init_RequestCapabilityExecution_Response_error_message
{
public:
  explicit Init_RequestCapabilityExecution_Response_error_message(::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Response & msg)
  : msg_(msg)
  {}
  Init_RequestCapabilityExecution_Response_execute_local error_message(::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_RequestCapabilityExecution_Response_execute_local(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Response msg_;
};

class Init_RequestCapabilityExecution_Response_success
{
public:
  Init_RequestCapabilityExecution_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestCapabilityExecution_Response_error_message success(::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_RequestCapabilityExecution_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::RequestCapabilityExecution_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_RequestCapabilityExecution_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__REQUEST_CAPABILITY_EXECUTION__BUILDER_HPP_
