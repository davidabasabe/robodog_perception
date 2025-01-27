// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/Robot.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'arrow'
// Member 'lava'
#include "robot_interfaces/msg/detail/yolo_detection__struct.h"
// Member 'stair'
#include "robot_interfaces/msg/detail/stair__struct.h"
// Member 'wall'
#include "robot_interfaces/msg/detail/wall__struct.h"

/// Struct defined in msg/Robot in the package robot_interfaces.
typedef struct robot_interfaces__msg__Robot
{
  robot_interfaces__msg__YoloDetection arrow;
  robot_interfaces__msg__YoloDetection lava;
  robot_interfaces__msg__Stair stair;
  robot_interfaces__msg__Wall wall;
} robot_interfaces__msg__Robot;

// Struct for a sequence of robot_interfaces__msg__Robot.
typedef struct robot_interfaces__msg__Robot__Sequence
{
  robot_interfaces__msg__Robot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__Robot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__ROBOT__STRUCT_H_
