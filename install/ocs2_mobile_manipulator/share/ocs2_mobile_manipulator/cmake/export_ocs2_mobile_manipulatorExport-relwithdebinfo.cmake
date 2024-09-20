#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ocs2_mobile_manipulator::ocs2_mobile_manipulator" for configuration "RelWithDebInfo"
set_property(TARGET ocs2_mobile_manipulator::ocs2_mobile_manipulator APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(ocs2_mobile_manipulator::ocs2_mobile_manipulator PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libocs2_mobile_manipulator.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libocs2_mobile_manipulator.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ocs2_mobile_manipulator::ocs2_mobile_manipulator )
list(APPEND _IMPORT_CHECK_FILES_FOR_ocs2_mobile_manipulator::ocs2_mobile_manipulator "${_IMPORT_PREFIX}/lib/libocs2_mobile_manipulator.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
