// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:msg/Tree.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__TREE__STRUCT_H_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__TREE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IDLE'.
static const char * const ros_bt_py_interfaces__msg__Tree__IDLE = "IDLE";

/// Constant 'EDITABLE'.
static const char * const ros_bt_py_interfaces__msg__Tree__EDITABLE = "EDITABLE";

/// Constant 'TICKING'.
static const char * const ros_bt_py_interfaces__msg__Tree__TICKING = "TICKING";

/// Constant 'WAITING_FOR_TICK'.
static const char * const ros_bt_py_interfaces__msg__Tree__WAITING_FOR_TICK = "WAITING_FOR_TICK";

/// Constant 'STOP_REQUESTED'.
static const char * const ros_bt_py_interfaces__msg__Tree__STOP_REQUESTED = "STOP_REQUESTED";

/// Constant 'ERROR'.
static const char * const ros_bt_py_interfaces__msg__Tree__ERROR = "ERROR";

// Include directives for member types
// Member 'name'
// Member 'path'
// Member 'root_name'
// Member 'state'
#include "rosidl_runtime_c/string.h"
// Member 'nodes'
#include "ros_bt_py_interfaces/msg/detail/node__struct.h"
// Member 'data_wirings'
#include "ros_bt_py_interfaces/msg/detail/node_data_wiring__struct.h"
// Member 'public_node_data'
#include "ros_bt_py_interfaces/msg/detail/node_data_location__struct.h"

/// Struct defined in msg/Tree in the package ros_bt_py_interfaces.
/**
  * Copyright 2023 FZI Forschungszentrum Informatik
  *
  * Redistribution and use in source and binary forms, with or without
  * modification, are permitted provided that the following conditions are met:
  *
  *    * Redistributions of source code must retain the above copyright
  *      notice, this list of conditions and the following disclaimer.
  *
  *    * Redistributions in binary form must reproduce the above copyright
  *      notice, this list of conditions and the following disclaimer in the
  *      documentation and/or other materials provided with the distribution.
  *
  *    * Neither the name of the FZI Forschungszentrum Informatik nor the names of its
  *      contributors may be used to endorse or promote products derived from
  *      this software without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
  * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  * POSSIBILITY OF SUCH DAMAGE.
  * A descriptive name for this tree. At runtime, this is chosen by the
  * tree manager node.
 */
typedef struct ros_bt_py_interfaces__msg__Tree
{
  rosidl_runtime_c__String name;
  /// A string pointing to a YAML file to read a tree from, if
  /// any. Can be a file:// or a package:// string. Please don't build
  /// infinite loops using this.
  rosidl_runtime_c__String path;
  rosidl_runtime_c__String root_name;
  ros_bt_py_interfaces__msg__Node__Sequence nodes;
  ros_bt_py_interfaces__msg__NodeDataWiring__Sequence data_wirings;
  double tick_frequency_hz;
  /// One of the constants below
  rosidl_runtime_c__String state;
  /// These are accessible when using this tree as a subtree
  ros_bt_py_interfaces__msg__NodeDataLocation__Sequence public_node_data;
} ros_bt_py_interfaces__msg__Tree;

// Struct for a sequence of ros_bt_py_interfaces__msg__Tree.
typedef struct ros_bt_py_interfaces__msg__Tree__Sequence
{
  ros_bt_py_interfaces__msg__Tree * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__msg__Tree__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__TREE__STRUCT_H_
