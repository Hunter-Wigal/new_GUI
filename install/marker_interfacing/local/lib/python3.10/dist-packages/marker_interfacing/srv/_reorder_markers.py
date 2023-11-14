# generated from rosidl_generator_py/resource/_idl.py.em
# with input from marker_interfacing:srv/ReorderMarkers.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'marker_ids'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ReorderMarkers_Request(type):
    """Metaclass of message 'ReorderMarkers_Request'."""

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
                'marker_interfacing.srv.ReorderMarkers_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__reorder_markers__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__reorder_markers__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__reorder_markers__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__reorder_markers__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__reorder_markers__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReorderMarkers_Request(metaclass=Metaclass_ReorderMarkers_Request):
    """Message class 'ReorderMarkers_Request'."""

    __slots__ = [
        '_marker_ids',
    ]

    _fields_and_field_types = {
        'marker_ids': 'sequence<uint8>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.marker_ids = array.array('B', kwargs.get('marker_ids', []))

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
        if self.marker_ids != other.marker_ids:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def marker_ids(self):
        """Message field 'marker_ids'."""
        return self._marker_ids

    @marker_ids.setter
    def marker_ids(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'marker_ids' array.array() must have the type code of 'B'"
            self._marker_ids = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'marker_ids' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._marker_ids = array.array('B', value)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ReorderMarkers_Response(type):
    """Metaclass of message 'ReorderMarkers_Response'."""

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
                'marker_interfacing.srv.ReorderMarkers_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__reorder_markers__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__reorder_markers__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__reorder_markers__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__reorder_markers__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__reorder_markers__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ReorderMarkers_Response(metaclass=Metaclass_ReorderMarkers_Response):
    """Message class 'ReorderMarkers_Response'."""

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


class Metaclass_ReorderMarkers(type):
    """Metaclass of service 'ReorderMarkers'."""

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
                'marker_interfacing.srv.ReorderMarkers')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__reorder_markers

            from marker_interfacing.srv import _reorder_markers
            if _reorder_markers.Metaclass_ReorderMarkers_Request._TYPE_SUPPORT is None:
                _reorder_markers.Metaclass_ReorderMarkers_Request.__import_type_support__()
            if _reorder_markers.Metaclass_ReorderMarkers_Response._TYPE_SUPPORT is None:
                _reorder_markers.Metaclass_ReorderMarkers_Response.__import_type_support__()


class ReorderMarkers(metaclass=Metaclass_ReorderMarkers):
    from marker_interfacing.srv._reorder_markers import ReorderMarkers_Request as Request
    from marker_interfacing.srv._reorder_markers import ReorderMarkers_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')