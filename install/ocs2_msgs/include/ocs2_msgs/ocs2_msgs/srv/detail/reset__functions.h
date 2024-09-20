// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ocs2_msgs:srv/Reset.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__SRV__DETAIL__RESET__FUNCTIONS_H_
#define OCS2_MSGS__SRV__DETAIL__RESET__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ocs2_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ocs2_msgs/srv/detail/reset__struct.h"

/// Initialize srv/Reset message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ocs2_msgs__srv__Reset_Request
 * )) before or use
 * ocs2_msgs__srv__Reset_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__srv__Reset_Request__init(ocs2_msgs__srv__Reset_Request * msg);

/// Finalize srv/Reset message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__srv__Reset_Request__fini(ocs2_msgs__srv__Reset_Request * msg);

/// Create srv/Reset message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ocs2_msgs__srv__Reset_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
ocs2_msgs__srv__Reset_Request *
ocs2_msgs__srv__Reset_Request__create();

/// Destroy srv/Reset message.
/**
 * It calls
 * ocs2_msgs__srv__Reset_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__srv__Reset_Request__destroy(ocs2_msgs__srv__Reset_Request * msg);

/// Check for srv/Reset message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__srv__Reset_Request__are_equal(const ocs2_msgs__srv__Reset_Request * lhs, const ocs2_msgs__srv__Reset_Request * rhs);

/// Copy a srv/Reset message.
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
ocs2_msgs__srv__Reset_Request__copy(
  const ocs2_msgs__srv__Reset_Request * input,
  ocs2_msgs__srv__Reset_Request * output);

/// Initialize array of srv/Reset messages.
/**
 * It allocates the memory for the number of elements and calls
 * ocs2_msgs__srv__Reset_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__srv__Reset_Request__Sequence__init(ocs2_msgs__srv__Reset_Request__Sequence * array, size_t size);

/// Finalize array of srv/Reset messages.
/**
 * It calls
 * ocs2_msgs__srv__Reset_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__srv__Reset_Request__Sequence__fini(ocs2_msgs__srv__Reset_Request__Sequence * array);

/// Create array of srv/Reset messages.
/**
 * It allocates the memory for the array and calls
 * ocs2_msgs__srv__Reset_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
ocs2_msgs__srv__Reset_Request__Sequence *
ocs2_msgs__srv__Reset_Request__Sequence__create(size_t size);

/// Destroy array of srv/Reset messages.
/**
 * It calls
 * ocs2_msgs__srv__Reset_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__srv__Reset_Request__Sequence__destroy(ocs2_msgs__srv__Reset_Request__Sequence * array);

/// Check for srv/Reset message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__srv__Reset_Request__Sequence__are_equal(const ocs2_msgs__srv__Reset_Request__Sequence * lhs, const ocs2_msgs__srv__Reset_Request__Sequence * rhs);

/// Copy an array of srv/Reset messages.
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
ocs2_msgs__srv__Reset_Request__Sequence__copy(
  const ocs2_msgs__srv__Reset_Request__Sequence * input,
  ocs2_msgs__srv__Reset_Request__Sequence * output);

/// Initialize srv/Reset message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ocs2_msgs__srv__Reset_Response
 * )) before or use
 * ocs2_msgs__srv__Reset_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__srv__Reset_Response__init(ocs2_msgs__srv__Reset_Response * msg);

/// Finalize srv/Reset message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__srv__Reset_Response__fini(ocs2_msgs__srv__Reset_Response * msg);

/// Create srv/Reset message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ocs2_msgs__srv__Reset_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
ocs2_msgs__srv__Reset_Response *
ocs2_msgs__srv__Reset_Response__create();

/// Destroy srv/Reset message.
/**
 * It calls
 * ocs2_msgs__srv__Reset_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__srv__Reset_Response__destroy(ocs2_msgs__srv__Reset_Response * msg);

/// Check for srv/Reset message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__srv__Reset_Response__are_equal(const ocs2_msgs__srv__Reset_Response * lhs, const ocs2_msgs__srv__Reset_Response * rhs);

/// Copy a srv/Reset message.
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
ocs2_msgs__srv__Reset_Response__copy(
  const ocs2_msgs__srv__Reset_Response * input,
  ocs2_msgs__srv__Reset_Response * output);

/// Initialize array of srv/Reset messages.
/**
 * It allocates the memory for the number of elements and calls
 * ocs2_msgs__srv__Reset_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__srv__Reset_Response__Sequence__init(ocs2_msgs__srv__Reset_Response__Sequence * array, size_t size);

/// Finalize array of srv/Reset messages.
/**
 * It calls
 * ocs2_msgs__srv__Reset_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__srv__Reset_Response__Sequence__fini(ocs2_msgs__srv__Reset_Response__Sequence * array);

/// Create array of srv/Reset messages.
/**
 * It allocates the memory for the array and calls
 * ocs2_msgs__srv__Reset_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
ocs2_msgs__srv__Reset_Response__Sequence *
ocs2_msgs__srv__Reset_Response__Sequence__create(size_t size);

/// Destroy array of srv/Reset messages.
/**
 * It calls
 * ocs2_msgs__srv__Reset_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
void
ocs2_msgs__srv__Reset_Response__Sequence__destroy(ocs2_msgs__srv__Reset_Response__Sequence * array);

/// Check for srv/Reset message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ocs2_msgs
bool
ocs2_msgs__srv__Reset_Response__Sequence__are_equal(const ocs2_msgs__srv__Reset_Response__Sequence * lhs, const ocs2_msgs__srv__Reset_Response__Sequence * rhs);

/// Copy an array of srv/Reset messages.
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
ocs2_msgs__srv__Reset_Response__Sequence__copy(
  const ocs2_msgs__srv__Reset_Response__Sequence * input,
  ocs2_msgs__srv__Reset_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OCS2_MSGS__SRV__DETAIL__RESET__FUNCTIONS_H_
