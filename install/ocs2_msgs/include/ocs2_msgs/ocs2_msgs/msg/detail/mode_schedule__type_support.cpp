// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ocs2_msgs:msg/ModeSchedule.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ocs2_msgs/msg/detail/mode_schedule__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ocs2_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ModeSchedule_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ocs2_msgs::msg::ModeSchedule(_init);
}

void ModeSchedule_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ocs2_msgs::msg::ModeSchedule *>(message_memory);
  typed_message->~ModeSchedule();
}

size_t size_function__ModeSchedule__event_times(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ModeSchedule__event_times(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ModeSchedule__event_times(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ModeSchedule__event_times(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ModeSchedule__event_times(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ModeSchedule__event_times(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ModeSchedule__event_times(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ModeSchedule__event_times(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ModeSchedule__mode_sequence(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ModeSchedule__mode_sequence(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ModeSchedule__mode_sequence(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ModeSchedule__mode_sequence(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int8_t *>(
    get_const_function__ModeSchedule__mode_sequence(untyped_member, index));
  auto & value = *reinterpret_cast<int8_t *>(untyped_value);
  value = item;
}

void assign_function__ModeSchedule__mode_sequence(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int8_t *>(
    get_function__ModeSchedule__mode_sequence(untyped_member, index));
  const auto & value = *reinterpret_cast<const int8_t *>(untyped_value);
  item = value;
}

void resize_function__ModeSchedule__mode_sequence(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ModeSchedule_message_member_array[2] = {
  {
    "event_times",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs::msg::ModeSchedule, event_times),  // bytes offset in struct
    nullptr,  // default value
    size_function__ModeSchedule__event_times,  // size() function pointer
    get_const_function__ModeSchedule__event_times,  // get_const(index) function pointer
    get_function__ModeSchedule__event_times,  // get(index) function pointer
    fetch_function__ModeSchedule__event_times,  // fetch(index, &value) function pointer
    assign_function__ModeSchedule__event_times,  // assign(index, value) function pointer
    resize_function__ModeSchedule__event_times  // resize(index) function pointer
  },
  {
    "mode_sequence",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs::msg::ModeSchedule, mode_sequence),  // bytes offset in struct
    nullptr,  // default value
    size_function__ModeSchedule__mode_sequence,  // size() function pointer
    get_const_function__ModeSchedule__mode_sequence,  // get_const(index) function pointer
    get_function__ModeSchedule__mode_sequence,  // get(index) function pointer
    fetch_function__ModeSchedule__mode_sequence,  // fetch(index, &value) function pointer
    assign_function__ModeSchedule__mode_sequence,  // assign(index, value) function pointer
    resize_function__ModeSchedule__mode_sequence  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ModeSchedule_message_members = {
  "ocs2_msgs::msg",  // message namespace
  "ModeSchedule",  // message name
  2,  // number of fields
  sizeof(ocs2_msgs::msg::ModeSchedule),
  ModeSchedule_message_member_array,  // message members
  ModeSchedule_init_function,  // function to initialize message memory (memory has to be allocated)
  ModeSchedule_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ModeSchedule_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ModeSchedule_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ocs2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ocs2_msgs::msg::ModeSchedule>()
{
  return &::ocs2_msgs::msg::rosidl_typesupport_introspection_cpp::ModeSchedule_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ocs2_msgs, msg, ModeSchedule)() {
  return &::ocs2_msgs::msg::rosidl_typesupport_introspection_cpp::ModeSchedule_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
