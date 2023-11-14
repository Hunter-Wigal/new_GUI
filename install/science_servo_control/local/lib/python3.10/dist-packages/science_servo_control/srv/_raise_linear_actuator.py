# generated from rosidl_generator_py/resource/_idl.py.em
# with input from science_servo_control:srv/RaiseLinearActuator.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RaiseLinearActuator_Request(type):
    """Metaclass of message 'RaiseLinearActuator_Request'."""

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
                'science_servo_control.srv.RaiseLinearActuator_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__raise_linear_actuator__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__raise_linear_actuator__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__raise_linear_actuator__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__raise_linear_actuator__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__raise_linear_actuator__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RaiseLinearActuator_Request(metaclass=Metaclass_RaiseLinearActuator_Request):
    """Message class 'RaiseLinearActuator_Request'."""

    __slots__ = [
        '_actuator_id',
    ]

    _fields_and_field_types = {
        'actuator_id': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.actuator_id = kwargs.get('actuator_id', int())

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
        if self.actuator_id != other.actuator_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def actuator_id(self):
        """Message field 'actuator_id'."""
        return self._actuator_id

    @actuator_id.setter
    def actuator_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'actuator_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'actuator_id' field must be an integer in [-2147483648, 2147483647]"
        self._actuator_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RaiseLinearActuator_Response(type):
    """Metaclass of message 'RaiseLinearActuator_Response'."""

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
                'science_servo_control.srv.RaiseLinearActuator_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__raise_linear_actuator__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__raise_linear_actuator__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__raise_linear_actuator__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__raise_linear_actuator__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__raise_linear_actuator__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RaiseLinearActuator_Response(metaclass=Metaclass_RaiseLinearActuator_Response):
    """Message class 'RaiseLinearActuator_Response'."""

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


class Metaclass_RaiseLinearActuator(type):
    """Metaclass of service 'RaiseLinearActuator'."""

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
                'science_servo_control.srv.RaiseLinearActuator')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__raise_linear_actuator

            from science_servo_control.srv import _raise_linear_actuator
            if _raise_linear_actuator.Metaclass_RaiseLinearActuator_Request._TYPE_SUPPORT is None:
                _raise_linear_actuator.Metaclass_RaiseLinearActuator_Request.__import_type_support__()
            if _raise_linear_actuator.Metaclass_RaiseLinearActuator_Response._TYPE_SUPPORT is None:
                _raise_linear_actuator.Metaclass_RaiseLinearActuator_Response.__import_type_support__()


class RaiseLinearActuator(metaclass=Metaclass_RaiseLinearActuator):
    from science_servo_control.srv._raise_linear_actuator import RaiseLinearActuator_Request as Request
    from science_servo_control.srv._raise_linear_actuator import RaiseLinearActuator_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
