// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:action/Commands.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__ACTION__DETAIL__COMMANDS__BUILDER_HPP_
#define ROBOT_INTERFACES__ACTION__DETAIL__COMMANDS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/action/detail/commands__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_Commands_Goal_robot
{
public:
  explicit Init_Commands_Goal_robot(::robot_interfaces::action::Commands_Goal & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::action::Commands_Goal robot(::robot_interfaces::action::Commands_Goal::_robot_type arg)
  {
    msg_.robot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::Commands_Goal msg_;
};

class Init_Commands_Goal_sequence
{
public:
  Init_Commands_Goal_sequence()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Commands_Goal_robot sequence(::robot_interfaces::action::Commands_Goal::_sequence_type arg)
  {
    msg_.sequence = std::move(arg);
    return Init_Commands_Goal_robot(msg_);
  }

private:
  ::robot_interfaces::action::Commands_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::Commands_Goal>()
{
  return robot_interfaces::action::builder::Init_Commands_Goal_sequence();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_Commands_Result_finished
{
public:
  Init_Commands_Result_finished()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_interfaces::action::Commands_Result finished(::robot_interfaces::action::Commands_Result::_finished_type arg)
  {
    msg_.finished = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::Commands_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::Commands_Result>()
{
  return robot_interfaces::action::builder::Init_Commands_Result_finished();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_Commands_Feedback_status
{
public:
  Init_Commands_Feedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_interfaces::action::Commands_Feedback status(::robot_interfaces::action::Commands_Feedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::Commands_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::Commands_Feedback>()
{
  return robot_interfaces::action::builder::Init_Commands_Feedback_status();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_Commands_SendGoal_Request_goal
{
public:
  explicit Init_Commands_SendGoal_Request_goal(::robot_interfaces::action::Commands_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::action::Commands_SendGoal_Request goal(::robot_interfaces::action::Commands_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::Commands_SendGoal_Request msg_;
};

class Init_Commands_SendGoal_Request_goal_id
{
public:
  Init_Commands_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Commands_SendGoal_Request_goal goal_id(::robot_interfaces::action::Commands_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Commands_SendGoal_Request_goal(msg_);
  }

private:
  ::robot_interfaces::action::Commands_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::Commands_SendGoal_Request>()
{
  return robot_interfaces::action::builder::Init_Commands_SendGoal_Request_goal_id();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_Commands_SendGoal_Response_stamp
{
public:
  explicit Init_Commands_SendGoal_Response_stamp(::robot_interfaces::action::Commands_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::action::Commands_SendGoal_Response stamp(::robot_interfaces::action::Commands_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::Commands_SendGoal_Response msg_;
};

class Init_Commands_SendGoal_Response_accepted
{
public:
  Init_Commands_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Commands_SendGoal_Response_stamp accepted(::robot_interfaces::action::Commands_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Commands_SendGoal_Response_stamp(msg_);
  }

private:
  ::robot_interfaces::action::Commands_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::Commands_SendGoal_Response>()
{
  return robot_interfaces::action::builder::Init_Commands_SendGoal_Response_accepted();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_Commands_GetResult_Request_goal_id
{
public:
  Init_Commands_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_interfaces::action::Commands_GetResult_Request goal_id(::robot_interfaces::action::Commands_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::Commands_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::Commands_GetResult_Request>()
{
  return robot_interfaces::action::builder::Init_Commands_GetResult_Request_goal_id();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_Commands_GetResult_Response_result
{
public:
  explicit Init_Commands_GetResult_Response_result(::robot_interfaces::action::Commands_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::action::Commands_GetResult_Response result(::robot_interfaces::action::Commands_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::Commands_GetResult_Response msg_;
};

class Init_Commands_GetResult_Response_status
{
public:
  Init_Commands_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Commands_GetResult_Response_result status(::robot_interfaces::action::Commands_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Commands_GetResult_Response_result(msg_);
  }

private:
  ::robot_interfaces::action::Commands_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::Commands_GetResult_Response>()
{
  return robot_interfaces::action::builder::Init_Commands_GetResult_Response_status();
}

}  // namespace robot_interfaces


namespace robot_interfaces
{

namespace action
{

namespace builder
{

class Init_Commands_FeedbackMessage_feedback
{
public:
  explicit Init_Commands_FeedbackMessage_feedback(::robot_interfaces::action::Commands_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::action::Commands_FeedbackMessage feedback(::robot_interfaces::action::Commands_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::action::Commands_FeedbackMessage msg_;
};

class Init_Commands_FeedbackMessage_goal_id
{
public:
  Init_Commands_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Commands_FeedbackMessage_feedback goal_id(::robot_interfaces::action::Commands_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Commands_FeedbackMessage_feedback(msg_);
  }

private:
  ::robot_interfaces::action::Commands_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::action::Commands_FeedbackMessage>()
{
  return robot_interfaces::action::builder::Init_Commands_FeedbackMessage_goal_id();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__ACTION__DETAIL__COMMANDS__BUILDER_HPP_
