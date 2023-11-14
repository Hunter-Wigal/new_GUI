# generated from rosidl_generator_py/resource/_idl.py.em
# with input from theora_webcams:msg/Status.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Status(type):
    """Metaclass of message 'Status'."""

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
            module = import_type_support('theora_webcams')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'theora_webcams.msg.Status')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Status(metaclass=Metaclass_Status):
    """Message class 'Status'."""

    __slots__ = [
        '_width',
        '_height',
        '_framerate_numerator',
        '_framerate_denominator',
        '_exposure',
    ]

    _fields_and_field_types = {
        'width': 'int32',
        'height': 'int32',
        'framerate_numerator': 'int32',
        'framerate_denominator': 'int32',
        'exposure': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.width = kwargs.get('width', int())
        self.height = kwargs.get('height', int())
        self.framerate_numerator = kwargs.get('framerate_numerator', int())
        self.framerate_denominator = kwargs.get('framerate_denominator', int())
        self.exposure = kwargs.get('exposure', float())

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
        if self.width != other.width:
            return False
        if self.height != other.height:
            return False
        if self.framerate_numerator != other.framerate_numerator:
            return False
        if self.framerate_denominator != other.framerate_denominator:
            return False
        if self.exposure != other.exposure:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def width(self):
        """Message field 'width'."""
        return self._width

    @width.setter
    def width(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'width' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'width' field must be an integer in [-2147483648, 2147483647]"
        self._width = value

    @builtins.property
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'height' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'height' field must be an integer in [-2147483648, 2147483647]"
        self._height = value

    @builtins.property
    def framerate_numerator(self):
        """Message field 'framerate_numerator'."""
        return self._framerate_numerator

    @framerate_numerator.setter
    def framerate_numerator(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'framerate_numerator' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'framerate_numerator' field must be an integer in [-2147483648, 2147483647]"
        self._framerate_numerator = value

    @builtins.property
    def framerate_denominator(self):
        """Message field 'framerate_denominator'."""
        return self._framerate_denominator

    @framerate_denominator.setter
    def framerate_denominator(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'framerate_denominator' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'framerate_denominator' field must be an integer in [-2147483648, 2147483647]"
        self._framerate_denominator = value

    @builtins.property
    def exposure(self):
        """Message field 'exposure'."""
        return self._exposure

    @exposure.setter
    def exposure(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'exposure' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'exposure' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._exposure = value