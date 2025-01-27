// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:srv/TestService.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__SRV__DETAIL__TEST_SERVICE__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__SRV__DETAIL__TEST_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/srv/detail/test_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_TestService_Request_tree
{
public:
  explicit Init_TestService_Request_tree(::ros_bt_py_interfaces::srv::TestService_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::TestService_Request tree(::ros_bt_py_interfaces::srv::TestService_Request::_tree_type arg)
  {
    msg_.tree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::TestService_Request msg_;
};

class Init_TestService_Request_new_option
{
public:
  explicit Init_TestService_Request_new_option(::ros_bt_py_interfaces::srv::TestService_Request & msg)
  : msg_(msg)
  {}
  Init_TestService_Request_tree new_option(::ros_bt_py_interfaces::srv::TestService_Request::_new_option_type arg)
  {
    msg_.new_option = std::move(arg);
    return Init_TestService_Request_tree(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::TestService_Request msg_;
};

class Init_TestService_Request_boo
{
public:
  explicit Init_TestService_Request_boo(::ros_bt_py_interfaces::srv::TestService_Request & msg)
  : msg_(msg)
  {}
  Init_TestService_Request_new_option boo(::ros_bt_py_interfaces::srv::TestService_Request::_boo_type arg)
  {
    msg_.boo = std::move(arg);
    return Init_TestService_Request_new_option(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::TestService_Request msg_;
};

class Init_TestService_Request_name
{
public:
  Init_TestService_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestService_Request_boo name(::ros_bt_py_interfaces::srv::TestService_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TestService_Request_boo(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::TestService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::TestService_Request>()
{
  return ros_bt_py_interfaces::srv::builder::Init_TestService_Request_name();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace srv
{

namespace builder
{

class Init_TestService_Response_error_message
{
public:
  explicit Init_TestService_Response_error_message(::ros_bt_py_interfaces::srv::TestService_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::srv::TestService_Response error_message(::ros_bt_py_interfaces::srv::TestService_Response::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::TestService_Response msg_;
};

class Init_TestService_Response_success
{
public:
  Init_TestService_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestService_Response_error_message success(::ros_bt_py_interfaces::srv::TestService_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_TestService_Response_error_message(msg_);
  }

private:
  ::ros_bt_py_interfaces::srv::TestService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::srv::TestService_Response>()
{
  return ros_bt_py_interfaces::srv::builder::Init_TestService_Response_success();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__SRV__DETAIL__TEST_SERVICE__BUILDER_HPP_
