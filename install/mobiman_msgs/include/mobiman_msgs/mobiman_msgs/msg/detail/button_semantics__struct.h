// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobiman_msgs:msg/ButtonSemantics.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__BUTTON_SEMANTICS__STRUCT_H_
#define MOBIMAN_MSGS__MSG__DETAIL__BUTTON_SEMANTICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ButtonSemantics in the package mobiman_msgs.
typedef struct mobiman_msgs__msg__ButtonSemantics
{
  rosidl_runtime_c__String name;
  uint8_t button_status;
} mobiman_msgs__msg__ButtonSemantics;

// Struct for a sequence of mobiman_msgs__msg__ButtonSemantics.
typedef struct mobiman_msgs__msg__ButtonSemantics__Sequence
{
  mobiman_msgs__msg__ButtonSemantics * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobiman_msgs__msg__ButtonSemantics__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBIMAN_MSGS__MSG__DETAIL__BUTTON_SEMANTICS__STRUCT_H_
