// Generated by gencpp from file signal_torso/torso_control_stamped.msg
// DO NOT EDIT!


#ifndef SIGNAL_TORSO_MESSAGE_TORSO_CONTROL_STAMPED_H
#define SIGNAL_TORSO_MESSAGE_TORSO_CONTROL_STAMPED_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <signal_torso/torso_control.h>

namespace signal_torso
{
template <class ContainerAllocator>
struct torso_control_stamped_
{
  typedef torso_control_stamped_<ContainerAllocator> Type;

  torso_control_stamped_()
    : header()
    , data()  {
    }
  torso_control_stamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::signal_torso::torso_control_<ContainerAllocator>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::signal_torso::torso_control_stamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::signal_torso::torso_control_stamped_<ContainerAllocator> const> ConstPtr;

}; // struct torso_control_stamped_

typedef ::signal_torso::torso_control_stamped_<std::allocator<void> > torso_control_stamped;

typedef boost::shared_ptr< ::signal_torso::torso_control_stamped > torso_control_stampedPtr;
typedef boost::shared_ptr< ::signal_torso::torso_control_stamped const> torso_control_stampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::signal_torso::torso_control_stamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::signal_torso::torso_control_stamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::signal_torso::torso_control_stamped_<ContainerAllocator1> & lhs, const ::signal_torso::torso_control_stamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::signal_torso::torso_control_stamped_<ContainerAllocator1> & lhs, const ::signal_torso::torso_control_stamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace signal_torso

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::signal_torso::torso_control_stamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::signal_torso::torso_control_stamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::signal_torso::torso_control_stamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::signal_torso::torso_control_stamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::signal_torso::torso_control_stamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::signal_torso::torso_control_stamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::signal_torso::torso_control_stamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d7f7dd6efa50e7092f967cdd0f0a15ee";
  }

  static const char* value(const ::signal_torso::torso_control_stamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd7f7dd6efa50e709ULL;
  static const uint64_t static_value2 = 0x2f967cdd0f0a15eeULL;
};

template<class ContainerAllocator>
struct DataType< ::signal_torso::torso_control_stamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "signal_torso/torso_control_stamped";
  }

  static const char* value(const ::signal_torso::torso_control_stamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::signal_torso::torso_control_stamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"torso_control data\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: signal_torso/torso_control\n"
"float32[] position_des\n"
"float32[] speed_des\n"
"uint8[] current_kp\n"
"uint8[] current_kd\n"
"uint8[] speed_kp\n"
"uint8[] speed_kd\n"
"uint8[] position_kp\n"
"uint8[] position_kd\n"
;
  }

  static const char* value(const ::signal_torso::torso_control_stamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::signal_torso::torso_control_stamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct torso_control_stamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::signal_torso::torso_control_stamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::signal_torso::torso_control_stamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data: ";
    s << std::endl;
    Printer< ::signal_torso::torso_control_<ContainerAllocator> >::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIGNAL_TORSO_MESSAGE_TORSO_CONTROL_STAMPED_H
