// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ocs2_msgs:msg/MpcObservation.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_OBSERVATION__FUNCTIONS_H_
#define OCS2_MSGS__MSG__DETAIL__MPC_OBSERVATION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ocs2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ocs2_msgs/msg/detail/mpc_observation__struct.h"

/// Initialize msg/MpcObservation message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ocs2_msgs__msg__MpcObservation
 * )) before or use
 * ocs2_msgs__msg__MpcObservation__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__msg__MpcObservation__init(ocs2_msgs__msg__MpcObservation * msg);

/// Finalize msg/MpcObservation message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__msg__MpcObservation__fini(ocs2_msgs__msg__MpcObservation * msg);

/// Create msg/MpcObservation message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ocs2_msgs__msg__MpcObservation__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
ocs2_msgs__msg__MpcObservation *
ocs2_msgs__msg__MpcObservation__create();

/// Destroy msg/MpcObservation message.
/**
 * It calls
 * ocs2_msgs__msg__MpcObservation__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__msg__MpcObservation__destroy(ocs2_msgs__msg__MpcObservation * msg);

/// Check for msg/MpcObservation message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__msg__MpcObservation__are_equal(const ocs2_msgs__msg__MpcObservation * lhs, const ocs2_msgs__msg__MpcObservation * rhs);

/// Copy a msg/MpcObservation message.
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
ocs2_msgs__msg__MpcObservation__copy(
  const ocs2_msgs__msg__MpcObservation * input,
  ocs2_msgs__msg__MpcObservation * output);

/// Initialize array of msg/MpcObservation messages.
/**
 * It allocates the memory for the number of elements and calls
 * ocs2_msgs__msg__MpcObservation__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__msg__MpcObservation__Sequence__init(ocs2_msgs__msg__MpcObservation__Sequence * array, size_t size);

/// Finalize array of msg/MpcObservation messages.
/**
 * It calls
 * ocs2_msgs__msg__MpcObservation__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__msg__MpcObservation__Sequence__fini(ocs2_msgs__msg__MpcObservation__Sequence * array);

/// Create array of msg/MpcObservation messages.
/**
 * It allocates the memory for the array and calls
 * ocs2_msgs__msg__MpcObservation__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
ocs2_msgs__msg__MpcObservation__Sequence *
ocs2_msgs__msg__MpcObservation__Sequence__create(size_t size);

/// Destroy array of msg/MpcObservation messages.
/**
 * It calls
 * ocs2_msgs__msg__MpcObservation__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__msg__MpcObservation__Sequence__destroy(ocs2_msgs__msg__MpcObservation__Sequence * array);

/// Check for msg/MpcObservation message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__msg__MpcObservation__Sequence__are_equal(const ocs2_msgs__msg__MpcObservation__Sequence * lhs, const ocs2_msgs__msg__MpcObservation__Sequence * rhs);

/// Copy an array of msg/MpcObservation messages.
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
ocs2_msgs__msg__MpcObservation__Sequence__copy(
  const ocs2_msgs__msg__MpcObservation__Sequence * input,
  ocs2_msgs__msg__MpcObservation__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_OBSERVATION__FUNCTIONS_H_
