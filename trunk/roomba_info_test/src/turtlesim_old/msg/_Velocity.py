# autogenerated by genmsg_py from Velocity.msg. Do not edit.
import roslib.message
import struct


class Velocity(roslib.message.Message):
  _md5sum = "9d5c2dcd348ac8f76ce2a4307bd63a13"
  _type = "turtlesim/Velocity"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float32 linear
float32 angular
"""
  __slots__ = ['linear','angular']
  _slot_types = ['float32','float32']

  ## Constructor. Any message fields that are implicitly/explicitly
  ## set to None will be assigned a default value. The recommend
  ## use is keyword arguments as this is more robust to future message
  ## changes.  You cannot mix in-order arguments and keyword arguments.
  ##
  ## The available fields are:
  ##   linear,angular
  ##
  ## @param self: self
  ## @param args: complete set of field values, in .msg order
  ## @param kwds: use keyword arguments corresponding to message field names
  ## to set specific fields. 
  def __init__(self, *args, **kwds):
    if args or kwds:
      super(Velocity, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.linear is None:
        self.linear = 0.
      if self.angular is None:
        self.angular = 0.
    else:
      self.linear = 0.
      self.angular = 0.

  ## internal API method
  def _get_types(self): return self._slot_types

  ## serialize message into buffer
  ## @param buff StringIO: buffer
  def serialize(self, buff):
    try:
      buff.write(struct.pack('<2f', self.linear, self.angular))
    except struct.error, se: self._check_types(se)
    except TypeError, te: self._check_types(te)

  ## unpack serialized message in str into this message instance
  ## @param self: self
  ## @param str str: byte array of serialized message
  def deserialize(self, str):
    try:
      end = 0
      start = end
      end += 8
      (self.linear, self.angular,) = struct.unpack('<2f',str[start:end])
      return self
    except struct.error, e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill


  ## serialize message with numpy array types into buffer
  ## @param self: self
  ## @param buff StringIO: buffer
  ## @param numpy module: numpy python module
  def serialize_numpy(self, buff, numpy):
    try:
      buff.write(struct.pack('<2f', self.linear, self.angular))
    except struct.error, se: self._check_types(se)
    except TypeError, te: self._check_types(te)

  ## unpack serialized message in str into this message instance using numpy for array types
  ## @param self: self
  ## @param str str: byte array of serialized message
  ## @param numpy module: numpy python module
  def deserialize_numpy(self, str, numpy):
    try:
      end = 0
      start = end
      end += 8
      (self.linear, self.angular,) = struct.unpack('<2f',str[start:end])
      return self
    except struct.error, e:
      raise roslib.message.DeserializationError(e) #most likely buffer underfill
