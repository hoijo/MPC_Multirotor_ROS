// Generated by gencpp from file mpc_icra/Position.msg
// DO NOT EDIT!


#ifndef MPC_ICRA_MESSAGE_POSITION_H
#define MPC_ICRA_MESSAGE_POSITION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mpc_icra
{
template <class ContainerAllocator>
struct Position_
{
  typedef Position_<ContainerAllocator> Type;

  Position_()
    : x_d(0.0)
    , y_d(0.0)
    , z_d(0.0)
    , vx_d(0.0)
    , vy_d(0.0)
    , vz_d(0.0)
    , psi_d(0.0)
    , psi_dot_d(0.0)  {
    }
  Position_(const ContainerAllocator& _alloc)
    : x_d(0.0)
    , y_d(0.0)
    , z_d(0.0)
    , vx_d(0.0)
    , vy_d(0.0)
    , vz_d(0.0)
    , psi_d(0.0)
    , psi_dot_d(0.0)  {
  (void)_alloc;
    }



   typedef double _x_d_type;
  _x_d_type x_d;

   typedef double _y_d_type;
  _y_d_type y_d;

   typedef double _z_d_type;
  _z_d_type z_d;

   typedef double _vx_d_type;
  _vx_d_type vx_d;

   typedef double _vy_d_type;
  _vy_d_type vy_d;

   typedef double _vz_d_type;
  _vz_d_type vz_d;

   typedef double _psi_d_type;
  _psi_d_type psi_d;

   typedef double _psi_dot_d_type;
  _psi_dot_d_type psi_dot_d;




  typedef boost::shared_ptr< ::mpc_icra::Position_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mpc_icra::Position_<ContainerAllocator> const> ConstPtr;

}; // struct Position_

typedef ::mpc_icra::Position_<std::allocator<void> > Position;

typedef boost::shared_ptr< ::mpc_icra::Position > PositionPtr;
typedef boost::shared_ptr< ::mpc_icra::Position const> PositionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mpc_icra::Position_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mpc_icra::Position_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mpc_icra

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'mpc_icra': ['/home/youngdong/ROS/MPC_Multirotor_ROS/src/mpc_icra/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mpc_icra::Position_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mpc_icra::Position_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mpc_icra::Position_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mpc_icra::Position_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mpc_icra::Position_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mpc_icra::Position_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mpc_icra::Position_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bc5e5e90a3332062f5304763ca861e01";
  }

  static const char* value(const ::mpc_icra::Position_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbc5e5e90a3332062ULL;
  static const uint64_t static_value2 = 0xf5304763ca861e01ULL;
};

template<class ContainerAllocator>
struct DataType< ::mpc_icra::Position_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mpc_icra/Position";
  }

  static const char* value(const ::mpc_icra::Position_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mpc_icra::Position_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x_d\n\
float64 y_d\n\
float64 z_d\n\
float64 vx_d\n\
float64 vy_d\n\
float64 vz_d\n\
float64 psi_d\n\
float64 psi_dot_d\n\
";
  }

  static const char* value(const ::mpc_icra::Position_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mpc_icra::Position_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x_d);
      stream.next(m.y_d);
      stream.next(m.z_d);
      stream.next(m.vx_d);
      stream.next(m.vy_d);
      stream.next(m.vz_d);
      stream.next(m.psi_d);
      stream.next(m.psi_dot_d);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Position_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mpc_icra::Position_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mpc_icra::Position_<ContainerAllocator>& v)
  {
    s << indent << "x_d: ";
    Printer<double>::stream(s, indent + "  ", v.x_d);
    s << indent << "y_d: ";
    Printer<double>::stream(s, indent + "  ", v.y_d);
    s << indent << "z_d: ";
    Printer<double>::stream(s, indent + "  ", v.z_d);
    s << indent << "vx_d: ";
    Printer<double>::stream(s, indent + "  ", v.vx_d);
    s << indent << "vy_d: ";
    Printer<double>::stream(s, indent + "  ", v.vy_d);
    s << indent << "vz_d: ";
    Printer<double>::stream(s, indent + "  ", v.vz_d);
    s << indent << "psi_d: ";
    Printer<double>::stream(s, indent + "  ", v.psi_d);
    s << indent << "psi_dot_d: ";
    Printer<double>::stream(s, indent + "  ", v.psi_dot_d);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MPC_ICRA_MESSAGE_POSITION_H