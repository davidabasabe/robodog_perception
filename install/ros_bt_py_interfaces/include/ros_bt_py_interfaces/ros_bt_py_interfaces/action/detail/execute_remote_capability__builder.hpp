// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:action/ExecuteRemoteCapability.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__ACTION__DETAIL__EXECUTE_REMOTE_CAPABILITY__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__ACTION__DETAIL__EXECUTE_REMOTE_CAPABILITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/action/detail/execute_remote_capability__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRemoteCapability_Goal_node_id
{
public:
  explicit Init_ExecuteRemoteCapability_Goal_node_id(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal node_id(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal msg_;
};

class Init_ExecuteRemoteCapability_Goal_implementation_name
{
public:
  explicit Init_ExecuteRemoteCapability_Goal_implementation_name(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal & msg)
  : msg_(msg)
  {}
  Init_ExecuteRemoteCapability_Goal_node_id implementation_name(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal::_implementation_name_type arg)
  {
    msg_.implementation_name = std::move(arg);
    return Init_ExecuteRemoteCapability_Goal_node_id(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal msg_;
};

class Init_ExecuteRemoteCapability_Goal_interface
{
public:
  Init_ExecuteRemoteCapability_Goal_interface()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteRemoteCapability_Goal_implementation_name interface(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal::_interface_type arg)
  {
    msg_.interface = std::move(arg);
    return Init_ExecuteRemoteCapability_Goal_implementation_name(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Goal>()
{
  return ros_bt_py_interfaces::action::builder::Init_ExecuteRemoteCapability_Goal_interface();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRemoteCapability_Result_no_executor_available
{
public:
  explicit Init_ExecuteRemoteCapability_Result_no_executor_available(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result no_executor_available(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result::_no_executor_available_type arg)
  {
    msg_.no_executor_available = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result msg_;
};

class Init_ExecuteRemoteCapability_Result_success
{
public:
  explicit Init_ExecuteRemoteCapability_Result_success(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result & msg)
  : msg_(msg)
  {}
  Init_ExecuteRemoteCapability_Result_no_executor_available success(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ExecuteRemoteCapability_Result_no_executor_available(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result msg_;
};

class Init_ExecuteRemoteCapability_Result_error_message
{
public:
  Init_ExecuteRemoteCapability_Result_error_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteRemoteCapability_Result_success error_message(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_ExecuteRemoteCapability_Result_success(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Result>()
{
  return ros_bt_py_interfaces::action::builder::Init_ExecuteRemoteCapability_Result_error_message();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRemoteCapability_Feedback_completion_progress
{
public:
  Init_ExecuteRemoteCapability_Feedback_completion_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Feedback completion_progress(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Feedback::_completion_progress_type arg)
  {
    msg_.completion_progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::ExecuteRemoteCapability_Feedback>()
{
  return ros_bt_py_interfaces::action::builder::Init_ExecuteRemoteCapability_Feedback_completion_progress();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRemoteCapability_SendGoal_Request_goal
{
public:
  explicit Init_ExecuteRemoteCapability_SendGoal_Request_goal(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request goal(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request msg_;
};

class Init_ExecuteRemoteCapability_SendGoal_Request_goal_id
{
public:
  Init_ExecuteRemoteCapability_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteRemoteCapability_SendGoal_Request_goal goal_id(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteRemoteCapability_SendGoal_Request_goal(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Request>()
{
  return ros_bt_py_interfaces::action::builder::Init_ExecuteRemoteCapability_SendGoal_Request_goal_id();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRemoteCapability_SendGoal_Response_stamp
{
public:
  explicit Init_ExecuteRemoteCapability_SendGoal_Response_stamp(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response stamp(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response msg_;
};

class Init_ExecuteRemoteCapability_SendGoal_Response_accepted
{
public:
  Init_ExecuteRemoteCapability_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteRemoteCapability_SendGoal_Response_stamp accepted(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_ExecuteRemoteCapability_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::ExecuteRemoteCapability_SendGoal_Response>()
{
  return ros_bt_py_interfaces::action::builder::Init_ExecuteRemoteCapability_SendGoal_Response_accepted();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRemoteCapability_GetResult_Request_goal_id
{
public:
  Init_ExecuteRemoteCapability_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Request goal_id(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Request>()
{
  return ros_bt_py_interfaces::action::builder::Init_ExecuteRemoteCapability_GetResult_Request_goal_id();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRemoteCapability_GetResult_Response_result
{
public:
  explicit Init_ExecuteRemoteCapability_GetResult_Response_result(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response result(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response msg_;
};

class Init_ExecuteRemoteCapability_GetResult_Response_status
{
public:
  Init_ExecuteRemoteCapability_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteRemoteCapability_GetResult_Response_result status(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ExecuteRemoteCapability_GetResult_Response_result(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::ExecuteRemoteCapability_GetResult_Response>()
{
  return ros_bt_py_interfaces::action::builder::Init_ExecuteRemoteCapability_GetResult_Response_status();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_ExecuteRemoteCapability_FeedbackMessage_feedback
{
public:
  explicit Init_ExecuteRemoteCapability_FeedbackMessage_feedback(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_FeedbackMessage feedback(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_FeedbackMessage msg_;
};

class Init_ExecuteRemoteCapability_FeedbackMessage_goal_id
{
public:
  Init_ExecuteRemoteCapability_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExecuteRemoteCapability_FeedbackMessage_feedback goal_id(::ros_bt_py_interfaces::action::ExecuteRemoteCapability_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_ExecuteRemoteCapability_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::ExecuteRemoteCapability_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::ExecuteRemoteCapability_FeedbackMessage>()
{
  return ros_bt_py_interfaces::action::builder::Init_ExecuteRemoteCapability_FeedbackMessage_goal_id();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__ACTION__DETAIL__EXECUTE_REMOTE_CAPABILITY__BUILDER_HPP_
