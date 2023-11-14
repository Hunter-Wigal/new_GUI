# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_urc_gui_lib_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED urc_gui_lib_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(urc_gui_lib_FOUND FALSE)
  elseif(NOT urc_gui_lib_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(urc_gui_lib_FOUND FALSE)
  endif()
  return()
endif()
set(_urc_gui_lib_CONFIG_INCLUDED TRUE)

# output package information
if(NOT urc_gui_lib_FIND_QUIETLY)
  message(STATUS "Found urc_gui_lib: 0.0.0 (${urc_gui_lib_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'urc_gui_lib' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${urc_gui_lib_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(urc_gui_lib_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${urc_gui_lib_DIR}/${_extra}")
endforeach()
