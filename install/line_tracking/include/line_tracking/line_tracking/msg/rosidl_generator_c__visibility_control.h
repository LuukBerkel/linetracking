// generated from rosidl_generator_c/resource/rosidl_generator_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef LINE_TRACKING__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
#define LINE_TRACKING__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_GENERATOR_C_EXPORT_line_tracking __attribute__ ((dllexport))
    #define ROSIDL_GENERATOR_C_IMPORT_line_tracking __attribute__ ((dllimport))
  #else
    #define ROSIDL_GENERATOR_C_EXPORT_line_tracking __declspec(dllexport)
    #define ROSIDL_GENERATOR_C_IMPORT_line_tracking __declspec(dllimport)
  #endif
  #ifdef ROSIDL_GENERATOR_C_BUILDING_DLL_line_tracking
    #define ROSIDL_GENERATOR_C_PUBLIC_line_tracking ROSIDL_GENERATOR_C_EXPORT_line_tracking
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_line_tracking ROSIDL_GENERATOR_C_IMPORT_line_tracking
  #endif
#else
  #define ROSIDL_GENERATOR_C_EXPORT_line_tracking __attribute__ ((visibility("default")))
  #define ROSIDL_GENERATOR_C_IMPORT_line_tracking
  #if __GNUC__ >= 4
    #define ROSIDL_GENERATOR_C_PUBLIC_line_tracking __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_GENERATOR_C_PUBLIC_line_tracking
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // LINE_TRACKING__MSG__ROSIDL_GENERATOR_C__VISIBILITY_CONTROL_H_
