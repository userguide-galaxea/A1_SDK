// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ocs2_msgs:msg/MpcInput.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ocs2_msgs/msg/detail/mpc_input__struct.hpp"
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

void MpcInput_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ocs2_msgs::msg::MpcInput(_init);
}

void MpcInput_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ocs2_msgs::msg::MpcInput *>(message_memory);
  typed_message->~MpcInput();
}

size_t size_function__MpcInput__value(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcInput__value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcInput__value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcInput__value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MpcInput__value(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MpcInput__value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MpcInput__value(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__MpcInput__value(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MpcInput_message_member_array[1] = {
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs::msg::MpcInput, value),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcInput__value,  // size() function pointer
    get_const_function__MpcInput__value,  // get_const(index) function pointer
    get_function__MpcInput__value,  // get(index) function pointer
    fetch_function__MpcInput__value,  // fetch(index, &value) function pointer
    assign_function__MpcInput__value,  // assign(index, value) function pointer
    resize_function__MpcInput__value  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MpcInput_message_members = {
  "ocs2_msgs::msg",  // message namespace
  "MpcInput",  // message name
  1,  // number of fields
  sizeof(ocs2_msgs::msg::MpcInput),
  MpcInput_message_member_array,  // message members
  MpcInput_init_function,  // function to initialize message memory (memory has to be allocated)
  MpcInput_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MpcInput_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MpcInput_message_members,
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
get_message_type_support_handle<ocs2_msgs::msg::MpcInput>()
{
  return &::ocs2_msgs::msg::rosidl_typesupport_introspection_cpp::MpcInput_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ocs2_msgs, msg, MpcInput)() {
  return &::ocs2_msgs::msg::rosidl_typesupport_introspection_cpp::MpcInput_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
