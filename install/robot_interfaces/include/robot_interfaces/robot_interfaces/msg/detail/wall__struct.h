// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/Wall.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__WALL__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__WALL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Wall in the package robot_interfaces.
typedef struct robot_interfaces__msg__Wall
{
  double distance_left;
  double distance_right;
  double distance_front;
  double angle_left;
  double angle_right;
} robot_interfaces__msg__Wall;

// Struct for a sequence of robot_interfaces__msg__Wall.
typedef struct robot_interfaces__msg__Wall__Sequence
{
  robot_interfaces__msg__Wall * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__Wall__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__WALL__STRUCT_H_
