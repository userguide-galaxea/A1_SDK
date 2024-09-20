// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ocs2_msgs:srv/Reset.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__SRV__DETAIL__RESET__STRUCT_H_
#define OCS2_MSGS__SRV__DETAIL__RESET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'target_trajectories'
#include "ocs2_msgs/msg/detail/mpc_target_trajectories__struct.h"

/// Struct defined in srv/Reset in the package ocs2_msgs.
typedef struct ocs2_msgs__srv__Reset_Request
{
  bool reset;
  ocs2_msgs__msg__MpcTargetTrajectories target_trajectories;
} ocs2_msgs__srv__Reset_Request;

// Struct for a sequence of ocs2_msgs__srv__Reset_Request.
typedef struct ocs2_msgs__srv__Reset_Request__Sequence
{
  ocs2_msgs__srv__Reset_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ocs2_msgs__srv__Reset_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/Reset in the package ocs2_msgs.
typedef struct ocs2_msgs__srv__Reset_Response
{
  bool done;
} ocs2_msgs__srv__Reset_Response;

// Struct for a sequence of ocs2_msgs__srv__Reset_Response.
typedef struct ocs2_msgs__srv__Reset_Response__Sequence
{
  ocs2_msgs__srv__Reset_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ocs2_msgs__srv__Reset_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OCS2_MSGS__SRV__DETAIL__RESET__STRUCT_H_
