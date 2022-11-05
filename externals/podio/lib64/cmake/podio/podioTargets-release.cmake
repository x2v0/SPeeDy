#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "podio::podio" for configuration "Release"
set_property(TARGET podio::podio APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(podio::podio PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib64/libpodio.so"
  IMPORTED_SONAME_RELEASE "libpodio.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS podio::podio )
list(APPEND _IMPORT_CHECK_FILES_FOR_podio::podio "${_IMPORT_PREFIX}/lib64/libpodio.so" )

# Import target "podio::podioDict" for configuration "Release"
set_property(TARGET podio::podioDict APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(podio::podioDict PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib64/libpodioDict.so"
  IMPORTED_SONAME_RELEASE "libpodioDict.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS podio::podioDict )
list(APPEND _IMPORT_CHECK_FILES_FOR_podio::podioDict "${_IMPORT_PREFIX}/lib64/libpodioDict.so" )

# Import target "podio::podioRootIO" for configuration "Release"
set_property(TARGET podio::podioRootIO APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(podio::podioRootIO PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib64/libpodioRootIO.so"
  IMPORTED_SONAME_RELEASE "libpodioRootIO.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS podio::podioRootIO )
list(APPEND _IMPORT_CHECK_FILES_FOR_podio::podioRootIO "${_IMPORT_PREFIX}/lib64/libpodioRootIO.so" )

# Import target "podio::podioSioIO" for configuration "Release"
set_property(TARGET podio::podioSioIO APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(podio::podioSioIO PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib64/libpodioSioIO.so"
  IMPORTED_SONAME_RELEASE "libpodioSioIO.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS podio::podioSioIO )
list(APPEND _IMPORT_CHECK_FILES_FOR_podio::podioSioIO "${_IMPORT_PREFIX}/lib64/libpodioSioIO.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
