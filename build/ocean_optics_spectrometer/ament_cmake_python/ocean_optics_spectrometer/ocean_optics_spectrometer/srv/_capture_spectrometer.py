# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ocean_optics_spectrometer:srv/CaptureSpectrometer.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CaptureSpectrometer_Request(type):
    """Metaclass of message 'CaptureSpectrometer_Request'."""

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
            module = import_type_support('ocean_optics_spectrometer')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ocean_optics_spectrometer.srv.CaptureSpectrometer_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__capture_spectrometer__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__capture_spectrometer__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__capture_spectrometer__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__capture_spectrometer__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__capture_spectrometer__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CaptureSpectrometer_Request(metaclass=Metaclass_CaptureSpectrometer_Request):
    """Message class 'CaptureSpectrometer_Request'."""

    __slots__ = [
        '_integration_time',
    ]

    _fields_and_field_types = {
        'integration_time': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.integration_time = kwargs.get('integration_time', int())

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
        if self.integration_time != other.integration_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def integration_time(self):
        """Message field 'integration_time'."""
        return self._integration_time

    @integration_time.setter
    def integration_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'integration_time' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'integration_time' field must be an integer in [-2147483648, 2147483647]"
        self._integration_time = value


# Import statements for member types

# Member 'wavelengths'
# Member 'intensities'
import array  # noqa: E402, I100

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_CaptureSpectrometer_Response(type):
    """Metaclass of message 'CaptureSpectrometer_Response'."""

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
            module = import_type_support('ocean_optics_spectrometer')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ocean_optics_spectrometer.srv.CaptureSpectrometer_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__capture_spectrometer__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__capture_spectrometer__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__capture_spectrometer__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__capture_spectrometer__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__capture_spectrometer__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CaptureSpectrometer_Response(metaclass=Metaclass_CaptureSpectrometer_Response):
    """Message class 'CaptureSpectrometer_Response'."""

    __slots__ = [
        '_wavelengths',
        '_intensities',
    ]

    _fields_and_field_types = {
        'wavelengths': 'sequence<double>',
        'intensities': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.wavelengths = array.array('d', kwargs.get('wavelengths', []))
        self.intensities = array.array('d', kwargs.get('intensities', []))

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
        if self.wavelengths != other.wavelengths:
            return False
        if self.intensities != other.intensities:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def wavelengths(self):
        """Message field 'wavelengths'."""
        return self._wavelengths

    @wavelengths.setter
    def wavelengths(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'wavelengths' array.array() must have the type code of 'd'"
            self._wavelengths = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'wavelengths' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._wavelengths = array.array('d', value)

    @builtins.property
    def intensities(self):
        """Message field 'intensities'."""
        return self._intensities

    @intensities.setter
    def intensities(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'intensities' array.array() must have the type code of 'd'"
            self._intensities = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'intensities' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._intensities = array.array('d', value)


class Metaclass_CaptureSpectrometer(type):
    """Metaclass of service 'CaptureSpectrometer'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ocean_optics_spectrometer')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ocean_optics_spectrometer.srv.CaptureSpectrometer')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__capture_spectrometer

            from ocean_optics_spectrometer.srv import _capture_spectrometer
            if _capture_spectrometer.Metaclass_CaptureSpectrometer_Request._TYPE_SUPPORT is None:
                _capture_spectrometer.Metaclass_CaptureSpectrometer_Request.__import_type_support__()
            if _capture_spectrometer.Metaclass_CaptureSpectrometer_Response._TYPE_SUPPORT is None:
                _capture_spectrometer.Metaclass_CaptureSpectrometer_Response.__import_type_support__()


class CaptureSpectrometer(metaclass=Metaclass_CaptureSpectrometer):
    from ocean_optics_spectrometer.srv._capture_spectrometer import CaptureSpectrometer_Request as Request
    from ocean_optics_spectrometer.srv._capture_spectrometer import CaptureSpectrometer_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
