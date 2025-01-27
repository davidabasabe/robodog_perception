// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:action/FindBestExecutor.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__ACTION__DETAIL__FIND_BEST_EXECUTOR__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__ACTION__DETAIL__FIND_BEST_EXECUTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/action/detail/find_best_executor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_FindBestExecutor_Goal_tree
{
public:
  Init_FindBestExecutor_Goal_tree()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::action::FindBestExecutor_Goal tree(::ros_bt_py_interfaces::action::FindBestExecutor_Goal::_tree_type arg)
  {
    msg_.tree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::FindBestExecutor_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::FindBestExecutor_Goal>()
{
  return ros_bt_py_interfaces::action::builder::Init_FindBestExecutor_Goal_tree();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_FindBestExecutor_Result_best_executor_namespace
{
public:
  explicit Init_FindBestExecutor_Result_best_executor_namespace(::ros_bt_py_interfaces::action::FindBestExecutor_Result & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::action::FindBestExecutor_Result best_executor_namespace(::ros_bt_py_interfaces::action::FindBestExecutor_Result::_best_executor_namespace_type arg)
  {
    msg_.best_executor_namespace = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::FindBestExecutor_Result msg_;
};

class Init_FindBestExecutor_Result_local_is_best
{
public:
  Init_FindBestExecutor_Result_local_is_best()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindBestExecutor_Result_best_executor_namespace local_is_best(::ros_bt_py_interfaces::action::FindBestExecutor_Result::_local_is_best_type arg)
  {
    msg_.local_is_best = std::move(arg);
    return Init_FindBestExecutor_Result_best_executor_namespace(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::FindBestExecutor_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::FindBestExecutor_Result>()
{
  return ros_bt_py_interfaces::action::builder::Init_FindBestExecutor_Result_local_is_best();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_FindBestExecutor_Feedback_checked_namespaces
{
public:
  Init_FindBestExecutor_Feedback_checked_namespaces()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::action::FindBestExecutor_Feedback checked_namespaces(::ros_bt_py_interfaces::action::FindBestExecutor_Feedback::_checked_namespaces_type arg)
  {
    msg_.checked_namespaces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::FindBestExecutor_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::FindBestExecutor_Feedback>()
{
  return ros_bt_py_interfaces::action::builder::Init_FindBestExecutor_Feedback_checked_namespaces();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_FindBestExecutor_SendGoal_Request_goal
{
public:
  explicit Init_FindBestExecutor_SendGoal_Request_goal(::ros_bt_py_interfaces::action::FindBestExecutor_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::action::FindBestExecutor_SendGoal_Request goal(::ros_bt_py_interfaces::action::FindBestExecutor_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::FindBestExecutor_SendGoal_Request msg_;
};

class Init_FindBestExecutor_SendGoal_Request_goal_id
{
public:
  Init_FindBestExecutor_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindBestExecutor_SendGoal_Request_goal goal_id(::ros_bt_py_interfaces::action::FindBestExecutor_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FindBestExecutor_SendGoal_Request_goal(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::FindBestExecutor_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::FindBestExecutor_SendGoal_Request>()
{
  return ros_bt_py_interfaces::action::builder::Init_FindBestExecutor_SendGoal_Request_goal_id();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_FindBestExecutor_SendGoal_Response_stamp
{
public:
  explicit Init_FindBestExecutor_SendGoal_Response_stamp(::ros_bt_py_interfaces::action::FindBestExecutor_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::action::FindBestExecutor_SendGoal_Response stamp(::ros_bt_py_interfaces::action::FindBestExecutor_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::FindBestExecutor_SendGoal_Response msg_;
};

class Init_FindBestExecutor_SendGoal_Response_accepted
{
public:
  Init_FindBestExecutor_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindBestExecutor_SendGoal_Response_stamp accepted(::ros_bt_py_interfaces::action::FindBestExecutor_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_FindBestExecutor_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::FindBestExecutor_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::FindBestExecutor_SendGoal_Response>()
{
  return ros_bt_py_interfaces::action::builder::Init_FindBestExecutor_SendGoal_Response_accepted();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_FindBestExecutor_GetResult_Request_goal_id
{
public:
  Init_FindBestExecutor_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::action::FindBestExecutor_GetResult_Request goal_id(::ros_bt_py_interfaces::action::FindBestExecutor_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::FindBestExecutor_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::FindBestExecutor_GetResult_Request>()
{
  return ros_bt_py_interfaces::action::builder::Init_FindBestExecutor_GetResult_Request_goal_id();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_FindBestExecutor_GetResult_Response_result
{
public:
  explicit Init_FindBestExecutor_GetResult_Response_result(::ros_bt_py_interfaces::action::FindBestExecutor_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::action::FindBestExecutor_GetResult_Response result(::ros_bt_py_interfaces::action::FindBestExecutor_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::FindBestExecutor_GetResult_Response msg_;
};

class Init_FindBestExecutor_GetResult_Response_status
{
public:
  Init_FindBestExecutor_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindBestExecutor_GetResult_Response_result status(::ros_bt_py_interfaces::action::FindBestExecutor_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_FindBestExecutor_GetResult_Response_result(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::FindBestExecutor_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::FindBestExecutor_GetResult_Response>()
{
  return ros_bt_py_interfaces::action::builder::Init_FindBestExecutor_GetResult_Response_status();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_FindBestExecutor_FeedbackMessage_feedback
{
public:
  explicit Init_FindBestExecutor_FeedbackMessage_feedback(::ros_bt_py_interfaces::action::FindBestExecutor_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::action::FindBestExecutor_FeedbackMessage feedback(::ros_bt_py_interfaces::action::FindBestExecutor_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::FindBestExecutor_FeedbackMessage msg_;
};

class Init_FindBestExecutor_FeedbackMessage_goal_id
{
public:
  Init_FindBestExecutor_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FindBestExecutor_FeedbackMessage_feedback goal_id(::ros_bt_py_interfaces::action::FindBestExecutor_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_FindBestExecutor_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::FindBestExecutor_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::FindBestExecutor_FeedbackMessage>()
{
  return ros_bt_py_interfaces::action::builder::Init_FindBestExecutor_FeedbackMessage_goal_id();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__ACTION__DETAIL__FIND_BEST_EXECUTOR__BUILDER_HPP_
