// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_bt_py_interfaces:action/RunTree.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__ACTION__DETAIL__RUN_TREE__BUILDER_HPP_
#define ROS_BT_PY_INTERFACES__ACTION__DETAIL__RUN_TREE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_bt_py_interfaces/action/detail/run_tree__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_RunTree_Goal_tick_frequency_hz
{
public:
  explicit Init_RunTree_Goal_tick_frequency_hz(::ros_bt_py_interfaces::action::RunTree_Goal & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::action::RunTree_Goal tick_frequency_hz(::ros_bt_py_interfaces::action::RunTree_Goal::_tick_frequency_hz_type arg)
  {
    msg_.tick_frequency_hz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::RunTree_Goal msg_;
};

class Init_RunTree_Goal_tree
{
public:
  Init_RunTree_Goal_tree()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunTree_Goal_tick_frequency_hz tree(::ros_bt_py_interfaces::action::RunTree_Goal::_tree_type arg)
  {
    msg_.tree = std::move(arg);
    return Init_RunTree_Goal_tick_frequency_hz(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::RunTree_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::RunTree_Goal>()
{
  return ros_bt_py_interfaces::action::builder::Init_RunTree_Goal_tree();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_RunTree_Result_final_tree
{
public:
  Init_RunTree_Result_final_tree()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::action::RunTree_Result final_tree(::ros_bt_py_interfaces::action::RunTree_Result::_final_tree_type arg)
  {
    msg_.final_tree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::RunTree_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::RunTree_Result>()
{
  return ros_bt_py_interfaces::action::builder::Init_RunTree_Result_final_tree();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_RunTree_Feedback_current_tree
{
public:
  Init_RunTree_Feedback_current_tree()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::action::RunTree_Feedback current_tree(::ros_bt_py_interfaces::action::RunTree_Feedback::_current_tree_type arg)
  {
    msg_.current_tree = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::RunTree_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::RunTree_Feedback>()
{
  return ros_bt_py_interfaces::action::builder::Init_RunTree_Feedback_current_tree();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_RunTree_SendGoal_Request_goal
{
public:
  explicit Init_RunTree_SendGoal_Request_goal(::ros_bt_py_interfaces::action::RunTree_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::action::RunTree_SendGoal_Request goal(::ros_bt_py_interfaces::action::RunTree_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::RunTree_SendGoal_Request msg_;
};

class Init_RunTree_SendGoal_Request_goal_id
{
public:
  Init_RunTree_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunTree_SendGoal_Request_goal goal_id(::ros_bt_py_interfaces::action::RunTree_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RunTree_SendGoal_Request_goal(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::RunTree_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::RunTree_SendGoal_Request>()
{
  return ros_bt_py_interfaces::action::builder::Init_RunTree_SendGoal_Request_goal_id();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_RunTree_SendGoal_Response_stamp
{
public:
  explicit Init_RunTree_SendGoal_Response_stamp(::ros_bt_py_interfaces::action::RunTree_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::action::RunTree_SendGoal_Response stamp(::ros_bt_py_interfaces::action::RunTree_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::RunTree_SendGoal_Response msg_;
};

class Init_RunTree_SendGoal_Response_accepted
{
public:
  Init_RunTree_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunTree_SendGoal_Response_stamp accepted(::ros_bt_py_interfaces::action::RunTree_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_RunTree_SendGoal_Response_stamp(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::RunTree_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::RunTree_SendGoal_Response>()
{
  return ros_bt_py_interfaces::action::builder::Init_RunTree_SendGoal_Response_accepted();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_RunTree_GetResult_Request_goal_id
{
public:
  Init_RunTree_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_bt_py_interfaces::action::RunTree_GetResult_Request goal_id(::ros_bt_py_interfaces::action::RunTree_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::RunTree_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::RunTree_GetResult_Request>()
{
  return ros_bt_py_interfaces::action::builder::Init_RunTree_GetResult_Request_goal_id();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_RunTree_GetResult_Response_result
{
public:
  explicit Init_RunTree_GetResult_Response_result(::ros_bt_py_interfaces::action::RunTree_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::action::RunTree_GetResult_Response result(::ros_bt_py_interfaces::action::RunTree_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::RunTree_GetResult_Response msg_;
};

class Init_RunTree_GetResult_Response_status
{
public:
  Init_RunTree_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunTree_GetResult_Response_result status(::ros_bt_py_interfaces::action::RunTree_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RunTree_GetResult_Response_result(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::RunTree_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::RunTree_GetResult_Response>()
{
  return ros_bt_py_interfaces::action::builder::Init_RunTree_GetResult_Response_status();
}

}  // namespace ros_bt_py_interfaces


namespace ros_bt_py_interfaces
{

namespace action
{

namespace builder
{

class Init_RunTree_FeedbackMessage_feedback
{
public:
  explicit Init_RunTree_FeedbackMessage_feedback(::ros_bt_py_interfaces::action::RunTree_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::ros_bt_py_interfaces::action::RunTree_FeedbackMessage feedback(::ros_bt_py_interfaces::action::RunTree_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::RunTree_FeedbackMessage msg_;
};

class Init_RunTree_FeedbackMessage_goal_id
{
public:
  Init_RunTree_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RunTree_FeedbackMessage_feedback goal_id(::ros_bt_py_interfaces::action::RunTree_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_RunTree_FeedbackMessage_feedback(msg_);
  }

private:
  ::ros_bt_py_interfaces::action::RunTree_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_bt_py_interfaces::action::RunTree_FeedbackMessage>()
{
  return ros_bt_py_interfaces::action::builder::Init_RunTree_FeedbackMessage_goal_id();
}

}  // namespace ros_bt_py_interfaces

#endif  // ROS_BT_PY_INTERFACES__ACTION__DETAIL__RUN_TREE__BUILDER_HPP_
