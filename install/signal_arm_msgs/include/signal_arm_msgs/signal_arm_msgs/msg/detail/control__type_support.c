// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from signal_arm_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "signal_arm_msgs/msg/detail/control__rosidl_typesupport_introspection_c.h"
#include "signal_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "signal_arm_msgs/msg/detail/control__functions.h"
#include "signal_arm_msgs/msg/detail/control__struct.h"


// Include directives for member types
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

void signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  signal_arm_msgs__msg__Control__init(message_memory);
}

void signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_fini_function(void * message_memory)
{
  signal_arm_msgs__msg__Control__fini(message_memory);
}

size_t signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__size_function__Control__p_des(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__p_des(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__p_des(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__fetch_function__Control__p_des(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__p_des(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__assign_function__Control__p_des(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__p_des(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__resize_function__Control__p_des(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__size_function__Control__v_des(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__v_des(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__v_des(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__fetch_function__Control__v_des(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__v_des(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__assign_function__Control__v_des(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__v_des(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__resize_function__Control__v_des(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__size_function__Control__kp(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__kp(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__kp(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__fetch_function__Control__kp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__kp(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__assign_function__Control__kp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__kp(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__resize_function__Control__kp(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__size_function__Control__kd(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__kd(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__kd(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__fetch_function__Control__kd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__kd(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__assign_function__Control__kd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__kd(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__resize_function__Control__kd(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__size_function__Control__t_ff(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__t_ff(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__t_ff(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__fetch_function__Control__t_ff(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__t_ff(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__assign_function__Control__t_ff(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__t_ff(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__resize_function__Control__t_ff(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_message_member_array[5] = {
  {
    "p_des",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs__msg__Control, p_des),  // bytes offset in struct
    NULL,  // default value
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__size_function__Control__p_des,  // size() function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__p_des,  // get_const(index) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__p_des,  // get(index) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__fetch_function__Control__p_des,  // fetch(index, &value) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__assign_function__Control__p_des,  // assign(index, value) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__resize_function__Control__p_des  // resize(index) function pointer
  },
  {
    "v_des",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs__msg__Control, v_des),  // bytes offset in struct
    NULL,  // default value
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__size_function__Control__v_des,  // size() function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__v_des,  // get_const(index) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__v_des,  // get(index) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__fetch_function__Control__v_des,  // fetch(index, &value) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__assign_function__Control__v_des,  // assign(index, value) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__resize_function__Control__v_des  // resize(index) function pointer
  },
  {
    "kp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs__msg__Control, kp),  // bytes offset in struct
    NULL,  // default value
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__size_function__Control__kp,  // size() function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__kp,  // get_const(index) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__kp,  // get(index) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__fetch_function__Control__kp,  // fetch(index, &value) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__assign_function__Control__kp,  // assign(index, value) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__resize_function__Control__kp  // resize(index) function pointer
  },
  {
    "kd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs__msg__Control, kd),  // bytes offset in struct
    NULL,  // default value
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__size_function__Control__kd,  // size() function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__kd,  // get_const(index) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__kd,  // get(index) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__fetch_function__Control__kd,  // fetch(index, &value) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__assign_function__Control__kd,  // assign(index, value) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__resize_function__Control__kd  // resize(index) function pointer
  },
  {
    "t_ff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs__msg__Control, t_ff),  // bytes offset in struct
    NULL,  // default value
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__size_function__Control__t_ff,  // size() function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_const_function__Control__t_ff,  // get_const(index) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__get_function__Control__t_ff,  // get(index) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__fetch_function__Control__t_ff,  // fetch(index, &value) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__assign_function__Control__t_ff,  // assign(index, value) function pointer
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__resize_function__Control__t_ff  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_message_members = {
  "signal_arm_msgs__msg",  // message namespace
  "Control",  // message name
  5,  // number of fields
  sizeof(signal_arm_msgs__msg__Control),
  signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_message_member_array,  // message members
  signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_init_function,  // function to initialize message memory (memory has to be allocated)
  signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_message_type_support_handle = {
  0,
  &signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_signal_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, signal_arm_msgs, msg, Control)() {
  if (!signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_message_type_support_handle.typesupport_identifier) {
    signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &signal_arm_msgs__msg__Control__rosidl_typesupport_introspection_c__Control_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
