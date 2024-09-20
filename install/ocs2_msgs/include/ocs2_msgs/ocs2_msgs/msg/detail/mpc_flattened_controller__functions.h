// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ocs2_msgs:msg/MpcFlattenedController.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_FLATTENED_CONTROLLER__FUNCTIONS_H_
#define OCS2_MSGS__MSG__DETAIL__MPC_FLATTENED_CONTROLLER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ocs2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ocs2_msgs/msg/detail/mpc_flattened_controller__struct.h"

/// Initialize msg/MpcFlattenedController message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ocs2_msgs__msg__MpcFlattenedController
 * )) before or use
 * ocs2_msgs__msg__MpcFlattenedController__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__msg__MpcFlattenedController__init(ocs2_msgs__msg__MpcFlattenedController * msg);

/// Finalize msg/MpcFlattenedController message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__msg__MpcFlattenedController__fini(ocs2_msgs__msg__MpcFlattenedController * msg);

/// Create msg/MpcFlattenedController message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ocs2_msgs__msg__MpcFlattenedController__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
ocs2_msgs__msg__MpcFlattenedController *
ocs2_msgs__msg__MpcFlattenedController__create();

/// Destroy msg/MpcFlattenedController message.
/**
 * It calls
 * ocs2_msgs__msg__MpcFlattenedController__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__msg__MpcFlattenedController__destroy(ocs2_msgs__msg__MpcFlattenedController * msg);

/// Check for msg/MpcFlattenedController message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__msg__MpcFlattenedController__are_equal(const ocs2_msgs__msg__MpcFlattenedController * lhs, const ocs2_msgs__msg__MpcFlattenedController * rhs);

/// Copy a msg/MpcFlattenedController message.
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
ocs2_msgs__msg__MpcFlattenedController__copy(
  const ocs2_msgs__msg__MpcFlattenedController * input,
  ocs2_msgs__msg__MpcFlattenedController * output);

/// Initialize array of msg/MpcFlattenedController messages.
/**
 * It allocates the memory for the number of elements and calls
 * ocs2_msgs__msg__MpcFlattenedController__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__msg__MpcFlattenedController__Sequence__init(ocs2_msgs__msg__MpcFlattenedController__Sequence * array, size_t size);

/// Finalize array of msg/MpcFlattenedController messages.
/**
 * It calls
 * ocs2_msgs__msg__MpcFlattenedController__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__msg__MpcFlattenedController__Sequence__fini(ocs2_msgs__msg__MpcFlattenedController__Sequence * array);

/// Create array of msg/MpcFlattenedController messages.
/**
 * It allocates the memory for the array and calls
 * ocs2_msgs__msg__MpcFlattenedController__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
ocs2_msgs__msg__MpcFlattenedController__Sequence *
ocs2_msgs__msg__MpcFlattenedController__Sequence__create(size_t size);

/// Destroy array of msg/MpcFlattenedController messages.
/**
 * It calls
 * ocs2_msgs__msg__MpcFlattenedController__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__msg__MpcFlattenedController__Sequence__destroy(ocs2_msgs__msg__MpcFlattenedController__Sequence * array);

/// Check for msg/MpcFlattenedController message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__msg__MpcFlattenedController__Sequence__are_equal(const ocs2_msgs__msg__MpcFlattenedController__Sequence * lhs, const ocs2_msgs__msg__MpcFlattenedController__Sequence * rhs);

/// Copy an array of msg/MpcFlattenedController messages.
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
ocs2_msgs__msg__MpcFlattenedController__Sequence__copy(
  const ocs2_msgs__msg__MpcFlattenedController__Sequence * input,
  ocs2_msgs__msg__MpcFlattenedController__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_FLATTENED_CONTROLLER__FUNCTIONS_H_
