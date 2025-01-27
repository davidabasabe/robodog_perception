// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/GetLocalBid.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_LOCAL_BID__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_LOCAL_BID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/get_local_bid__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetLocalBid_Request_implementation_tags_dict
{
public:
  explicit Init_GetLocalBid_Request_implementation_tags_dict(::ros_bt_py_interfaces::srv::GetLocalBid_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::GetLocalBid_Request implementation_tags_dict(::ros_bt_py_interfaces::srv::GetLocalBid_Request::_implementation_tags_dict_type arg)
  {
    msg_.implementation_tags_dict = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetLocalBid_Request msg_;
};

class Init_GetLocalBid_Request_node_id
{
public:
  explicit Init_GetLocalBid_Request_node_id(::ros_bt_py_interfaces::srv::GetLocalBid_Request & msg)
  : msg_(msg)
  {}
  Init_GetLocalBid_Request_implementation_tags_dict node_id(::ros_bt_py_interfaces::srv::GetLocalBid_Request::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_GetLocalBid_Request_implementation_tags_dict(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetLocalBid_Request msg_;
};

class Init_GetLocalBid_Request_interface
{
public:
  Init_GetLocalBid_Request_interface()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLocalBid_Request_node_id interface(::ros_bt_py_interfaces::srv::GetLocalBid_Request::_interface_type arg)
  {
    msg_.interface = std::move(arg);
    return Init_GetLocalBid_Request_node_id(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetLocalBid_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::GetLocalBid_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_GetLocalBid_Request_interface();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetLocalBid_Response_error_message
{
public:
  explicit Init_GetLocalBid_Response_error_message(::ros_bt_py_interfaces::srv::GetLocalBid_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::GetLocalBid_Response error_message(::ros_bt_py_interfaces::srv::GetLocalBid_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetLocalBid_Response msg_;
};

class Init_GetLocalBid_Response_success
{
public:
  explicit Init_GetLocalBid_Response_success(::ros_bt_py_interfaces::srv::GetLocalBid_Response & msg)
  : msg_(msg)
  {}
  Init_GetLocalBid_Response_error_message success(::ros_bt_py_interfaces::srv::GetLocalBid_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetLocalBid_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetLocalBid_Response msg_;
};

class Init_GetLocalBid_Response_bid
{
public:
  explicit Init_GetLocalBid_Response_bid(::ros_bt_py_interfaces::srv::GetLocalBid_Response & msg)
  : msg_(msg)
  {}
  Init_GetLocalBid_Response_success bid(::ros_bt_py_interfaces::srv::GetLocalBid_Response::_bid_type arg)
  {
    msg_.bid = std::move(arg);
    return Init_GetLocalBid_Response_success(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetLocalBid_Response msg_;
};

class Init_GetLocalBid_Response_implementation_name
{
public:
  Init_GetLocalBid_Response_implementation_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLocalBid_Response_bid implementation_name(::ros_bt_py_interfaces::srv::GetLocalBid_Response::_implementation_name_type arg)
  {
    msg_.implementation_name = std::move(arg);
    return Init_GetLocalBid_Response_bid(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::GetLocalBid_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::GetLocalBid_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_GetLocalBid_Response_implementation_name();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__GET_LOCAL_BID__BUILDER_HPP_
