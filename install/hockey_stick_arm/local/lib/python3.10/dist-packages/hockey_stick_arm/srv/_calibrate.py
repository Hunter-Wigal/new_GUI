# generated from rosidl_generator_py/resource/_idl.py.em
# with input from hockey_stick_arm:srv/Calibrate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Calibrate_Request(type):
    """Metaclass of message 'Calibrate_Request'."""

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
            module = import_type_support('hockey_stick_arm')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hockey_stick_arm.srv.Calibrate_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__calibrate__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__calibrate__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__calibrate__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__calibrate__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__calibrate__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Calibrate_Request(metaclass=Metaclass_Calibrate_Request):
    """Message class 'Calibrate_Request'."""

    __slots__ = [
        '_value1',
        '_value2',
    ]

    _fields_and_field_types = {
        'value1': 'float',
        'value2': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.value1 = kwargs.get('value1', float())
        self.value2 = kwargs.get('value2', float())

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
        if self.value1 != other.value1:
            return False
        if self.value2 != other.value2:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def value1(self):
        """Message field 'value1'."""
        return self._value1

    @value1.setter
    def value1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'value1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._value1 = value

    @builtins.property
    def value2(self):
        """Message field 'value2'."""
        return self._value2

    @value2.setter
    def value2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'value2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._value2 = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_Calibrate_Response(type):
    """Metaclass of message 'Calibrate_Response'."""

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
            module = import_type_support('hockey_stick_arm')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hockey_stick_arm.srv.Calibrate_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__calibrate__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__calibrate__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__calibrate__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__calibrate__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__calibrate__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Calibrate_Response(metaclass=Metaclass_Calibrate_Response):
    """Message class 'Calibrate_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.message != other.message:
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

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_Calibrate(type):
    """Metaclass of service 'Calibrate'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('hockey_stick_arm')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'hockey_stick_arm.srv.Calibrate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__calibrate

            from hockey_stick_arm.srv import _calibrate
            if _calibrate.Metaclass_Calibrate_Request._TYPE_SUPPORT is None:
                _calibrate.Metaclass_Calibrate_Request.__import_type_support__()
            if _calibrate.Metaclass_Calibrate_Response._TYPE_SUPPORT is None:
                _calibrate.Metaclass_Calibrate_Response.__import_type_support__()


class Calibrate(metaclass=Metaclass_Calibrate):
    from hockey_stick_arm.srv._calibrate import Calibrate_Request as Request
    from hockey_stick_arm.srv._calibrate import Calibrate_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
