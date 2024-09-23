// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from signal_arm_msgs:msg/MotorError.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__MOTOR_ERROR__FUNCTIONS_H_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__MOTOR_ERROR__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "signal_arm_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "signal_arm_msgs/msg/detail/motor_error__struct.h"

/// Initialize msg/MotorError message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * signal_arm_msgs__msg__MotorError
 * )) before or use
 * signal_arm_msgs__msg__MotorError__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_arm_msgs
bool
signal_arm_msgs__msg__MotorError__init(signal_arm_msgs__msg__MotorError * msg);

/// Finalize msg/MotorError message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_arm_msgs
void
signal_arm_msgs__msg__MotorError__fini(signal_arm_msgs__msg__MotorError * msg);

/// Create msg/MotorError message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * signal_arm_msgs__msg__MotorError__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_arm_msgs
signal_arm_msgs__msg__MotorError *
signal_arm_msgs__msg__MotorError__create();

/// Destroy msg/MotorError message.
/**
 * It calls
 * signal_arm_msgs__msg__MotorError__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_arm_msgs
void
signal_arm_msgs__msg__MotorError__destroy(signal_arm_msgs__msg__MotorError * msg);

/// Check for msg/MotorError message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_arm_msgs
bool
signal_arm_msgs__msg__MotorError__are_equal(const signal_arm_msgs__msg__MotorError * lhs, const signal_arm_msgs__msg__MotorError * rhs);

/// Copy a msg/MotorError message.
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
ROSIDL_GENERATOR_C_PUBLIC_signal_arm_msgs
bool
signal_arm_msgs__msg__MotorError__copy(
  const signal_arm_msgs__msg__MotorError * input,
  signal_arm_msgs__msg__MotorError * output);

/// Initialize array of msg/MotorError messages.
/**
 * It allocates the memory for the number of elements and calls
 * signal_arm_msgs__msg__MotorError__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_arm_msgs
bool
signal_arm_msgs__msg__MotorError__Sequence__init(signal_arm_msgs__msg__MotorError__Sequence * array, size_t size);

/// Finalize array of msg/MotorError messages.
/**
 * It calls
 * signal_arm_msgs__msg__MotorError__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_arm_msgs
void
signal_arm_msgs__msg__MotorError__Sequence__fini(signal_arm_msgs__msg__MotorError__Sequence * array);

/// Create array of msg/MotorError messages.
/**
 * It allocates the memory for the array and calls
 * signal_arm_msgs__msg__MotorError__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_arm_msgs
signal_arm_msgs__msg__MotorError__Sequence *
signal_arm_msgs__msg__MotorError__Sequence__create(size_t size);

/// Destroy array of msg/MotorError messages.
/**
 * It calls
 * signal_arm_msgs__msg__MotorError__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_arm_msgs
void
signal_arm_msgs__msg__MotorError__Sequence__destroy(signal_arm_msgs__msg__MotorError__Sequence * array);

/// Check for msg/MotorError message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_signal_arm_msgs
bool
signal_arm_msgs__msg__MotorError__Sequence__are_equal(const signal_arm_msgs__msg__MotorError__Sequence * lhs, const signal_arm_msgs__msg__MotorError__Sequence * rhs);

/// Copy an array of msg/MotorError messages.
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
ROSIDL_GENERATOR_C_PUBLIC_signal_arm_msgs
bool
signal_arm_msgs__msg__MotorError__Sequence__copy(
  const signal_arm_msgs__msg__MotorError__Sequence * input,
  signal_arm_msgs__msg__MotorError__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__MOTOR_ERROR__FUNCTIONS_H_