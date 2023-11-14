# generated from rosidl_generator_py/resource/_idl.py.em
# with input from theora_webcams:srv/GetExposureBounds.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetExposureBounds_Request(type):
    """Metaclass of message 'GetExposureBounds_Request'."""

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
                'theora_webcams.srv.GetExposureBounds_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_exposure_bounds__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_exposure_bounds__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_exposure_bounds__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_exposure_bounds__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_exposure_bounds__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetExposureBounds_Request(metaclass=Metaclass_GetExposureBounds_Request):
    """Message class 'GetExposureBounds_Request'."""

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


# Import statements for member types

# Member 'exposure_bounds'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetExposureBounds_Response(type):
    """Metaclass of message 'GetExposureBounds_Response'."""

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
                'theora_webcams.srv.GetExposureBounds_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_exposure_bounds__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_exposure_bounds__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_exposure_bounds__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_exposure_bounds__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_exposure_bounds__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetExposureBounds_Response(metaclass=Metaclass_GetExposureBounds_Response):
    """Message class 'GetExposureBounds_Response'."""

    __slots__ = [
        '_exposure_bounds',
        '_supports_manual_exposure',
    ]

    _fields_and_field_types = {
        'exposure_bounds': 'sequence<float>',
        'supports_manual_exposure': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.exposure_bounds = array.array('f', kwargs.get('exposure_bounds', []))
        self.supports_manual_exposure = kwargs.get('supports_manual_exposure', bool())

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
        if self.exposure_bounds != other.exposure_bounds:
            return False
        if self.supports_manual_exposure != other.supports_manual_exposure:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def exposure_bounds(self):
        """Message field 'exposure_bounds'."""
        return self._exposure_bounds

    @exposure_bounds.setter
    def exposure_bounds(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'exposure_bounds' array.array() must have the type code of 'f'"
            self._exposure_bounds = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'exposure_bounds' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._exposure_bounds = array.array('f', value)

    @builtins.property
    def supports_manual_exposure(self):
        """Message field 'supports_manual_exposure'."""
        return self._supports_manual_exposure

    @supports_manual_exposure.setter
    def supports_manual_exposure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'supports_manual_exposure' field must be of type 'bool'"
        self._supports_manual_exposure = value


class Metaclass_GetExposureBounds(type):
    """Metaclass of service 'GetExposureBounds'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('theora_webcams')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'theora_webcams.srv.GetExposureBounds')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_exposure_bounds

            from theora_webcams.srv import _get_exposure_bounds
            if _get_exposure_bounds.Metaclass_GetExposureBounds_Request._TYPE_SUPPORT is None:
                _get_exposure_bounds.Metaclass_GetExposureBounds_Request.__import_type_support__()
            if _get_exposure_bounds.Metaclass_GetExposureBounds_Response._TYPE_SUPPORT is None:
                _get_exposure_bounds.Metaclass_GetExposureBounds_Response.__import_type_support__()


class GetExposureBounds(metaclass=Metaclass_GetExposureBounds):
    from theora_webcams.srv._get_exposure_bounds import GetExposureBounds_Request as Request
    from theora_webcams.srv._get_exposure_bounds import GetExposureBounds_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
