#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "trac_ik_lib::trac_ik_lib" for configuration "RelWithDebInfo"
set_property(TARGET trac_ik_lib::trac_ik_lib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(trac_ik_lib::trac_ik_lib PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libtrac_ik_lib.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libtrac_ik_lib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS trac_ik_lib::trac_ik_lib )
list(APPEND _IMPORT_CHECK_FILES_FOR_trac_ik_lib::trac_ik_lib "${_IMPORT_PREFIX}/lib/libtrac_ik_lib.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
