// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from signal_arm_msgs:msg/ArmControl.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "signal_arm_msgs/msg/detail/arm_control__rosidl_typesupport_introspection_c.h"
#include "signal_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "signal_arm_msgs/msg/detail/arm_control__functions.h"
#include "signal_arm_msgs/msg/detail/arm_control__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `p_des`
// Member `v_des`
// Member `kp`
// Member `kd`
// Member `t_ff`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__ArmControl_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  signal_arm_msgs__msg__ArmControl__init(message_memory);
}

void signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__ArmControl_fini_function(void * message_memory)
{
  signal_arm_msgs__msg__ArmControl__fini(message_memory);
}

size_t signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__size_function__ArmControl__p_des(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_const_function__ArmControl__p_des(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_function__ArmControl__p_des(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__fetch_function__ArmControl__p_des(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_const_function__ArmControl__p_des(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__assign_function__ArmControl__p_des(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_function__ArmControl__p_des(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__resize_function__ArmControl__p_des(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__size_function__ArmControl__v_des(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_const_function__ArmControl__v_des(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_function__ArmControl__v_des(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__fetch_function__ArmControl__v_des(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_const_function__ArmControl__v_des(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__assign_function__ArmControl__v_des(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_function__ArmControl__v_des(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__resize_function__ArmControl__v_des(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__size_function__ArmControl__kp(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_const_function__ArmControl__kp(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_function__ArmControl__kp(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__fetch_function__ArmControl__kp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_const_function__ArmControl__kp(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__assign_function__ArmControl__kp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_function__ArmControl__kp(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__resize_function__ArmControl__kp(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__size_function__ArmControl__kd(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_const_function__ArmControl__kd(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_function__ArmControl__kd(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__fetch_function__ArmControl__kd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_const_function__ArmControl__kd(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__assign_function__ArmControl__kd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_function__ArmControl__kd(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__resize_function__ArmControl__kd(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__size_function__ArmControl__t_ff(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_const_function__ArmControl__t_ff(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_function__ArmControl__t_ff(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__fetch_function__ArmControl__t_ff(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_const_function__ArmControl__t_ff(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__assign_function__ArmControl__t_ff(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_function__ArmControl__t_ff(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__resize_function__ArmControl__t_ff(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__ArmControl_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs__msg__ArmControl, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "p_des",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs__msg__ArmControl, p_des),  // bytes offset in struct
    NULL,  // default value
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__size_function__ArmControl__p_des,  // size() function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_const_function__ArmControl__p_des,  // get_const(index) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_function__ArmControl__p_des,  // get(index) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__fetch_function__ArmControl__p_des,  // fetch(index, &value) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__assign_function__ArmControl__p_des,  // assign(index, value) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__resize_function__ArmControl__p_des  // resize(index) function pointer
  },
  {
    "v_des",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs__msg__ArmControl, v_des),  // bytes offset in struct
    NULL,  // default value
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__size_function__ArmControl__v_des,  // size() function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_const_function__ArmControl__v_des,  // get_const(index) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_function__ArmControl__v_des,  // get(index) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__fetch_function__ArmControl__v_des,  // fetch(index, &value) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__assign_function__ArmControl__v_des,  // assign(index, value) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__resize_function__ArmControl__v_des  // resize(index) function pointer
  },
  {
    "kp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs__msg__ArmControl, kp),  // bytes offset in struct
    NULL,  // default value
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__size_function__ArmControl__kp,  // size() function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_const_function__ArmControl__kp,  // get_const(index) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_function__ArmControl__kp,  // get(index) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__fetch_function__ArmControl__kp,  // fetch(index, &value) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__assign_function__ArmControl__kp,  // assign(index, value) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__resize_function__ArmControl__kp  // resize(index) function pointer
  },
  {
    "kd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs__msg__ArmControl, kd),  // bytes offset in struct
    NULL,  // default value
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__size_function__ArmControl__kd,  // size() function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_const_function__ArmControl__kd,  // get_const(index) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_function__ArmControl__kd,  // get(index) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__fetch_function__ArmControl__kd,  // fetch(index, &value) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__assign_function__ArmControl__kd,  // assign(index, value) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__resize_function__ArmControl__kd  // resize(index) function pointer
  },
  {
    "t_ff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs__msg__ArmControl, t_ff),  // bytes offset in struct
    NULL,  // default value
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__size_function__ArmControl__t_ff,  // size() function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_const_function__ArmControl__t_ff,  // get_const(index) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__get_function__ArmControl__t_ff,  // get(index) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__fetch_function__ArmControl__t_ff,  // fetch(index, &value) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__assign_function__ArmControl__t_ff,  // assign(index, value) function pointer
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__resize_function__ArmControl__t_ff  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs__msg__ArmControl, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__ArmControl_message_members = {
  "signal_arm_msgs__msg",  // message namespace
  "ArmControl",  // message name
  7,  // number of fields
  sizeof(signal_arm_msgs__msg__ArmControl),
  signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__ArmControl_message_member_array,  // message members
  signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__ArmControl_init_function,  // function to initialize message memory (memory has to be allocated)
  signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__ArmControl_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__ArmControl_message_type_support_handle = {
  0,
  &signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__ArmControl_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_signal_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, signal_arm_msgs, msg, ArmControl)() {
  signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__ArmControl_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__ArmControl_message_type_support_handle.typesupport_identifier) {
    signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__ArmControl_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &signal_arm_msgs__msg__ArmControl__rosidl_typesupport_introspection_c__ArmControl_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
