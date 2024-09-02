// Generated by gencpp from file signal_torso/FunctionFrame.msg
// DO NOT EDIT!


#ifndef SIGNAL_TORSO_MESSAGE_FUNCTIONFRAME_H
#define SIGNAL_TORSO_MESSAGE_FUNCTIONFRAME_H

#include <ros/service_traits.h>


#include <signal_torso/FunctionFrameRequest.h>
#include <signal_torso/FunctionFrameResponse.h>


namespace signal_torso
{

struct FunctionFrame
{

typedef FunctionFrameRequest Request;
typedef FunctionFrameResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct FunctionFrame
} // namespace signal_torso


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::signal_torso::FunctionFrame > {
  static const char* value()
  {
    return "28ca10d14356fafac343096e46d08b18";
  }

  static const char* value(const ::signal_torso::FunctionFrame&) { return value(); }
};

template<>
struct DataType< ::signal_torso::FunctionFrame > {
  static const char* value()
  {
    return "signal_torso/FunctionFrame";
  }

  static const char* value(const ::signal_torso::FunctionFrame&) { return value(); }
};


// service_traits::MD5Sum< ::signal_torso::FunctionFrameRequest> should match
// service_traits::MD5Sum< ::signal_torso::FunctionFrame >
template<>
struct MD5Sum< ::signal_torso::FunctionFrameRequest>
{
  static const char* value()
  {
    return MD5Sum< ::signal_torso::FunctionFrame >::value();
  }
  static const char* value(const ::signal_torso::FunctionFrameRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::signal_torso::FunctionFrameRequest> should match
// service_traits::DataType< ::signal_torso::FunctionFrame >
template<>
struct DataType< ::signal_torso::FunctionFrameRequest>
{
  static const char* value()
  {
    return DataType< ::signal_torso::FunctionFrame >::value();
  }
  static const char* value(const ::signal_torso::FunctionFrameRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::signal_torso::FunctionFrameResponse> should match
// service_traits::MD5Sum< ::signal_torso::FunctionFrame >
template<>
struct MD5Sum< ::signal_torso::FunctionFrameResponse>
{
  static const char* value()
  {
    return MD5Sum< ::signal_torso::FunctionFrame >::value();
  }
  static const char* value(const ::signal_torso::FunctionFrameResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::signal_torso::FunctionFrameResponse> should match
// service_traits::DataType< ::signal_torso::FunctionFrame >
template<>
struct DataType< ::signal_torso::FunctionFrameResponse>
{
  static const char* value()
  {
    return DataType< ::signal_torso::FunctionFrame >::value();
  }
  static const char* value(const ::signal_torso::FunctionFrameResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SIGNAL_TORSO_MESSAGE_FUNCTIONFRAME_H
