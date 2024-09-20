# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_mobiman_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED mobiman_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(mobiman_FOUND FALSE)
  elseif(NOT mobiman_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(mobiman_FOUND FALSE)
  endif()
  return()
endif()
set(_mobiman_CONFIG_INCLUDED TRUE)

# output package information
if(NOT mobiman_FIND_QUIETLY)
  message(STATUS "Found mobiman: 0.0.0 (${mobiman_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'mobiman' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${mobiman_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(mobiman_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${mobiman_DIR}/${_extra}")
endforeach()
