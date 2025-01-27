// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/YoloDetection.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__YOLO_DETECTION__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__YOLO_DETECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'class_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/YoloDetection in the package robot_interfaces.
typedef struct robot_interfaces__msg__YoloDetection
{
  rosidl_runtime_c__String class_name;
  bool detected;
  double distance;
  double x;
  double y;
  double z;
} robot_interfaces__msg__YoloDetection;

// Struct for a sequence of robot_interfaces__msg__YoloDetection.
typedef struct robot_interfaces__msg__YoloDetection__Sequence
{
  robot_interfaces__msg__YoloDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__YoloDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__YOLO_DETECTION__STRUCT_H_
