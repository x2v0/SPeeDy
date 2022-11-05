#------------------------------------------------------------------------------#
#
#
cmake_policy(SET CMP0012 NEW)

get_filename_component(PTL_CMAKE_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)

include(${CMAKE_CURRENT_LIST_DIR}/PTLConfigVersion.cmake)
include(CMakeFindDependencyMacro)

set(_PTL_AVAILABLE_COMPONENTS )

if(ON)
    list(APPEND _PTL_AVAILABLE_COMPONENTS shared)
endif()

if(OFF)
    list(APPEND _PTL_AVAILABLE_COMPONENTS static)
endif()

#------------------------------------------------------------------------------#
#   package initialization
#

####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was PTLConfig.cmake.in                            ########

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


#------------------------------------------------------------------------------#
#   install or build tree
#
set(_PTL_BUILD_TREE )
if(NOT _PTL_BUILD_TREE)
    set(_PTL_INSTALL_TREE ON)
endif()


#------------------------------------------------------------------------------#
#   configure lib and include
#
if(_PTL_INSTALL_TREE)

    set_and_check(PTL_INCLUDE_DIR "${PACKAGE_PREFIX_DIR}/include/Geant4")
    set_and_check(PTL_LIB_DIR "${PACKAGE_PREFIX_DIR}/lib64")

    include(${PTL_CMAKE_DIR}/PTLTargets.cmake)
    check_required_components(PTL)

    # get target
    foreach(_COMPONENT ${_PTL_AVAILABLE_COMPONENTS})
        # set the library
        if(NOT PTL_LIBRARY)
            set(PTL_LIBRARY ${_${_COMPONENT}_LOCATION} CACHE INTERNAL
                "PTL library")
        endif()
    endforeach()

    if(TRUE)
        set(CMAKE_THREAD_PREFER_PTHREAD ON)
        set(THREADS_PREFER_PTHREAD_FLAG ON)
        find_package(Threads REQUIRED)
    endif()

    if()
        set(TBB_ROOT_DIR )
        set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/PTL/Modules ${CMAKE_MODULE_PATH})
        find_package(TBB  REQUIRED)
    endif()

else()

    set(PTL_INCLUDE_DIR "/build/jenkins/workspace/lcg_nightly_pipeline/build/projects/Geant4-11.0.3/src/Geant4/11.0.3/source/externals/ptl")
    set(PTL_LIB_DIR "/build/jenkins/workspace/lcg_nightly_pipeline/build/projects/Geant4-11.0.3/src/Geant4-11.0.3-build/source/externals/ptl")

    set(PTL_Threads_FOUND TRUE)
    set(PTL_TBB_FOUND )

    if(NOT Threads_FOUND AND PTL_Threads_FOUND)
        set(CMAKE_THREAD_PREFER_PTHREAD ON)
        set(THREADS_PREFER_PTHREAD_FLAG ON)
        find_package(Threads REQUIRED)
    endif()

    if(NOT TBB_FOUND AND PTL_TBB_FOUND)
        set(TBB_ROOT_DIR )
        set(CMAKE_MODULE_PATH /build/jenkins/workspace/lcg_nightly_pipeline/build/projects/Geant4-11.0.3/src/Geant4/11.0.3/source/externals/ptl/cmake/Modules ${CMAKE_MODULE_PATH})
        find_package(TBB  REQUIRED)
    endif()

    if(NOT TARGET ptl-compile-options)
      include("/build/jenkins/workspace/lcg_nightly_pipeline/build/projects/Geant4-11.0.3/src/Geant4-11.0.3-build/source/externals/ptl/PTL-interface.cmake")
    endif()

    foreach(_COMPONENT ${_PTL_AVAILABLE_COMPONENTS})
        if(NOT TARGET ptl-${_COMPONENT})
            include("/build/jenkins/workspace/lcg_nightly_pipeline/build/projects/Geant4-11.0.3/src/Geant4-11.0.3-build/source/externals/ptl/PTL-${_COMPONENT}.cmake")
        endif()
        # set the library
        if(NOT PTL_LIBRARY)
            set(PTL_LIBRARY ptl-${_COMPONENT})
        endif()
    endforeach()

    set(PROJECT_DEPENDS ${PTL_LIBRARY})

endif()


#------------------------------------------------------------------------------#
# internal PTL include directory
#
set(PTL_INCLUDE_DIRS ${PTL_INCLUDE_DIR})


#------------------------------------------------------------------------------#
#   Linking type
#
if(WIN32)
    add_definitions(-D_PTL_ARCHIVE)
endif()


#------------------------------------------------------------------------------#
#   link target
#
set(PTL_LIBRARIES ${PTL_LIBRARY})


#------------------------------------------------------------------------------#
#   Definitions
#
set(PTL_USE_TBB OFF)
set(PTL_USE_GPU )
set(PTL_USE_CUDA )

if(NOT _PTL_INSTALL_TREE)
    list(APPEND PTL_LIBRARIES "")
endif()

