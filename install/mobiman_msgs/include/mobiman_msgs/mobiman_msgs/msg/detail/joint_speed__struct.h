// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobiman_msgs:msg/JointSpeed.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__JOINT_SPEED__STRUCT_H_
#define MOBIMAN_MSGS__MSG__DETAIL__JOINT_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'speed'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/JointSpeed in the package mobiman_msgs.
typedef struct mobiman_msgs__msg__JointSpeed
{
  rosidl_runtime_c__float__Sequence speed;
} mobiman_msgs__msg__JointSpeed;

// Struct for a sequence of mobiman_msgs__msg__JointSpeed.
typedef struct mobiman_msgs__msg__JointSpeed__Sequence
{
  mobiman_msgs__msg__JointSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobiman_msgs__msg__JointSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBIMAN_MSGS__MSG__DETAIL__JOINT_SPEED__STRUCT_H_
