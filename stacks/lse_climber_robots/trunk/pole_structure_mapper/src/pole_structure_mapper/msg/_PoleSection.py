"""autogenerated by genmsg_py from PoleSection.msg. Do not edit."""
import roslib.message
import struct

import geometry_msgs.msg

class PoleSection(roslib.message.Message):
  _md5sum = "91fec3910453ee4a9661a543b494b0c0"
  _type = "pole_structure_mapper/PoleSection"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# Description…

geometry_msgs/Point base
geometry_msgs/Vector3 axis
float32 diameter		# m
float32 length			# m

================================================================================
MSG: geometry_msgs/Point
# This contains the position of a point in free space
float64 x
float64 y
float64 z

================================================================================
MSG: geometry_msgs/Vector3
# This represents a vector in free space. 

float64 x
float64 y
float64 z
"""
  __slots__ = ['base','axis','diameter','length']
  _slot_types = ['geometry_msgs/Point','geometry_msgs/Vector3','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.
    
    The available fields are:
       base,axis,diameter,length
    
    @param args: complete set of field values, in .msg order
    @param kwds: use keyword arguments corresponding to message field names
    to set specific fields. 
    """
    if args or kwds:
      super(PoleSection, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.base is None:
        self.base = geometry_msgs.msg.Point()
      if self.axis is None:
        self.axis = geometry_msgs.msg.Vector3()
      if self.diameter is None:
        self.diameter = 0.
      if self.length is None:
        self.length = 0.
    else:
      self.base = geometry_msgs.msg.Point()
      self.axis = geometry_msgs.msg.Vector3()
      self.diameter = 0.
      self.length = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    @param buff: buffer
    @type  buff: StringIO
    """
    try:
      _x = self
      buff.write(_struct_6d2f.pack(_x.base.x, _x.base.y, _x.base.z, _x.axis.x, _x.axis.y, _x.axis.z, _x.diameter, _x.length))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    @param str: byte array of serialized message
    @type  str: str
    """
    try:
      if self.base is None:
        self.base = geometry_msgs.msg.Point()
      if self.axis is None:
        self.axis = geometry_msgs.msg.Vector3()
      end = 0
      _x = self
      start = end
      end += 56
      (_x.base.x, _x.base.y, _x.base.z, _x.axis.x, _x.axis.y, _x.axis.z, _x.diameter, _x.length,) = _struct_6d2f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    @param buff: buffer
    @type  buff: StringIO
    @param numpy: numpy python module
    @type  numpy module
    """
    try:
      _x = self
      buff.write(_struct_6d2f.pack(_x.base.x, _x.base.y, _x.base.z, _x.axis.x, _x.axis.y, _x.axis.z, _x.diameter, _x.length))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    @param str: byte array of serialized message
    @type  str: str
    @param numpy: numpy python module
    @type  numpy: module
    """
    try:
      if self.base is None:
        self.base = geometry_msgs.msg.Point()
      if self.axis is None:
        self.axis = geometry_msgs.msg.Vector3()
      end = 0
      _x = self
      start = end
      end += 56
      (_x.base.x, _x.base.y, _x.base.z, _x.axis.x, _x.axis.y, _x.axis.z, _x.diameter, _x.length,) = _struct_6d2f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill

_struct_I = roslib.message.struct_I
_struct_6d2f = struct.Struct("<6d2f")
