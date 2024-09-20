// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobiman_msgs:msg/Mask.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__MASK__STRUCT_H_
#define MOBIMAN_MSGS__MSG__DETAIL__MASK__STRUCT_H_

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
// Member 'mask_types'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'instance_description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Mask in the package mobiman_msgs.
typedef struct mobiman_msgs__msg__Mask
{
  std_msgs__msg__Header header;
  uint16_t height;
  uint16_t width;
  /// size h * w, array of mask instance
  rosidl_runtime_c__uint8__Sequence data;
  /// size number of instance
  rosidl_runtime_c__uint8__Sequence mask_types;
  /// size number of instance
  rosidl_runtime_c__String__Sequence instance_description;
} mobiman_msgs__msg__Mask;

// Struct for a sequence of mobiman_msgs__msg__Mask.
typedef struct mobiman_msgs__msg__Mask__Sequence
{
  mobiman_msgs__msg__Mask * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobiman_msgs__msg__Mask__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBIMAN_MSGS__MSG__DETAIL__MASK__STRUCT_H_
