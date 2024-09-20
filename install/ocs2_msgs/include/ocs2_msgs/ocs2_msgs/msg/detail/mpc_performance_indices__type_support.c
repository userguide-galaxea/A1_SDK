// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ocs2_msgs:msg/MpcPerformanceIndices.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ocs2_msgs/msg/detail/mpc_performance_indices__rosidl_typesupport_introspection_c.h"
#include "ocs2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ocs2_msgs/msg/detail/mpc_performance_indices__functions.h"
#include "ocs2_msgs/msg/detail/mpc_performance_indices__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ocs2_msgs__msg__MpcPerformanceIndices__rosidl_typesupport_introspection_c__MpcPerformanceIndices_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ocs2_msgs__msg__MpcPerformanceIndices__init(message_memory);
}

void ocs2_msgs__msg__MpcPerformanceIndices__rosidl_typesupport_introspection_c__MpcPerformanceIndices_fini_function(void * message_memory)
{
  ocs2_msgs__msg__MpcPerformanceIndices__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ocs2_msgs__msg__MpcPerformanceIndices__rosidl_typesupport_introspection_c__MpcPerformanceIndices_message_member_array[7] = {
  {
    "init_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs__msg__MpcPerformanceIndices, init_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "merit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs__msg__MpcPerformanceIndices, merit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs__msg__MpcPerformanceIndices, cost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dynamics_violation_sse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs__msg__MpcPerformanceIndices, dynamics_violation_sse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "equality_constraints_sse",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs__msg__MpcPerformanceIndices, equality_constraints_sse),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "equality_lagrangian",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs__msg__MpcPerformanceIndices, equality_lagrangian),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inequality_lagrangian",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs__msg__MpcPerformanceIndices, inequality_lagrangian),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ocs2_msgs__msg__MpcPerformanceIndices__rosidl_typesupport_introspection_c__MpcPerformanceIndices_message_members = {
  "ocs2_msgs__msg",  // message namespace
  "MpcPerformanceIndices",  // message name
  7,  // number of fields
  sizeof(ocs2_msgs__msg__MpcPerformanceIndices),
  ocs2_msgs__msg__MpcPerformanceIndices__rosidl_typesupport_introspection_c__MpcPerformanceIndices_message_member_array,  // message members
  ocs2_msgs__msg__MpcPerformanceIndices__rosidl_typesupport_introspection_c__MpcPerformanceIndices_init_function,  // function to initialize message memory (memory has to be allocated)
  ocs2_msgs__msg__MpcPerformanceIndices__rosidl_typesupport_introspection_c__MpcPerformanceIndices_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ocs2_msgs__msg__MpcPerformanceIndices__rosidl_typesupport_introspection_c__MpcPerformanceIndices_message_type_support_handle = {
  0,
  &ocs2_msgs__msg__MpcPerformanceIndices__rosidl_typesupport_introspection_c__MpcPerformanceIndices_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ocs2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ocs2_msgs, msg, MpcPerformanceIndices)() {
  if (!ocs2_msgs__msg__MpcPerformanceIndices__rosidl_typesupport_introspection_c__MpcPerformanceIndices_message_type_support_handle.typesupport_identifier) {
    ocs2_msgs__msg__MpcPerformanceIndices__rosidl_typesupport_introspection_c__MpcPerformanceIndices_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ocs2_msgs__msg__MpcPerformanceIndices__rosidl_typesupport_introspection_c__MpcPerformanceIndices_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
