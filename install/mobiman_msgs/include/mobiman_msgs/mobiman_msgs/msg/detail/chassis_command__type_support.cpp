// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mobiman_msgs:msg/ChassisCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mobiman_msgs/msg/detail/chassis_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mobiman_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ChassisCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mobiman_msgs::msg::ChassisCommand(_init);
}

void ChassisCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mobiman_msgs::msg::ChassisCommand *>(message_memory);
  typed_message->~ChassisCommand();
}

size_t size_function__ChassisCommand__steer_angles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ChassisCommand__steer_angles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ChassisCommand__steer_angles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ChassisCommand__steer_angles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ChassisCommand__steer_angles(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ChassisCommand__steer_angles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ChassisCommand__steer_angles(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ChassisCommand__steer_angles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ChassisCommand__wheel_speed(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ChassisCommand__wheel_speed(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__ChassisCommand__wheel_speed(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__ChassisCommand__wheel_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__ChassisCommand__wheel_speed(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__ChassisCommand__wheel_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__ChassisCommand__wheel_speed(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__ChassisCommand__wheel_speed(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ChassisCommand_message_member_array[2] = {
  {
    "steer_angles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs::msg::ChassisCommand, steer_angles),  // bytes offset in struct
    nullptr,  // default value
    size_function__ChassisCommand__steer_angles,  // size() function pointer
    get_const_function__ChassisCommand__steer_angles,  // get_const(index) function pointer
    get_function__ChassisCommand__steer_angles,  // get(index) function pointer
    fetch_function__ChassisCommand__steer_angles,  // fetch(index, &value) function pointer
    assign_function__ChassisCommand__steer_angles,  // assign(index, value) function pointer
    resize_function__ChassisCommand__steer_angles  // resize(index) function pointer
  },
  {
    "wheel_speed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs::msg::ChassisCommand, wheel_speed),  // bytes offset in struct
    nullptr,  // default value
    size_function__ChassisCommand__wheel_speed,  // size() function pointer
    get_const_function__ChassisCommand__wheel_speed,  // get_const(index) function pointer
    get_function__ChassisCommand__wheel_speed,  // get(index) function pointer
    fetch_function__ChassisCommand__wheel_speed,  // fetch(index, &value) function pointer
    assign_function__ChassisCommand__wheel_speed,  // assign(index, value) function pointer
    resize_function__ChassisCommand__wheel_speed  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ChassisCommand_message_members = {
  "mobiman_msgs::msg",  // message namespace
  "ChassisCommand",  // message name
  2,  // number of fields
  sizeof(mobiman_msgs::msg::ChassisCommand),
  ChassisCommand_message_member_array,  // message members
  ChassisCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  ChassisCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ChassisCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ChassisCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mobiman_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mobiman_msgs::msg::ChassisCommand>()
{
  return &::mobiman_msgs::msg::rosidl_typesupport_introspection_cpp::ChassisCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mobiman_msgs, msg, ChassisCommand)() {
  return &::mobiman_msgs::msg::rosidl_typesupport_introspection_cpp::ChassisCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
