# generated from rosidl_generator_py/resource/_idl.py.em
# with input from science_servo_control:srv/FreeMoveDrum.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FreeMoveDrum_Request(type):
    """Metaclass of message 'FreeMoveDrum_Request'."""

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
            module = import_type_support('science_servo_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'science_servo_control.srv.FreeMoveDrum_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__free_move_drum__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__free_move_drum__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__free_move_drum__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__free_move_drum__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__free_move_drum__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FreeMoveDrum_Request(metaclass=Metaclass_FreeMoveDrum_Request):
    """Message class 'FreeMoveDrum_Request'."""

    __slots__ = [
        '_drum_id',
        '_drum_pos',
    ]

    _fields_and_field_types = {
        'drum_id': 'int32',
        'drum_pos': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.drum_id = kwargs.get('drum_id', int())
        self.drum_pos = kwargs.get('drum_pos', int())

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
        if self.drum_id != other.drum_id:
            return False
        if self.drum_pos != other.drum_pos:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def drum_id(self):
        """Message field 'drum_id'."""
        return self._drum_id

    @drum_id.setter
    def drum_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drum_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'drum_id' field must be an integer in [-2147483648, 2147483647]"
        self._drum_id = value

    @builtins.property
    def drum_pos(self):
        """Message field 'drum_pos'."""
        return self._drum_pos

    @drum_pos.setter
    def drum_pos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'drum_pos' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'drum_pos' field must be an integer in [-2147483648, 2147483647]"
        self._drum_pos = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_FreeMoveDrum_Response(type):
    """Metaclass of message 'FreeMoveDrum_Response'."""

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
            module = import_type_support('science_servo_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'science_servo_control.srv.FreeMoveDrum_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__free_move_drum__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__free_move_drum__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__free_move_drum__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__free_move_drum__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__free_move_drum__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FreeMoveDrum_Response(metaclass=Metaclass_FreeMoveDrum_Response):
    """Message class 'FreeMoveDrum_Response'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


class Metaclass_FreeMoveDrum(type):
    """Metaclass of service 'FreeMoveDrum'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('science_servo_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'science_servo_control.srv.FreeMoveDrum')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__free_move_drum

            from science_servo_control.srv import _free_move_drum
            if _free_move_drum.Metaclass_FreeMoveDrum_Request._TYPE_SUPPORT is None:
                _free_move_drum.Metaclass_FreeMoveDrum_Request.__import_type_support__()
            if _free_move_drum.Metaclass_FreeMoveDrum_Response._TYPE_SUPPORT is None:
                _free_move_drum.Metaclass_FreeMoveDrum_Response.__import_type_support__()


class FreeMoveDrum(metaclass=Metaclass_FreeMoveDrum):
    from science_servo_control.srv._free_move_drum import FreeMoveDrum_Request as Request
    from science_servo_control.srv._free_move_drum import FreeMoveDrum_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
