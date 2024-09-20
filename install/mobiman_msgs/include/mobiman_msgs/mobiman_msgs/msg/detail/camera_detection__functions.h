// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mobiman_msgs:msg/CameraDetection.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__CAMERA_DETECTION__FUNCTIONS_H_
#define MOBIMAN_MSGS__MSG__DETAIL__CAMERA_DETECTION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mobiman_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mobiman_msgs/msg/detail/camera_detection__struct.h"

/// Initialize msg/CameraDetection message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mobiman_msgs__msg__CameraDetection
 * )) before or use
 * mobiman_msgs__msg__CameraDetection__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mobiman_msgs
bool
mobiman_msgs__msg__CameraDetection__init(mobiman_msgs__msg__CameraDetection * msg);

/// Finalize msg/CameraDetection message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mobiman_msgs
void
mobiman_msgs__msg__CameraDetection__fini(mobiman_msgs__msg__CameraDetection * msg);

/// Create msg/CameraDetection message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mobiman_msgs__msg__CameraDetection__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mobiman_msgs
mobiman_msgs__msg__CameraDetection *
mobiman_msgs__msg__CameraDetection__create();

/// Destroy msg/CameraDetection message.
/**
 * It calls
 * mobiman_msgs__msg__CameraDetection__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mobiman_msgs
void
mobiman_msgs__msg__CameraDetection__destroy(mobiman_msgs__msg__CameraDetection * msg);

/// Check for msg/CameraDetection message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mobiman_msgs
bool
mobiman_msgs__msg__CameraDetection__are_equal(const mobiman_msgs__msg__CameraDetection * lhs, const mobiman_msgs__msg__CameraDetection * rhs);

/// Copy a msg/CameraDetection message.
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
ROSIDL_GENERATOR_C_PUBLIC_mobiman_msgs
bool
mobiman_msgs__msg__CameraDetection__copy(
  const mobiman_msgs__msg__CameraDetection * input,
  mobiman_msgs__msg__CameraDetection * output);

/// Initialize array of msg/CameraDetection messages.
/**
 * It allocates the memory for the number of elements and calls
 * mobiman_msgs__msg__CameraDetection__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mobiman_msgs
bool
mobiman_msgs__msg__CameraDetection__Sequence__init(mobiman_msgs__msg__CameraDetection__Sequence * array, size_t size);

/// Finalize array of msg/CameraDetection messages.
/**
 * It calls
 * mobiman_msgs__msg__CameraDetection__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mobiman_msgs
void
mobiman_msgs__msg__CameraDetection__Sequence__fini(mobiman_msgs__msg__CameraDetection__Sequence * array);

/// Create array of msg/CameraDetection messages.
/**
 * It allocates the memory for the array and calls
 * mobiman_msgs__msg__CameraDetection__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mobiman_msgs
mobiman_msgs__msg__CameraDetection__Sequence *
mobiman_msgs__msg__CameraDetection__Sequence__create(size_t size);

/// Destroy array of msg/CameraDetection messages.
/**
 * It calls
 * mobiman_msgs__msg__CameraDetection__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mobiman_msgs
void
mobiman_msgs__msg__CameraDetection__Sequence__destroy(mobiman_msgs__msg__CameraDetection__Sequence * array);

/// Check for msg/CameraDetection message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mobiman_msgs
bool
mobiman_msgs__msg__CameraDetection__Sequence__are_equal(const mobiman_msgs__msg__CameraDetection__Sequence * lhs, const mobiman_msgs__msg__CameraDetection__Sequence * rhs);

/// Copy an array of msg/CameraDetection messages.
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
ROSIDL_GENERATOR_C_PUBLIC_mobiman_msgs
bool
mobiman_msgs__msg__CameraDetection__Sequence__copy(
  const mobiman_msgs__msg__CameraDetection__Sequence * input,
  mobiman_msgs__msg__CameraDetection__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOBIMAN_MSGS__MSG__DETAIL__CAMERA_DETECTION__FUNCTIONS_H_
