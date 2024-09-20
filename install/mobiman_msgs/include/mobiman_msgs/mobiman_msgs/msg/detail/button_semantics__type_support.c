// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mobiman_msgs:msg/ButtonSemantics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mobiman_msgs/msg/detail/button_semantics__rosidl_typesupport_introspection_c.h"
#include "mobiman_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mobiman_msgs/msg/detail/button_semantics__functions.h"
#include "mobiman_msgs/msg/detail/button_semantics__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mobiman_msgs__msg__ButtonSemantics__rosidl_typesupport_introspection_c__ButtonSemantics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mobiman_msgs__msg__ButtonSemantics__init(message_memory);
}

void mobiman_msgs__msg__ButtonSemantics__rosidl_typesupport_introspection_c__ButtonSemantics_fini_function(void * message_memory)
{
  mobiman_msgs__msg__ButtonSemantics__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mobiman_msgs__msg__ButtonSemantics__rosidl_typesupport_introspection_c__ButtonSemantics_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs__msg__ButtonSemantics, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "button_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs__msg__ButtonSemantics, button_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mobiman_msgs__msg__ButtonSemantics__rosidl_typesupport_introspection_c__ButtonSemantics_message_members = {
  "mobiman_msgs__msg",  // message namespace
  "ButtonSemantics",  // message name
  2,  // number of fields
  sizeof(mobiman_msgs__msg__ButtonSemantics),
  mobiman_msgs__msg__ButtonSemantics__rosidl_typesupport_introspection_c__ButtonSemantics_message_member_array,  // message members
  mobiman_msgs__msg__ButtonSemantics__rosidl_typesupport_introspection_c__ButtonSemantics_init_function,  // function to initialize message memory (memory has to be allocated)
  mobiman_msgs__msg__ButtonSemantics__rosidl_typesupport_introspection_c__ButtonSemantics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mobiman_msgs__msg__ButtonSemantics__rosidl_typesupport_introspection_c__ButtonSemantics_message_type_support_handle = {
  0,
  &mobiman_msgs__msg__ButtonSemantics__rosidl_typesupport_introspection_c__ButtonSemantics_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mobiman_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mobiman_msgs, msg, ButtonSemantics)() {
  if (!mobiman_msgs__msg__ButtonSemantics__rosidl_typesupport_introspection_c__ButtonSemantics_message_type_support_handle.typesupport_identifier) {
    mobiman_msgs__msg__ButtonSemantics__rosidl_typesupport_introspection_c__ButtonSemantics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mobiman_msgs__msg__ButtonSemantics__rosidl_typesupport_introspection_c__ButtonSemantics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
