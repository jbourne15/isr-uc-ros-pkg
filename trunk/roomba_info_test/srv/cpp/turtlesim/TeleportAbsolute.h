/* auto-generated by gensrv_cpp from /home/pesty/ros-tutorials/ros_tutorials/turtlesim/srv/TeleportAbsolute.srv.  Do not edit! */
#ifndef SRV_TURTLESIM_TELEPORTABSOLUTE_H
#define SRV_TURTLESIM_TELEPORTABSOLUTE_H

#include <string>
#include <cstring>
#include <vector>
#include <map>
#include "ros/message.h"
#include "ros/time.h"

namespace turtlesim
{

struct TeleportAbsolute
{

inline static std::string getDataType() { return "turtlesim/TeleportAbsolute"; }
inline static std::string getMD5Sum() { return "a130bc60ee6513855dc62ea83fcc5b20"; }

//! \htmlinclude Request.msg.html

class Request : public ros::Message
{
public:
  typedef boost::shared_ptr<Request> Ptr;
  typedef boost::shared_ptr<Request const> ConstPtr;

  typedef float _x_type;
  typedef float _y_type;
  typedef float _theta_type;

  float x;
  float y;
  float theta;

  Request() : ros::Message(),
    x(0),
    y(0),
    theta(0)
  {
  }
  Request(const Request &copy) : ros::Message(),
    x(copy.x),
    y(copy.y),
    theta(copy.theta)
  {
    (void)copy;
  }
  Request &operator =(const Request &copy)
  {
    if (this == &copy)
      return *this;
    x = copy.x;
    y = copy.y;
    theta = copy.theta;
    return *this;
  }
  virtual ~Request() 
  {
  }
  inline static std::string __s_getDataType() { return std::string("turtlesim/TeleportAbsoluteRequest"); }
  inline static std::string __s_getMD5Sum() { return std::string(""); }
  inline static std::string __s_getMessageDefinition()
  {
    return std::string(
    "float32 x\n"
    "float32 y\n"
    "float32 theta\n"
    "\n"
    );
  }
  inline virtual const std::string __getDataType() const { return __s_getDataType(); }
  inline virtual const std::string __getMD5Sum() const { return __s_getMD5Sum(); }
  inline virtual const std::string __getMessageDefinition() const { return __s_getMessageDefinition(); }
  inline static std::string __s_getServerMD5Sum() { return std::string("a130bc60ee6513855dc62ea83fcc5b20"); }
  inline virtual const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum(); }
  inline static std::string __s_getServiceDataType() { return std::string("turtlesim/TeleportAbsolute"); }
  inline virtual const std::string __getServiceDataType() const { return __s_getServiceDataType(); }
  inline uint32_t serializationLength() const
  {
    unsigned __l = 0;
    __l += 4; // x
    __l += 4; // y
    __l += 4; // theta
    return __l;
  }
  virtual uint8_t *serialize(uint8_t *write_ptr,
#if defined(__GNUC__)
                             __attribute__((unused)) uint32_t seq) const
#else
                             uint32_t seq) const
#endif
  {
    SROS_SERIALIZE_PRIMITIVE(write_ptr, x);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, y);
    SROS_SERIALIZE_PRIMITIVE(write_ptr, theta);
    return write_ptr;
  }
  virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, x);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, y);
    SROS_DESERIALIZE_PRIMITIVE(read_ptr, theta);
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
  inline static std::string __s_getDataType() { return std::string("turtlesim/TeleportAbsoluteResponse"); }
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
  inline static std::string __s_getServerMD5Sum() { return std::string("a130bc60ee6513855dc62ea83fcc5b20"); }
  inline virtual const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum(); }
  inline static std::string __s_getServiceDataType() { return std::string("turtlesim/TeleportAbsolute"); }
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