// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/FindBestCapabilityExecutor.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__FIND_BEST_CAPABILITY_EXECUTOR__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__FIND_BEST_CAPABILITY_EXECUTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/find_best_capability_executor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_FindBestCapabilityExecutor_Request_implementation_tags_dict
{
public:
  explicit Init_FindBestCapabilityExecutor_Request_implementation_tags_dict(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request implementation_tags_dict(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request::_implementation_tags_dict_type arg)
  {
    msg_.implementation_tags_dict = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request msg_;
};

class Init_FindBestCapabilityExecutor_Request_mission_control_name
{
public:
  explicit Init_FindBestCapabilityExecutor_Request_mission_control_name(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request & msg)
  : msg_(msg)
  {}
  Init_FindBestCapabilityExecutor_Request_implementation_tags_dict mission_control_name(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request::_mission_control_name_type arg)
  {
    msg_.mission_control_name = std::move(arg);
    return Init_FindBestCapabilityExecutor_Request_implementation_tags_dict(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request msg_;
};

class Init_FindBestCapabilityExecutor_Request_node_id
{
public:
  explicit Init_FindBestCapabilityExecutor_Request_node_id(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request & msg)
  : msg_(msg)
  {}
  Init_FindBestCapabilityExecutor_Request_mission_control_name node_id(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_FindBestCapabilityExecutor_Request_mission_control_name(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request msg_;
};

class Init_FindBestCapabilityExecutor_Request_capability
{
public:
  Init_FindBestCapabilityExecutor_Request_capability()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindBestCapabilityExecutor_Request_node_id capability(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request::_capability_type arg)
  {
    msg_.capability = std::move(arg);
    return Init_FindBestCapabilityExecutor_Request_node_id(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_FindBestCapabilityExecutor_Request_capability();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_FindBestCapabilityExecutor_Response_max_allowed_costs
{
public:
  explicit Init_FindBestCapabilityExecutor_Response_max_allowed_costs(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response max_allowed_costs(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response::_max_allowed_costs_type arg)
  {
    msg_.max_allowed_costs = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response msg_;
};

class Init_FindBestCapabilityExecutor_Response_implementation_name
{
public:
  explicit Init_FindBestCapabilityExecutor_Response_implementation_name(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response & msg)
  : msg_(msg)
  {}
  Init_FindBestCapabilityExecutor_Response_max_allowed_costs implementation_name(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response::_implementation_name_type arg)
  {
    msg_.implementation_name = std::move(arg);
    return Init_FindBestCapabilityExecutor_Response_max_allowed_costs(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response msg_;
};

class Init_FindBestCapabilityExecutor_Response_executor_mission_control_topic
{
public:
  explicit Init_FindBestCapabilityExecutor_Response_executor_mission_control_topic(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response & msg)
  : msg_(msg)
  {}
  Init_FindBestCapabilityExecutor_Response_implementation_name executor_mission_control_topic(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response::_executor_mission_control_topic_type arg)
  {
    msg_.executor_mission_control_topic = std::move(arg);
    return Init_FindBestCapabilityExecutor_Response_implementation_name(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response msg_;
};

class Init_FindBestCapabilityExecutor_Response_execute_local
{
public:
  explicit Init_FindBestCapabilityExecutor_Response_execute_local(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response & msg)
  : msg_(msg)
  {}
  Init_FindBestCapabilityExecutor_Response_executor_mission_control_topic execute_local(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response::_execute_local_type arg)
  {
    msg_.execute_local = std::move(arg);
    return Init_FindBestCapabilityExecutor_Response_executor_mission_control_topic(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response msg_;
};

class Init_FindBestCapabilityExecutor_Response_error_message
{
public:
  explicit Init_FindBestCapabilityExecutor_Response_error_message(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response & msg)
  : msg_(msg)
  {}
  Init_FindBestCapabilityExecutor_Response_execute_local error_message(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_FindBestCapabilityExecutor_Response_execute_local(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response msg_;
};

class Init_FindBestCapabilityExecutor_Response_success
{
public:
  Init_FindBestCapabilityExecutor_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindBestCapabilityExecutor_Response_error_message success(::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_FindBestCapabilityExecutor_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::FindBestCapabilityExecutor_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_FindBestCapabilityExecutor_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__FIND_BEST_CAPABILITY_EXECUTOR__BUILDER_HPP_
