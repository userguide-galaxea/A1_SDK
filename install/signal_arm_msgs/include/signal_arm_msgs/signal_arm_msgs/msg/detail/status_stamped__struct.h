// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from signal_arm_msgs:msg/StatusStamped.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS_STAMPED__STRUCT_H_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS_STAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'data'
#include "signal_arm_msgs/msg/detail/status__struct.h"

/// Struct defined in msg/StatusStamped in the package signal_arm_msgs.
typedef struct signal_arm_msgs__msg__StatusStamped
{
  std_msgs__msg__Header header;
  signal_arm_msgs__msg__Status data;
} signal_arm_msgs__msg__StatusStamped;

// Struct for a sequence of signal_arm_msgs__msg__StatusStamped.
typedef struct signal_arm_msgs__msg__StatusStamped__Sequence
{
  signal_arm_msgs__msg__StatusStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} signal_arm_msgs__msg__StatusStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS_STAMPED__STRUCT_H_
