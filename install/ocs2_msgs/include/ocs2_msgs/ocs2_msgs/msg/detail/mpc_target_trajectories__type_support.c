// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ocs2_msgs:msg/MpcTargetTrajectories.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ocs2_msgs/msg/detail/mpc_target_trajectories__rosidl_typesupport_introspection_c.h"
#include "ocs2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ocs2_msgs/msg/detail/mpc_target_trajectories__functions.h"
#include "ocs2_msgs/msg/detail/mpc_target_trajectories__struct.h"


// Include directives for member types
// Member `time_trajectory`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `state_trajectory`
#include "ocs2_msgs/msg/mpc_state.h"
// Member `state_trajectory`
#include "ocs2_msgs/msg/detail/mpc_state__rosidl_typesupport_introspection_c.h"
// Member `input_trajectory`
#include "ocs2_msgs/msg/mpc_input.h"
// Member `input_trajectory`
#include "ocs2_msgs/msg/detail/mpc_input__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__MpcTargetTrajectories_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ocs2_msgs__msg__MpcTargetTrajectories__init(message_memory);
}

void ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__MpcTargetTrajectories_fini_function(void * message_memory)
{
  ocs2_msgs__msg__MpcTargetTrajectories__fini(message_memory);
}

size_t ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__size_function__MpcTargetTrajectories__time_trajectory(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_const_function__MpcTargetTrajectories__time_trajectory(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_function__MpcTargetTrajectories__time_trajectory(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__fetch_function__MpcTargetTrajectories__time_trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_const_function__MpcTargetTrajectories__time_trajectory(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__assign_function__MpcTargetTrajectories__time_trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_function__MpcTargetTrajectories__time_trajectory(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__resize_function__MpcTargetTrajectories__time_trajectory(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__size_function__MpcTargetTrajectories__state_trajectory(
  const void * untyped_member)
{
  const ocs2_msgs__msg__MpcState__Sequence * member =
    (const ocs2_msgs__msg__MpcState__Sequence *)(untyped_member);
  return member->size;
}

const void * ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_const_function__MpcTargetTrajectories__state_trajectory(
  const void * untyped_member, size_t index)
{
  const ocs2_msgs__msg__MpcState__Sequence * member =
    (const ocs2_msgs__msg__MpcState__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_function__MpcTargetTrajectories__state_trajectory(
  void * untyped_member, size_t index)
{
  ocs2_msgs__msg__MpcState__Sequence * member =
    (ocs2_msgs__msg__MpcState__Sequence *)(untyped_member);
  return &member->data[index];
}

void ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__fetch_function__MpcTargetTrajectories__state_trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ocs2_msgs__msg__MpcState * item =
    ((const ocs2_msgs__msg__MpcState *)
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_const_function__MpcTargetTrajectories__state_trajectory(untyped_member, index));
  ocs2_msgs__msg__MpcState * value =
    (ocs2_msgs__msg__MpcState *)(untyped_value);
  *value = *item;
}

void ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__assign_function__MpcTargetTrajectories__state_trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ocs2_msgs__msg__MpcState * item =
    ((ocs2_msgs__msg__MpcState *)
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_function__MpcTargetTrajectories__state_trajectory(untyped_member, index));
  const ocs2_msgs__msg__MpcState * value =
    (const ocs2_msgs__msg__MpcState *)(untyped_value);
  *item = *value;
}

bool ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__resize_function__MpcTargetTrajectories__state_trajectory(
  void * untyped_member, size_t size)
{
  ocs2_msgs__msg__MpcState__Sequence * member =
    (ocs2_msgs__msg__MpcState__Sequence *)(untyped_member);
  ocs2_msgs__msg__MpcState__Sequence__fini(member);
  return ocs2_msgs__msg__MpcState__Sequence__init(member, size);
}

size_t ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__size_function__MpcTargetTrajectories__input_trajectory(
  const void * untyped_member)
{
  const ocs2_msgs__msg__MpcInput__Sequence * member =
    (const ocs2_msgs__msg__MpcInput__Sequence *)(untyped_member);
  return member->size;
}

const void * ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_const_function__MpcTargetTrajectories__input_trajectory(
  const void * untyped_member, size_t index)
{
  const ocs2_msgs__msg__MpcInput__Sequence * member =
    (const ocs2_msgs__msg__MpcInput__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_function__MpcTargetTrajectories__input_trajectory(
  void * untyped_member, size_t index)
{
  ocs2_msgs__msg__MpcInput__Sequence * member =
    (ocs2_msgs__msg__MpcInput__Sequence *)(untyped_member);
  return &member->data[index];
}

void ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__fetch_function__MpcTargetTrajectories__input_trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const ocs2_msgs__msg__MpcInput * item =
    ((const ocs2_msgs__msg__MpcInput *)
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_const_function__MpcTargetTrajectories__input_trajectory(untyped_member, index));
  ocs2_msgs__msg__MpcInput * value =
    (ocs2_msgs__msg__MpcInput *)(untyped_value);
  *value = *item;
}

void ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__assign_function__MpcTargetTrajectories__input_trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  ocs2_msgs__msg__MpcInput * item =
    ((ocs2_msgs__msg__MpcInput *)
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_function__MpcTargetTrajectories__input_trajectory(untyped_member, index));
  const ocs2_msgs__msg__MpcInput * value =
    (const ocs2_msgs__msg__MpcInput *)(untyped_value);
  *item = *value;
}

bool ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__resize_function__MpcTargetTrajectories__input_trajectory(
  void * untyped_member, size_t size)
{
  ocs2_msgs__msg__MpcInput__Sequence * member =
    (ocs2_msgs__msg__MpcInput__Sequence *)(untyped_member);
  ocs2_msgs__msg__MpcInput__Sequence__fini(member);
  return ocs2_msgs__msg__MpcInput__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__MpcTargetTrajectories_message_member_array[3] = {
  {
    "time_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs__msg__MpcTargetTrajectories, time_trajectory),  // bytes offset in struct
    NULL,  // default value
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__size_function__MpcTargetTrajectories__time_trajectory,  // size() function pointer
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_const_function__MpcTargetTrajectories__time_trajectory,  // get_const(index) function pointer
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_function__MpcTargetTrajectories__time_trajectory,  // get(index) function pointer
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__fetch_function__MpcTargetTrajectories__time_trajectory,  // fetch(index, &value) function pointer
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__assign_function__MpcTargetTrajectories__time_trajectory,  // assign(index, value) function pointer
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__resize_function__MpcTargetTrajectories__time_trajectory  // resize(index) function pointer
  },
  {
    "state_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs__msg__MpcTargetTrajectories, state_trajectory),  // bytes offset in struct
    NULL,  // default value
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__size_function__MpcTargetTrajectories__state_trajectory,  // size() function pointer
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_const_function__MpcTargetTrajectories__state_trajectory,  // get_const(index) function pointer
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_function__MpcTargetTrajectories__state_trajectory,  // get(index) function pointer
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__fetch_function__MpcTargetTrajectories__state_trajectory,  // fetch(index, &value) function pointer
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__assign_function__MpcTargetTrajectories__state_trajectory,  // assign(index, value) function pointer
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__resize_function__MpcTargetTrajectories__state_trajectory  // resize(index) function pointer
  },
  {
    "input_trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs__msg__MpcTargetTrajectories, input_trajectory),  // bytes offset in struct
    NULL,  // default value
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__size_function__MpcTargetTrajectories__input_trajectory,  // size() function pointer
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_const_function__MpcTargetTrajectories__input_trajectory,  // get_const(index) function pointer
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__get_function__MpcTargetTrajectories__input_trajectory,  // get(index) function pointer
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__fetch_function__MpcTargetTrajectories__input_trajectory,  // fetch(index, &value) function pointer
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__assign_function__MpcTargetTrajectories__input_trajectory,  // assign(index, value) function pointer
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__resize_function__MpcTargetTrajectories__input_trajectory  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__MpcTargetTrajectories_message_members = {
  "ocs2_msgs__msg",  // message namespace
  "MpcTargetTrajectories",  // message name
  3,  // number of fields
  sizeof(ocs2_msgs__msg__MpcTargetTrajectories),
  ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__MpcTargetTrajectories_message_member_array,  // message members
  ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__MpcTargetTrajectories_init_function,  // function to initialize message memory (memory has to be allocated)
  ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__MpcTargetTrajectories_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__MpcTargetTrajectories_message_type_support_handle = {
  0,
  &ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__MpcTargetTrajectories_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ocs2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ocs2_msgs, msg, MpcTargetTrajectories)() {
  ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__MpcTargetTrajectories_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ocs2_msgs, msg, MpcState)();
  ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__MpcTargetTrajectories_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ocs2_msgs, msg, MpcInput)();
  if (!ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__MpcTargetTrajectories_message_type_support_handle.typesupport_identifier) {
    ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__MpcTargetTrajectories_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ocs2_msgs__msg__MpcTargetTrajectories__rosidl_typesupport_introspection_c__MpcTargetTrajectories_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
