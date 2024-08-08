#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "hpp-fcl::hpp-fcl" for configuration "RelWithDebInfo"
set_property(TARGET hpp-fcl::hpp-fcl APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(hpp-fcl::hpp-fcl PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "/home/system/Documents/release_test/install/lib/libhpp-fcl.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libhpp-fcl.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS hpp-fcl::hpp-fcl )
list(APPEND _IMPORT_CHECK_FILES_FOR_hpp-fcl::hpp-fcl "/home/system/Documents/release_test/install/lib/libhpp-fcl.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
