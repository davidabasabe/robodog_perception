// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros_bt_py_interfaces:msg/NodeDataWiring.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_WIRING__FUNCTIONS_H_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_WIRING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros_bt_py_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "ros_bt_py_interfaces/msg/detail/node_data_wiring__struct.h"

/// Initialize msg/NodeDataWiring message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_bt_py_interfaces__msg__NodeDataWiring
 * )) before or use
 * ros_bt_py_interfaces__msg__NodeDataWiring__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
bool
ros_bt_py_interfaces__msg__NodeDataWiring__init(ros_bt_py_interfaces__msg__NodeDataWiring * msg);

/// Finalize msg/NodeDataWiring message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
void
ros_bt_py_interfaces__msg__NodeDataWiring__fini(ros_bt_py_interfaces__msg__NodeDataWiring * msg);

/// Create msg/NodeDataWiring message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_bt_py_interfaces__msg__NodeDataWiring__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
ros_bt_py_interfaces__msg__NodeDataWiring *
ros_bt_py_interfaces__msg__NodeDataWiring__create();

/// Destroy msg/NodeDataWiring message.
/**
 * It calls
 * ros_bt_py_interfaces__msg__NodeDataWiring__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
void
ros_bt_py_interfaces__msg__NodeDataWiring__destroy(ros_bt_py_interfaces__msg__NodeDataWiring * msg);

/// Check for msg/NodeDataWiring message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
bool
ros_bt_py_interfaces__msg__NodeDataWiring__are_equal(const ros_bt_py_interfaces__msg__NodeDataWiring * lhs, const ros_bt_py_interfaces__msg__NodeDataWiring * rhs);

/// Copy a msg/NodeDataWiring message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
bool
ros_bt_py_interfaces__msg__NodeDataWiring__copy(
  const ros_bt_py_interfaces__msg__NodeDataWiring * input,
  ros_bt_py_interfaces__msg__NodeDataWiring * output);

/// Initialize array of msg/NodeDataWiring messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_bt_py_interfaces__msg__NodeDataWiring__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
bool
ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__init(ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * array, size_t size);

/// Finalize array of msg/NodeDataWiring messages.
/**
 * It calls
 * ros_bt_py_interfaces__msg__NodeDataWiring__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
void
ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__fini(ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * array);

/// Create array of msg/NodeDataWiring messages.
/**
 * It allocates the memory for the array and calls
 * ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
ros_bt_py_interfaces__msg__NodeDataWiring__Sequence *
ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__create(size_t size);

/// Destroy array of msg/NodeDataWiring messages.
/**
 * It calls
 * ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
void
ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__destroy(ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * array);

/// Check for msg/NodeDataWiring message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
bool
ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__are_equal(const ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * lhs, const ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * rhs);

/// Copy an array of msg/NodeDataWiring messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
bool
ros_bt_py_interfaces__msg__NodeDataWiring__Sequence__copy(
  const ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * input,
  ros_bt_py_interfaces__msg__NodeDataWiring__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__NODE_DATA_WIRING__FUNCTIONS_H_
