// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ocs2_msgs:msg/MpcPerformanceIndices.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_PERFORMANCE_INDICES__STRUCT_H_
#define OCS2_MSGS__MSG__DETAIL__MPC_PERFORMANCE_INDICES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/MpcPerformanceIndices in the package ocs2_msgs.
/**
  * MPC performance indices
 */
typedef struct ocs2_msgs__msg__MpcPerformanceIndices
{
  float init_time;
  float merit;
  float cost;
  float dynamics_violation_sse;
  float equality_constraints_sse;
  float equality_lagrangian;
  float inequality_lagrangian;
} ocs2_msgs__msg__MpcPerformanceIndices;

// Struct for a sequence of ocs2_msgs__msg__MpcPerformanceIndices.
typedef struct ocs2_msgs__msg__MpcPerformanceIndices__Sequence
{
  ocs2_msgs__msg__MpcPerformanceIndices * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ocs2_msgs__msg__MpcPerformanceIndices__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_PERFORMANCE_INDICES__STRUCT_H_
