# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marker_interfacing:msg/GeodeticMarker.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GeodeticMarker(type):
    """Metaclass of message 'GeodeticMarker'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('marker_interfacing')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'marker_interfacing.msg.GeodeticMarker')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__geodetic_marker
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__geodetic_marker
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__geodetic_marker
            cls._TYPE_SUPPORT = module.type_support_msg__msg__geodetic_marker
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__geodetic_marker

            from geographic_msgs.msg import GeoPoint
            if GeoPoint.__class__._TYPE_SUPPORT is None:
                GeoPoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GeodeticMarker(metaclass=Metaclass_GeodeticMarker):
    """Message class 'GeodeticMarker'."""

    __slots__ = [
        '_gps',
        '_waypoint_error',
        '_marker_type',
        '_aruco_id',
        '_aruco_id_2',
        '_marker_id',
    ]

    _fields_and_field_types = {
        'gps': 'geographic_msgs/GeoPoint',
        'waypoint_error': 'float',
        'marker_type': 'string',
        'aruco_id': 'uint8',
        'aruco_id_2': 'uint8',
        'marker_id': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geographic_msgs', 'msg'], 'GeoPoint'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geographic_msgs.msg import GeoPoint
        self.gps = kwargs.get('gps', GeoPoint())
        self.waypoint_error = kwargs.get('waypoint_error', float())
        self.marker_type = kwargs.get('marker_type', str())
        self.aruco_id = kwargs.get('aruco_id', int())
        self.aruco_id_2 = kwargs.get('aruco_id_2', int())
        self.marker_id = kwargs.get('marker_id', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.gps != other.gps:
            return False
        if self.waypoint_error != other.waypoint_error:
            return False
        if self.marker_type != other.marker_type:
            return False
        if self.aruco_id != other.aruco_id:
            return False
        if self.aruco_id_2 != other.aruco_id_2:
            return False
        if self.marker_id != other.marker_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def gps(self):
        """Message field 'gps'."""
        return self._gps

    @gps.setter
    def gps(self, value):
        if __debug__:
            from geographic_msgs.msg import GeoPoint
            assert \
                isinstance(value, GeoPoint), \
                "The 'gps' field must be a sub message of type 'GeoPoint'"
        self._gps = value

    @builtins.property
    def waypoint_error(self):
        """Message field 'waypoint_error'."""
        return self._waypoint_error

    @waypoint_error.setter
    def waypoint_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'waypoint_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'waypoint_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._waypoint_error = value

    @builtins.property
    def marker_type(self):
        """Message field 'marker_type'."""
        return self._marker_type

    @marker_type.setter
    def marker_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'marker_type' field must be of type 'str'"
        self._marker_type = value

    @builtins.property
    def aruco_id(self):
        """Message field 'aruco_id'."""
        return self._aruco_id

    @aruco_id.setter
    def aruco_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aruco_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aruco_id' field must be an unsigned integer in [0, 255]"
        self._aruco_id = value

    @builtins.property
    def aruco_id_2(self):
        """Message field 'aruco_id_2'."""
        return self._aruco_id_2

    @aruco_id_2.setter
    def aruco_id_2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aruco_id_2' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aruco_id_2' field must be an unsigned integer in [0, 255]"
        self._aruco_id_2 = value

    @builtins.property
    def marker_id(self):
        """Message field 'marker_id'."""
        return self._marker_id

    @marker_id.setter
    def marker_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'marker_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'marker_id' field must be an unsigned integer in [0, 255]"
        self._marker_id = value
