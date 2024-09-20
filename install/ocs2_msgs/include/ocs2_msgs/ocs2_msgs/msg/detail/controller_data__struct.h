// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ocs2_msgs:msg/ControllerData.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__CONTROLLER_DATA__STRUCT_H_
#define OCS2_MSGS__MSG__DETAIL__CONTROLLER_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ControllerData in the package ocs2_msgs.
typedef struct ocs2_msgs__msg__ControllerData
{
  rosidl_runtime_c__float__Sequence data;
} ocs2_msgs__msg__ControllerData;

// Struct for a sequence of ocs2_msgs__msg__ControllerData.
typedef struct ocs2_msgs__msg__ControllerData__Sequence
{
  ocs2_msgs__msg__ControllerData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ocs2_msgs__msg__ControllerData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OCS2_MSGS__MSG__DETAIL__CONTROLLER_DATA__STRUCT_H_
