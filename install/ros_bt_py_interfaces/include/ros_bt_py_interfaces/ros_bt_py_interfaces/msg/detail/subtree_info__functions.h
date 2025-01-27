// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros_bt_py_interfaces:msg/SubtreeInfo.idl
// generated code does not contain a copyright notice

#ifndef ROS_BT_PY_INTERFACES__MSG__DETAIL__SUBTREE_INFO__FUNCTIONS_H_
#define ROS_BT_PY_INTERFACES__MSG__DETAIL__SUBTREE_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros_bt_py_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "ros_bt_py_interfaces/msg/detail/subtree_info__struct.h"

/// Initialize msg/SubtreeInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros_bt_py_interfaces__msg__SubtreeInfo
 * )) before or use
 * ros_bt_py_interfaces__msg__SubtreeInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
bool
ros_bt_py_interfaces__msg__SubtreeInfo__init(ros_bt_py_interfaces__msg__SubtreeInfo * msg);

/// Finalize msg/SubtreeInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
void
ros_bt_py_interfaces__msg__SubtreeInfo__fini(ros_bt_py_interfaces__msg__SubtreeInfo * msg);

/// Create msg/SubtreeInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros_bt_py_interfaces__msg__SubtreeInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
ros_bt_py_interfaces__msg__SubtreeInfo *
ros_bt_py_interfaces__msg__SubtreeInfo__create();

/// Destroy msg/SubtreeInfo message.
/**
 * It calls
 * ros_bt_py_interfaces__msg__SubtreeInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
void
ros_bt_py_interfaces__msg__SubtreeInfo__destroy(ros_bt_py_interfaces__msg__SubtreeInfo * msg);

/// Check for msg/SubtreeInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
bool
ros_bt_py_interfaces__msg__SubtreeInfo__are_equal(const ros_bt_py_interfaces__msg__SubtreeInfo * lhs, const ros_bt_py_interfaces__msg__SubtreeInfo * rhs);

/// Copy a msg/SubtreeInfo message.
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
ros_bt_py_interfaces__msg__SubtreeInfo__copy(
  const ros_bt_py_interfaces__msg__SubtreeInfo * input,
  ros_bt_py_interfaces__msg__SubtreeInfo * output);

/// Initialize array of msg/SubtreeInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros_bt_py_interfaces__msg__SubtreeInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
bool
ros_bt_py_interfaces__msg__SubtreeInfo__Sequence__init(ros_bt_py_interfaces__msg__SubtreeInfo__Sequence * array, size_t size);

/// Finalize array of msg/SubtreeInfo messages.
/**
 * It calls
 * ros_bt_py_interfaces__msg__SubtreeInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
void
ros_bt_py_interfaces__msg__SubtreeInfo__Sequence__fini(ros_bt_py_interfaces__msg__SubtreeInfo__Sequence * array);

/// Create array of msg/SubtreeInfo messages.
/**
 * It allocates the memory for the array and calls
 * ros_bt_py_interfaces__msg__SubtreeInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
ros_bt_py_interfaces__msg__SubtreeInfo__Sequence *
ros_bt_py_interfaces__msg__SubtreeInfo__Sequence__create(size_t size);

/// Destroy array of msg/SubtreeInfo messages.
/**
 * It calls
 * ros_bt_py_interfaces__msg__SubtreeInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
void
ros_bt_py_interfaces__msg__SubtreeInfo__Sequence__destroy(ros_bt_py_interfaces__msg__SubtreeInfo__Sequence * array);

/// Check for msg/SubtreeInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros_bt_py_interfaces
bool
ros_bt_py_interfaces__msg__SubtreeInfo__Sequence__are_equal(const ros_bt_py_interfaces__msg__SubtreeInfo__Sequence * lhs, const ros_bt_py_interfaces__msg__SubtreeInfo__Sequence * rhs);

/// Copy an array of msg/SubtreeInfo messages.
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
ros_bt_py_interfaces__msg__SubtreeInfo__Sequence__copy(
  const ros_bt_py_interfaces__msg__SubtreeInfo__Sequence * input,
  ros_bt_py_interfaces__msg__SubtreeInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROS_BT_PY_INTERFACES__MSG__DETAIL__SUBTREE_INFO__FUNCTIONS_H_
