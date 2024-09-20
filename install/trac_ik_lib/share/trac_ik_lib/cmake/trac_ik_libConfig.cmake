# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_trac_ik_lib_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED trac_ik_lib_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(trac_ik_lib_FOUND FALSE)
  elseif(NOT trac_ik_lib_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(trac_ik_lib_FOUND FALSE)
  endif()
  return()
endif()
set(_trac_ik_lib_CONFIG_INCLUDED TRUE)

# output package information
if(NOT trac_ik_lib_FIND_QUIETLY)
  message(STATUS "Found trac_ik_lib: 0.1.0 (${trac_ik_lib_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'trac_ik_lib' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${trac_ik_lib_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(trac_ik_lib_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake;ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${trac_ik_lib_DIR}/${_extra}")
endforeach()
