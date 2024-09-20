// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from signal_arm_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "signal_arm_msgs/msg/detail/status__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace signal_arm_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Status_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) signal_arm_msgs::msg::Status(_init);
}

void Status_fini_function(void * message_memory)
{
  auto typed_message = static_cast<signal_arm_msgs::msg::Status *>(message_memory);
  typed_message->~Status();
}

size_t size_function__Status__name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Status__name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__Status__name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__Status__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__Status__name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__Status__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__Status__name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__Status__name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Status__motor_errors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<signal_arm_msgs::msg::MotorError> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Status__motor_errors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<signal_arm_msgs::msg::MotorError> *>(untyped_member);
  return &member[index];
}

void * get_function__Status__motor_errors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<signal_arm_msgs::msg::MotorError> *>(untyped_member);
  return &member[index];
}

void fetch_function__Status__motor_errors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const signal_arm_msgs::msg::MotorError *>(
    get_const_function__Status__motor_errors(untyped_member, index));
  auto & value = *reinterpret_cast<signal_arm_msgs::msg::MotorError *>(untyped_value);
  value = item;
}

void assign_function__Status__motor_errors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<signal_arm_msgs::msg::MotorError *>(
    get_function__Status__motor_errors(untyped_member, index));
  const auto & value = *reinterpret_cast<const signal_arm_msgs::msg::MotorError *>(untyped_value);
  item = value;
}

void resize_function__Status__motor_errors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<signal_arm_msgs::msg::MotorError> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Status_message_member_array[2] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs::msg::Status, name),  // bytes offset in struct
    nullptr,  // default value
    size_function__Status__name,  // size() function pointer
    get_const_function__Status__name,  // get_const(index) function pointer
    get_function__Status__name,  // get(index) function pointer
    fetch_function__Status__name,  // fetch(index, &value) function pointer
    assign_function__Status__name,  // assign(index, value) function pointer
    resize_function__Status__name  // resize(index) function pointer
  },
  {
    "motor_errors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<signal_arm_msgs::msg::MotorError>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs::msg::Status, motor_errors),  // bytes offset in struct
    nullptr,  // default value
    size_function__Status__motor_errors,  // size() function pointer
    get_const_function__Status__motor_errors,  // get_const(index) function pointer
    get_function__Status__motor_errors,  // get(index) function pointer
    fetch_function__Status__motor_errors,  // fetch(index, &value) function pointer
    assign_function__Status__motor_errors,  // assign(index, value) function pointer
    resize_function__Status__motor_errors  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Status_message_members = {
  "signal_arm_msgs::msg",  // message namespace
  "Status",  // message name
  2,  // number of fields
  sizeof(signal_arm_msgs::msg::Status),
  Status_message_member_array,  // message members
  Status_init_function,  // function to initialize message memory (memory has to be allocated)
  Status_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Status_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Status_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace signal_arm_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<signal_arm_msgs::msg::Status>()
{
  return &::signal_arm_msgs::msg::rosidl_typesupport_introspection_cpp::Status_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, signal_arm_msgs, msg, Status)() {
  return &::signal_arm_msgs::msg::rosidl_typesupport_introspection_cpp::Status_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
