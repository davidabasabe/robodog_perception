// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_bt_py_interfaces:msg/CapabilityIOBridgeData.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_IO_BRIDGE_DATA__STRUCT_H_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_IO_BRIDGE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INPUT'.
static const char * const ros_bt_py_interfaces__msg__CapabilityIOBridgeData__INPUT = "INPUT";

/// Constant 'OUTPUT'.
static const char * const ros_bt_py_interfaces__msg__CapabilityIOBridgeData__OUTPUT = "OUTPUT";

// Include directives for member types
// Member 'node_id'
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'bridge_data'
#include "ros_bt_py_interfaces/msg/detail/node_data__struct.h"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/CapabilityIOBridgeData in the package ros_bt_py_interfaces.
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
 */
typedef struct ros_bt_py_interfaces__msg__CapabilityIOBridgeData
{
  rosidl_runtime_c__String node_id;
  rosidl_runtime_c__String type;
  ros_bt_py_interfaces__msg__NodeData__Sequence bridge_data;
  builtin_interfaces__msg__Time timestamp;
} ros_bt_py_interfaces__msg__CapabilityIOBridgeData;

// Struct for a sequence of ros_bt_py_interfaces__msg__CapabilityIOBridgeData.
typedef struct ros_bt_py_interfaces__msg__CapabilityIOBridgeData__Sequence
{
  ros_bt_py_interfaces__msg__CapabilityIOBridgeData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_bt_py_interfaces__msg__CapabilityIOBridgeData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__CAPABILITY_IO_BRIDGE_DATA__STRUCT_H_
