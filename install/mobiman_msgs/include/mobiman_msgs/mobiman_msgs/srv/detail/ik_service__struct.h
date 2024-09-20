// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobiman_msgs:srv/IKService.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__SRV__DETAIL__IK_SERVICE__STRUCT_H_
#define MOBIMAN_MSGS__SRV__DETAIL__IK_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/IKService in the package mobiman_msgs.
typedef struct mobiman_msgs__srv__IKService_Request
{
  geometry_msgs__msg__Pose pose;
} mobiman_msgs__srv__IKService_Request;

// Struct for a sequence of mobiman_msgs__srv__IKService_Request.
typedef struct mobiman_msgs__srv__IKService_Request__Sequence
{
  mobiman_msgs__srv__IKService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobiman_msgs__srv__IKService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'joint_states'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

/// Struct defined in srv/IKService in the package mobiman_msgs.
typedef struct mobiman_msgs__srv__IKService_Response
{
  sensor_msgs__msg__JointState joint_states;
} mobiman_msgs__srv__IKService_Response;

// Struct for a sequence of mobiman_msgs__srv__IKService_Response.
typedef struct mobiman_msgs__srv__IKService_Response__Sequence
{
  mobiman_msgs__srv__IKService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobiman_msgs__srv__IKService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBIMAN_MSGS__SRV__DETAIL__IK_SERVICE__STRUCT_H_
