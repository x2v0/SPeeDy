#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ActsCore" for configuration "Release"
set_property(TARGET ActsCore APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(ActsCore PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib64/libActsCore.so"
  IMPORTED_SONAME_RELEASE "libActsCore.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS ActsCore )
list(APPEND _IMPORT_CHECK_FILES_FOR_ActsCore "${_IMPORT_PREFIX}/lib64/libActsCore.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
