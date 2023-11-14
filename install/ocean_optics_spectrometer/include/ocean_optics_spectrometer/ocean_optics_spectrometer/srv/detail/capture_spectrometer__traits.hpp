// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ocean_optics_spectrometer:srv/CaptureSpectrometer.idl
// generated code does not contain a copyright notice

#ifndef OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__TRAITS_HPP_
#define OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace ocean_optics_spectrometer
{

namespace srv
{

inline void to_flow_style_yaml(
  const CaptureSpectrometer_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: integration_time
  {
    out << "integration_time: ";
    rosidl_generator_traits::value_to_yaml(msg.integration_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CaptureSpectrometer_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: integration_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "integration_time: ";
    rosidl_generator_traits::value_to_yaml(msg.integration_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CaptureSpectrometer_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ocean_optics_spectrometer

namespace rosidl_generator_traits
{

[[deprecated("use ocean_optics_spectrometer::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ocean_optics_spectrometer::srv::CaptureSpectrometer_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  ocean_optics_spectrometer::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ocean_optics_spectrometer::srv::to_yaml() instead")]]
inline std::string to_yaml(const ocean_optics_spectrometer::srv::CaptureSpectrometer_Request & msg)
{
  return ocean_optics_spectrometer::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request>()
{
  return "ocean_optics_spectrometer::srv::CaptureSpectrometer_Request";
}

template<>
inline const char * name<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request>()
{
  return "ocean_optics_spectrometer/srv/CaptureSpectrometer_Request";
}

template<>
struct has_fixed_size<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace ocean_optics_spectrometer
{

namespace srv
{

inline void to_flow_style_yaml(
  const CaptureSpectrometer_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: wavelengths
  {
    if (msg.wavelengths.size() == 0) {
      out << "wavelengths: []";
    } else {
      out << "wavelengths: [";
      size_t pending_items = msg.wavelengths.size();
      for (auto item : msg.wavelengths) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: intensities
  {
    if (msg.intensities.size() == 0) {
      out << "intensities: []";
    } else {
      out << "intensities: [";
      size_t pending_items = msg.intensities.size();
      for (auto item : msg.intensities) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CaptureSpectrometer_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: wavelengths
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wavelengths.size() == 0) {
      out << "wavelengths: []\n";
    } else {
      out << "wavelengths:\n";
      for (auto item : msg.wavelengths) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: intensities
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.intensities.size() == 0) {
      out << "intensities: []\n";
    } else {
      out << "intensities:\n";
      for (auto item : msg.intensities) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CaptureSpectrometer_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace ocean_optics_spectrometer

namespace rosidl_generator_traits
{

[[deprecated("use ocean_optics_spectrometer::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ocean_optics_spectrometer::srv::CaptureSpectrometer_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  ocean_optics_spectrometer::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ocean_optics_spectrometer::srv::to_yaml() instead")]]
inline std::string to_yaml(const ocean_optics_spectrometer::srv::CaptureSpectrometer_Response & msg)
{
  return ocean_optics_spectrometer::srv::to_yaml(msg);
}

template<>
inline const char * data_type<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response>()
{
  return "ocean_optics_spectrometer::srv::CaptureSpectrometer_Response";
}

template<>
inline const char * name<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response>()
{
  return "ocean_optics_spectrometer/srv/CaptureSpectrometer_Response";
}

template<>
struct has_fixed_size<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ocean_optics_spectrometer::srv::CaptureSpectrometer>()
{
  return "ocean_optics_spectrometer::srv::CaptureSpectrometer";
}

template<>
inline const char * name<ocean_optics_spectrometer::srv::CaptureSpectrometer>()
{
  return "ocean_optics_spectrometer/srv/CaptureSpectrometer";
}

template<>
struct has_fixed_size<ocean_optics_spectrometer::srv::CaptureSpectrometer>
  : std::integral_constant<
    bool,
    has_fixed_size<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request>::value &&
    has_fixed_size<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response>::value
  >
{
};

template<>
struct has_bounded_size<ocean_optics_spectrometer::srv::CaptureSpectrometer>
  : std::integral_constant<
    bool,
    has_bounded_size<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request>::value &&
    has_bounded_size<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response>::value
  >
{
};

template<>
struct is_service<ocean_optics_spectrometer::srv::CaptureSpectrometer>
  : std::true_type
{
};

template<>
struct is_service_request<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__TRAITS_HPP_
