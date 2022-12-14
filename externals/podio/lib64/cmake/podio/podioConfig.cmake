###############################################################################
# PODIO CMAKE CONFIG
#
# Exported Targets
#
#  podio::podio         Base library for podio
#  podio::podioDict     Root Dictionary for base podio classes
#  podio::podioRootIO
#         RootWriter and RootReader classes, needed for python,
#         contains podio::podio and podio::podioDict and the
#         required ROOT:: libraries
#
# Macros: see podioMacros.cmake for complete documentation
#
#  PODIO_GENERATE_DATAMODEL
#  PODIO_GENERATE_ROOTDICT
#
###############################################################################

####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was podioConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

macro(check_required_components _NAME)
  foreach(comp ${${_NAME}_FIND_COMPONENTS})
    if(NOT ${_NAME}_${comp}_FOUND)
      if(${_NAME}_FIND_REQUIRED_${comp})
        set(${_NAME}_FOUND FALSE)
      endif()
    endif()
  endforeach()
endmacro()

####################################################################################

set_and_check(podio_INCLUDE_DIR "${PACKAGE_PREFIX_DIR}/include")
set_and_check(podio_LIBRARY_DIR "${PACKAGE_PREFIX_DIR}/lib64")
set_and_check(podio_PYTHON_DIR "${PACKAGE_PREFIX_DIR}/python")
set(PODIO_IO_HANDLERS "ROOT;SIO")

include(CMakeFindDependencyMacro)
find_dependency(ROOT 6.27.01)
if(3.9.12)
  find_dependency(Python 3.9.12 COMPONENTS Interpreter)
else()
  find_dependency(Python COMPONENTS Interpreter)
endif()

if(ON)
  find_dependency(SIO)
  # Targets from SIO only become available with v00-01 so we rig them here to be
  # able to use them
  if (SIO_VERSION VERSION_LESS 0.1)
    message(STATUS "Found SIO without Targets, creating them on the fly")
    add_library(SIO::sio SHARED IMPORTED)
    set_target_properties(SIO::sio PROPERTIES
      INTERFACE_INCLUDE_DIRECTORIES ${SIO_INCLUDE_DIRS}
      INTERFACE_LINK_LIBRARIES ${SIO_LIBRARIES}
      IMPORTED_LOCATION ${SIO_LIBRARIES})
  endif()
endif()

if(NOT TARGET podio::podio)
  include("${CMAKE_CURRENT_LIST_DIR}/podioTargets.cmake")
  include("${CMAKE_CURRENT_LIST_DIR}/podioMacros.cmake")

  # ROOT only sets usage requirements from 6.14, so for
  # earlier versions need to hack in INTERFACE_INCLUDE_DIRECTORIES
  if(ROOT_VERSION VERSION_LESS 6.14)
    set_property(TARGET podio::podio APPEND PROPERTY INTERFACE_INCLUDE_DIRECTORIES "${ROOT_INCLUDE_DIRS}")
  endif()
endif()

check_required_components(podio)

# Print the default "Found" message and check library location
include(FindPackageHandleStandardArgs)
get_property(TEST_PODIO_LIBRARY TARGET podio::podio PROPERTY LOCATION)
find_package_handle_standard_args(podio DEFAULT_MSG CMAKE_CURRENT_LIST_FILE TEST_PODIO_LIBRARY)

