# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_ocs2_oc_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED ocs2_oc_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(ocs2_oc_FOUND FALSE)
  elseif(NOT ocs2_oc_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(ocs2_oc_FOUND FALSE)
  endif()
  return()
endif()
set(_ocs2_oc_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ocs2_oc_FIND_QUIETLY)
  message(STATUS "Found ocs2_oc: 0.0.0 (${ocs2_oc_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ocs2_oc' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${ocs2_oc_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ocs2_oc_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_targets-extras.cmake")
foreach(_extra ${_extras})
  include("${ocs2_oc_DIR}/${_extra}")
endforeach()