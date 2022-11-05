###############################################################################
# (c) Copyright 2022 JINR for the benefit of the SPD Collaboration            #
#                                                                             #
# This software is distributed under the terms of the GNU General Public      #
# Licence version 3 (GPL Version 3), copied verbatim in the file "COPYING".   #
#                                                                             #
# In applying this licence, CERN does not waive the privileges and immunities #
# granted to it by virtue of its status as an Intergovernmental Organization  #
# or submit itself to any jurisdiction.                                       #
###############################################################################
# - Try to find GAUDI
# Defines:
#
#  GAUDI_FOUND
#  GAUDI_VERSION
#  GAUDI_INCLUDE_DIR
#  GAUDI_INCLUDE_DIRS (not cached)
#  GAUDI_<component>_LIBRARY
#  GAUDI_<component>_FOUND
#  GAUDI_LIBRARIES (not cached)
#  GAUDI_LIBRARY_DIRS (not cached)
#
# Note: version detection inspired by FindBoost.cmake

CMAKE_MINIMUM_REQUIRED(VERSION 3.15)

project(SPeeDy)

list(PREPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
include(DeveloperBuildType)

set(GAUDI_ROOT_DIR ${PROJECT_SOURCE_DIR}/externals/Gaudi)
list(PREPEND CMAKE_MODULE_PATH ${GAUDI_ROOT_DIR}/lib/cmake/Gaudi)

include(GaudiConfig)
include(GaudiConfigVersion) 

set(Gaudi_VERSION 36.7)

message(STATUS "Gaudi_VERSION: ${Gaudi_VERSION}")
message(STATUS "Gaudi_INCLUDE_DIR: ${Gaudi_INCLUDE_DIR}")
message(STATUS "Gaudi_LIBRARY_DIR: ${Gaudi_LIBRARY_DIR}")
message(STATUS "GAUDI_ROOT_DIR: ${GAUDI_ROOT_DIR}")
message(STATUS "Gaudi_BINARY_DIR: ${Gaudi_BINARY_DIR}")

gaudi_install(SCRIPTS)


find_package(Podio)

add_subdirectory(Examples)
add_subdirectory(FWCore)
add_subdirectory(k4ActsTracking)
add_subdirectory(k4Gen)
add_subdirectory(k4SimGeant4)
