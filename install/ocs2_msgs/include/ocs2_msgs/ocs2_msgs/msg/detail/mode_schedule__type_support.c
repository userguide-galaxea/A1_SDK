// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ocs2_msgs:msg/ModeSchedule.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ocs2_msgs/msg/detail/mode_schedule__rosidl_typesupport_introspection_c.h"
#include "ocs2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ocs2_msgs/msg/detail/mode_schedule__functions.h"
#include "ocs2_msgs/msg/detail/mode_schedule__struct.h"


// Include directives for member types
// Member `event_times`
// Member `mode_sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__ModeSchedule_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ocs2_msgs__msg__ModeSchedule__init(message_memory);
}

void ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__ModeSchedule_fini_function(void * message_memory)
{
  ocs2_msgs__msg__ModeSchedule__fini(message_memory);
}

size_t ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__size_function__ModeSchedule__event_times(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__get_const_function__ModeSchedule__event_times(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__get_function__ModeSchedule__event_times(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__fetch_function__ModeSchedule__event_times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__get_const_function__ModeSchedule__event_times(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__assign_function__ModeSchedule__event_times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__get_function__ModeSchedule__event_times(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__resize_function__ModeSchedule__event_times(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__size_function__ModeSchedule__mode_sequence(
  const void * untyped_member)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return member->size;
}

const void * ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__get_const_function__ModeSchedule__mode_sequence(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__get_function__ModeSchedule__mode_sequence(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__fetch_function__ModeSchedule__mode_sequence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__get_const_function__ModeSchedule__mode_sequence(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__assign_function__ModeSchedule__mode_sequence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__get_function__ModeSchedule__mode_sequence(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

bool ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__resize_function__ModeSchedule__mode_sequence(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  rosidl_runtime_c__int8__Sequence__fini(member);
  return rosidl_runtime_c__int8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__ModeSchedule_message_member_array[2] = {
  {
    "event_times",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs__msg__ModeSchedule, event_times),  // bytes offset in struct
    NULL,  // default value
    ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__size_function__ModeSchedule__event_times,  // size() function pointer
    ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__get_const_function__ModeSchedule__event_times,  // get_const(index) function pointer
    ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__get_function__ModeSchedule__event_times,  // get(index) function pointer
    ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__fetch_function__ModeSchedule__event_times,  // fetch(index, &value) function pointer
    ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__assign_function__ModeSchedule__event_times,  // assign(index, value) function pointer
    ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__resize_function__ModeSchedule__event_times  // resize(index) function pointer
  },
  {
    "mode_sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs__msg__ModeSchedule, mode_sequence),  // bytes offset in struct
    NULL,  // default value
    ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__size_function__ModeSchedule__mode_sequence,  // size() function pointer
    ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__get_const_function__ModeSchedule__mode_sequence,  // get_const(index) function pointer
    ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__get_function__ModeSchedule__mode_sequence,  // get(index) function pointer
    ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__fetch_function__ModeSchedule__mode_sequence,  // fetch(index, &value) function pointer
    ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__assign_function__ModeSchedule__mode_sequence,  // assign(index, value) function pointer
    ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__resize_function__ModeSchedule__mode_sequence  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__ModeSchedule_message_members = {
  "ocs2_msgs__msg",  // message namespace
  "ModeSchedule",  // message name
  2,  // number of fields
  sizeof(ocs2_msgs__msg__ModeSchedule),
  ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__ModeSchedule_message_member_array,  // message members
  ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__ModeSchedule_init_function,  // function to initialize message memory (memory has to be allocated)
  ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__ModeSchedule_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__ModeSchedule_message_type_support_handle = {
  0,
  &ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__ModeSchedule_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ocs2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ocs2_msgs, msg, ModeSchedule)() {
  if (!ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__ModeSchedule_message_type_support_handle.typesupport_identifier) {
    ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__ModeSchedule_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ocs2_msgs__msg__ModeSchedule__rosidl_typesupport_introspection_c__ModeSchedule_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
