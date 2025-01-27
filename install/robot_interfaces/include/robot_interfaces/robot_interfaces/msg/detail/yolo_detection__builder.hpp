// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_interfaces:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__YOLO_DETECTION__BUILDER_HPP_
#define ROBOT_INTERFACES__MSG__DETAIL__YOLO_DETECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_interfaces/msg/detail/yolo_detection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_interfaces
{

namespace msg
{

namespace builder
{

class Init_YoloDetection_z
{
public:
  explicit Init_YoloDetection_z(::robot_interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  ::robot_interfaces::msg::YoloDetection z(::robot_interfaces::msg::YoloDetection::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_y
{
public:
  explicit Init_YoloDetection_y(::robot_interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_z y(::robot_interfaces::msg::YoloDetection::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_YoloDetection_z(msg_);
  }

private:
  ::robot_interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_x
{
public:
  explicit Init_YoloDetection_x(::robot_interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_y x(::robot_interfaces::msg::YoloDetection::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_YoloDetection_y(msg_);
  }

private:
  ::robot_interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_distance
{
public:
  explicit Init_YoloDetection_distance(::robot_interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_x distance(::robot_interfaces::msg::YoloDetection::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_YoloDetection_x(msg_);
  }

private:
  ::robot_interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_detected
{
public:
  explicit Init_YoloDetection_detected(::robot_interfaces::msg::YoloDetection & msg)
  : msg_(msg)
  {}
  Init_YoloDetection_distance detected(::robot_interfaces::msg::YoloDetection::_detected_type arg)
  {
    msg_.detected = std::move(arg);
    return Init_YoloDetection_distance(msg_);
  }

private:
  ::robot_interfaces::msg::YoloDetection msg_;
};

class Init_YoloDetection_class_name
{
public:
  Init_YoloDetection_class_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YoloDetection_detected class_name(::robot_interfaces::msg::YoloDetection::_class_name_type arg)
  {
    msg_.class_name = std::move(arg);
    return Init_YoloDetection_detected(msg_);
  }

private:
  ::robot_interfaces::msg::YoloDetection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_interfaces::msg::YoloDetection>()
{
  return robot_interfaces::msg::builder::Init_YoloDetection_class_name();
}

}  // namespace robot_interfaces

#endif  // ROBOT_INTERFACES__MSG__DETAIL__YOLO_DETECTION__BUILDER_HPP_
