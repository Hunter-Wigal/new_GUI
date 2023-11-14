# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marker_interfacing:srv/AddMarker.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AddMarker_Request(type):
    """Metaclass of message 'AddMarker_Request'."""

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
                'marker_interfacing.srv.AddMarker_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__add_marker__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__add_marker__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__add_marker__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__add_marker__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__add_marker__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AddMarker_Request(metaclass=Metaclass_AddMarker_Request):
    """Message class 'AddMarker_Request'."""

    __slots__ = [
        '_lat',
        '_lon',
        '_alt',
        '_waypoint_error',
        '_marker_type',
        '_aruco_id',
        '_aruco_id_2',
    ]

    _fields_and_field_types = {
        'lat': 'double',
        'lon': 'double',
        'alt': 'double',
        'waypoint_error': 'float',
        'marker_type': 'string',
        'aruco_id': 'uint8',
        'aruco_id_2': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.lat = kwargs.get('lat', float())
        self.lon = kwargs.get('lon', float())
        self.alt = kwargs.get('alt', float())
        self.waypoint_error = kwargs.get('waypoint_error', float())
        self.marker_type = kwargs.get('marker_type', str())
        self.aruco_id = kwargs.get('aruco_id', int())
        self.aruco_id_2 = kwargs.get('aruco_id_2', int())

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
        if self.lat != other.lat:
            return False
        if self.lon != other.lon:
            return False
        if self.alt != other.alt:
            return False
        if self.waypoint_error != other.waypoint_error:
            return False
        if self.marker_type != other.marker_type:
            return False
        if self.aruco_id != other.aruco_id:
            return False
        if self.aruco_id_2 != other.aruco_id_2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def lat(self):
        """Message field 'lat'."""
        return self._lat

    @lat.setter
    def lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lat' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lat = value

    @builtins.property
    def lon(self):
        """Message field 'lon'."""
        return self._lon

    @lon.setter
    def lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lon' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lon = value

    @builtins.property
    def alt(self):
        """Message field 'alt'."""
        return self._alt

    @alt.setter
    def alt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alt' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'alt' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._alt = value

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


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_AddMarker_Response(type):
    """Metaclass of message 'AddMarker_Response'."""

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
                'marker_interfacing.srv.AddMarker_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__add_marker__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__add_marker__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__add_marker__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__add_marker__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__add_marker__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AddMarker_Response(metaclass=Metaclass_AddMarker_Response):
    """Message class 'AddMarker_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_AddMarker(type):
    """Metaclass of service 'AddMarker'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('marker_interfacing')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'marker_interfacing.srv.AddMarker')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__add_marker

            from marker_interfacing.srv import _add_marker
            if _add_marker.Metaclass_AddMarker_Request._TYPE_SUPPORT is None:
                _add_marker.Metaclass_AddMarker_Request.__import_type_support__()
            if _add_marker.Metaclass_AddMarker_Response._TYPE_SUPPORT is None:
                _add_marker.Metaclass_AddMarker_Response.__import_type_support__()


class AddMarker(metaclass=Metaclass_AddMarker):
    from marker_interfacing.srv._add_marker import AddMarker_Request as Request
    from marker_interfacing.srv._add_marker import AddMarker_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
