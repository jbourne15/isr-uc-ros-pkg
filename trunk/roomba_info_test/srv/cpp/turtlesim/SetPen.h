/* auto-generated by gensrv_cpp from /home/pesty/ros-tutorials/ros_tutorials/turtlesim/srv/SetPen.srv.  Do not edit! */
#ifndef SRV_TURTLESIM_SETPEN_H
#define SRV_TURTLESIM_SETPEN_H

#include <string>
#include <cstring>
#include <vector>
#include <map>
#include "ros/message.h"
#include "ros/time.h"

namespace turtlesim
{

struct SetPen
{

inline static std::string getDataType() { return "turtlesim/SetPen"; }
inline static std::string getMD5Sum() { return "9f452acce566bf0c0954594f69a8e41b"; }

//! \htmlinclude Request.msg.html

class Request : public ros::Message
{
public:
  typedef boost::shared_ptr<Request> Ptr;
  typedef boost::shared_ptr<Request const> ConstPtr;

  typedef uint8_t _r_type;
  typedef uint8_t _g_type;
  typedef uint8_t _b_type;
  typedef uint8_t _width_type;
  typedef uint8_t _off_type;

  uint8_t r;
  uint8_t g;
  uint8_t b;
  uint8_t width;
  uint8_t off;

  Request() : ros::Message(),
    r(0),
    g(0),
    b(0),
    width(0),
    off(0)
  {
  }
  Request(const Request &copy) : ros::Message(),
    r(copy.r),
    g(copy.g),
    b(copy.b),
    width(copy.width),
    off(copy.off)
  {
    (void)copy;
  }
  Request &operator =(const Request &copy)
  {
    if (this == &copy)
      return *this;
    r = copy.r;
    g = copy.g;
    b = copy.b;
    width = copy.width;
    off = copy.off;
    return *this;
  }
  virtual ~Request() 
  {
  }
  inline static std::string __s_getDataType() { return std::string("turtlesim/SetPenRequest"); }
  inline static std::string __s_getMD5Sum() { return std::string(""); }
  inline static std::string __s_getMessageDefinition()
  {
    return std::string(
    "uint8 r\n"
    "uint8 g\n"
    "uint8 b\n"
    "uint8 width\n"
    "uint8 off\n"
    "\n"
    );
  }
  inline virtual const std::string __getDataType() const { return __s_getDataType(); }
  inline virtual const std::string __getMD5Sum() const { return __s_getMD5Sum(); }
  inline virtual const std::string __getMessageDefinition() const { return __s_getMessageDefinition(); }
  inline static std::string __s_getServerMD5Sum() { return std::string("9f452acce566bf0c0954594f69a8e41b"); }
  inline virtual const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum(); }
  inline static std::string __s_getServiceDataType() { return std::string("turtlesim/SetPen"); }
  inline virtual const std::string __getServiceDataType() const { return __s_getServiceDataType(); }
  inline uint32_t serializationLength() const
  {
    unsigned __l = 0;
    __l += 1; // r
    __l += 1; // g
    __l += 1; // b
    __l += 1; // width
    __l += 1; // off
    return __l;
  }
  virtual uint8_t *serialize(uint8_t *write_ptr,
#if defined(__GNUC__)
                             __attribute__((unused)) uint32_t seq) const
#else
                             uint32_t seq) const
#endif
  {
    SROS_SERIALIZE_PRIMITIVE(write_ptr, r);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, g);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, b);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, width);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, off);
    return write_ptr;
  }
  virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, r);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, g);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, b);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, width);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, off);
    return read_ptr;
  }
};

typedef boost::shared_ptr<Request> RequestPtr;
typedef boost::shared_ptr<Request const> RequestConstPtr;

//! \htmlinclude Response.msg.html

class Response : public ros::Message
{
public:
  typedef boost::shared_ptr<Response> Ptr;
  typedef boost::shared_ptr<Response const> ConstPtr;



  Response() : ros::Message()
  {
  }
  Response(const Response &copy) : ros::Message()
  {
    (void)copy;
  }
  Response &operator =(const Response &copy)
  {
    if (this == &copy)
      return *this;
    return *this;
  }
  virtual ~Response() 
  {
  }
  inline static std::string __s_getDataType() { return std::string("turtlesim/SetPenResponse"); }
  inline static std::string __s_getMD5Sum() { return std::string(""); }
  inline static std::string __s_getMessageDefinition()
  {
    return std::string(
    "\n"
    "\n"
    );
  }
  inline virtual const std::string __getDataType() const { return __s_getDataType(); }
  inline virtual const std::string __getMD5Sum() const { return __s_getMD5Sum(); }
  inline virtual const std::string __getMessageDefinition() const { return __s_getMessageDefinition(); }
  inline static std::string __s_getServerMD5Sum() { return std::string("9f452acce566bf0c0954594f69a8e41b"); }
  inline virtual const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum(); }
  inline static std::string __s_getServiceDataType() { return std::string("turtlesim/SetPen"); }
  inline virtual const std::string __getServiceDataType() const { return __s_getServiceDataType(); }
  inline uint32_t serializationLength() const
  {
    unsigned __l = 0;
    return __l;
  }
  virtual uint8_t *serialize(uint8_t *write_ptr,
#if defined(__GNUC__)
                             __attribute__((unused)) uint32_t seq) const
#else
                             uint32_t seq) const
#endif
  {
    return write_ptr;
  }
  virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    return read_ptr;
  }
};

typedef boost::shared_ptr<Response> ResponsePtr;
typedef boost::shared_ptr<Response const> ResponseConstPtr;

Request request;
Response response;

};

}

#endif