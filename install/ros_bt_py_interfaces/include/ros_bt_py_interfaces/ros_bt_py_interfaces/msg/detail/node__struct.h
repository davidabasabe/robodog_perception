// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE__STRUCT_H_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNINITIALIZED'.
static const char * const ros_bt_py_interfaces__msg__Node__UNINITIALIZED = "UNINITIALIZED";

/// Constant 'IDLE'.
static const char * const ros_bt_py_interfaces__msg__Node__IDLE = "IDLE";

/// Constant 'UNASSIGNED'.
static const char * const ros_bt_py_interfaces__msg__Node__UNASSIGNED = "UNASSIGNED";

/// Constant 'ASSIGNED'.
static const char * const ros_bt_py_interfaces__msg__Node__ASSIGNED = "ASSIGNED";

/// Constant 'RUNNING'.
static const char * const ros_bt_py_interfaces__msg__Node__RUNNING = "RUNNING";

/// Constant 'SUCCEEDED'.
static const char * const ros_bt_py_interfaces__msg__Node__SUCCEEDED = "SUCCEEDED";

/// Constant 'SUCCEED'.
static const char * const ros_bt_py_interfaces__msg__Node__SUCCEED = "SUCCEEDED";

/// Constant 'SUCCESS'.
static const char * const ros_bt_py_interfaces__msg__Node__SUCCESS = "SUCCEEDED";

/// Constant 'FAILED'.
static const char * const ros_bt_py_interfaces__msg__Node__FAILED = "FAILED";

/// Constant 'FAIL'.
static const char * const ros_bt_py_interfaces__msg__Node__FAIL = "FAILED";

/// Constant 'FAILURE'.
static const char * const ros_bt_py_interfaces__msg__Node__FAILURE = "FAILED";

/// Constant 'BROKEN'.
static const char * const ros_bt_py_interfaces__msg__Node__BROKEN = "BROKEN";

/// Constant 'PAUSED'.
static const char * const ros_bt_py_interfaces__msg__Node__PAUSED = "PAUSED";

/// Constant 'SHUTDOWN'.
static const char * const ros_bt_py_interfaces__msg__Node__SHUTDOWN = "SHUTDOWN";

// Include directives for member types
// Member 'module'
// Member 'node_class'
// Member 'version'
// Member 'name'
// Member 'child_names'
// Member 'state'
#include "rosidl_runtime_c/string.h"
// Member 'options'
// Member 'inputs'
// Member 'outputs'
#include "ros_bt_py_interfaces/msg/detail/node_data__struct.h"

/// Struct defined in msg/Node in the package ros_bt_py_interfaces.
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
  * The python module the node is from
 */
typedef struct ros_bt_py_interfaces__msg__Node
{
  rosidl_runtime_c__String module;
  /// The python class name of the node
  rosidl_runtime_c__String node_class;
  /// The version of this node
  rosidl_runtime_c__String version;
  /// The maximum amount of children this node supports, where -1 means
  /// infinite children
  int32_t max_children;
  /// These are run-time parameters
  /// Each node name must be unique in its tree. This does not count for
  /// subtrees, as they're handled separately.
  rosidl_runtime_c__String name;
  /// Order is important for child_names!
  rosidl_runtime_c__String__Sequence child_names;
  ros_bt_py_interfaces__msg__NodeData__Sequence options;
  ros_bt_py_interfaces__msg__NodeData__Sequence inputs;
  ros_bt_py_interfaces__msg__NodeData__Sequence outputs;
  /// Should be one of the constants below
  rosidl_runtime_c__String state;
} ros_bt_py_interfaces__msg__Node;

// Struct for a sequence of ros_bt_py_interfaces__msg__Node.
typedef struct ros_bt_py_interfaces__msg__Node__Sequence
{
  ros_bt_py_interfaces__msg__Node * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__msg__Node__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE__STRUCT_H_
