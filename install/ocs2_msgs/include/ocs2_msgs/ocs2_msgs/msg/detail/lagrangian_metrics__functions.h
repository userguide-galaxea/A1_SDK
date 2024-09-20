// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ocs2_msgs:msg/LagrangianMetrics.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__LAGRANGIAN_METRICS__FUNCTIONS_H_
#define OCS2_MSGS__MSG__DETAIL__LAGRANGIAN_METRICS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ocs2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ocs2_msgs/msg/detail/lagrangian_metrics__struct.h"

/// Initialize msg/LagrangianMetrics message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ocs2_msgs__msg__LagrangianMetrics
 * )) before or use
 * ocs2_msgs__msg__LagrangianMetrics__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__msg__LagrangianMetrics__init(ocs2_msgs__msg__LagrangianMetrics * msg);

/// Finalize msg/LagrangianMetrics message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__msg__LagrangianMetrics__fini(ocs2_msgs__msg__LagrangianMetrics * msg);

/// Create msg/LagrangianMetrics message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ocs2_msgs__msg__LagrangianMetrics__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
ocs2_msgs__msg__LagrangianMetrics *
ocs2_msgs__msg__LagrangianMetrics__create();

/// Destroy msg/LagrangianMetrics message.
/**
 * It calls
 * ocs2_msgs__msg__LagrangianMetrics__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__msg__LagrangianMetrics__destroy(ocs2_msgs__msg__LagrangianMetrics * msg);

/// Check for msg/LagrangianMetrics message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__msg__LagrangianMetrics__are_equal(const ocs2_msgs__msg__LagrangianMetrics * lhs, const ocs2_msgs__msg__LagrangianMetrics * rhs);

/// Copy a msg/LagrangianMetrics message.
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
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__msg__LagrangianMetrics__copy(
  const ocs2_msgs__msg__LagrangianMetrics * input,
  ocs2_msgs__msg__LagrangianMetrics * output);

/// Initialize array of msg/LagrangianMetrics messages.
/**
 * It allocates the memory for the number of elements and calls
 * ocs2_msgs__msg__LagrangianMetrics__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__msg__LagrangianMetrics__Sequence__init(ocs2_msgs__msg__LagrangianMetrics__Sequence * array, size_t size);

/// Finalize array of msg/LagrangianMetrics messages.
/**
 * It calls
 * ocs2_msgs__msg__LagrangianMetrics__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__msg__LagrangianMetrics__Sequence__fini(ocs2_msgs__msg__LagrangianMetrics__Sequence * array);

/// Create array of msg/LagrangianMetrics messages.
/**
 * It allocates the memory for the array and calls
 * ocs2_msgs__msg__LagrangianMetrics__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
ocs2_msgs__msg__LagrangianMetrics__Sequence *
ocs2_msgs__msg__LagrangianMetrics__Sequence__create(size_t size);

/// Destroy array of msg/LagrangianMetrics messages.
/**
 * It calls
 * ocs2_msgs__msg__LagrangianMetrics__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__msg__LagrangianMetrics__Sequence__destroy(ocs2_msgs__msg__LagrangianMetrics__Sequence * array);

/// Check for msg/LagrangianMetrics message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__msg__LagrangianMetrics__Sequence__are_equal(const ocs2_msgs__msg__LagrangianMetrics__Sequence * lhs, const ocs2_msgs__msg__LagrangianMetrics__Sequence * rhs);

/// Copy an array of msg/LagrangianMetrics messages.
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
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__msg__LagrangianMetrics__Sequence__copy(
  const ocs2_msgs__msg__LagrangianMetrics__Sequence * input,
  ocs2_msgs__msg__LagrangianMetrics__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OCS2_MSGS__MSG__DETAIL__LAGRANGIAN_METRICS__FUNCTIONS_H_
