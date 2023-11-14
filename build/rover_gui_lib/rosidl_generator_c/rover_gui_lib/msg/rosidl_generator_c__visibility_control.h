// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef ROVER_GUI_LIB__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define ROVER_GUI_LIB__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_rover_gui_lib __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_rover_gui_lib __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_rover_gui_lib __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_rover_gui_lib __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_rover_gui_lib
    #define ROSIDL_GENERATOR_C_PUBLIC_rover_gui_lib ROSIDL_GENERATOR_C_EXPORT_rover_gui_lib
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_rover_gui_lib ROSIDL_GENERATOR_C_IMPORT_rover_gui_lib
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_rover_gui_lib __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_rover_gui_lib
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_rover_gui_lib __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_rover_gui_lib
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // ROVER_GUI_LIB__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
