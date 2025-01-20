// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_interfaces:msg/Intrinsics.idl
// generated code does not contain a copyright notice

#ifndef ROBOT_INTERFACES__MSG__DETAIL__INTRINSICS__STRUCT_H_
#define ROBOT_INTERFACES__MSG__DETAIL__INTRINSICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'model'
#include "rosidl_runtime_c/string.h"
// Member 'coeffs'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Intrinsics in the package robot_interfaces.
/**
  * Video Stream Intrinsics of Intel RealSense
 */
typedef struct robot_interfaces__msg__Intrinsics
{
  /// Width of the image in pixels
  uint16_t width;
  /// Height of the image in pixels
  uint16_t height;
  /// Horizontal coordinate of the principal point of the image, as a pixel offset from the left edge
  double ppx;
  /// Vertical coordinate of the principal point of the image, as a pixel offset from the top edge
  double ppy;
  /// Focal length of the image plane, as a multiple of pixel width
  double fx;
  /// Focal length of the image plane, as a multiple of pixel height
  double fy;
  /// Depth Scale for real distance value in meters
  double depth_scale;
  /// Distortion model of the image
  rosidl_runtime_c__String model;
  /// Distortion coefficients
  rosidl_runtime_c__double__Sequence coeffs;
} robot_interfaces__msg__Intrinsics;

// Struct for a sequence of robot_interfaces__msg__Intrinsics.
typedef struct robot_interfaces__msg__Intrinsics__Sequence
{
  robot_interfaces__msg__Intrinsics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_interfaces__msg__Intrinsics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_INTERFACES__MSG__DETAIL__INTRINSICS__STRUCT_H_
