#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Gaudi::GaudiPluginService" for configuration "Release"
set_property(TARGET Gaudi::GaudiPluginService APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::GaudiPluginService PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libGaudiPluginService.so"
  IMPORTED_SONAME_RELEASE "libGaudiPluginService.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::GaudiPluginService )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::GaudiPluginService "${_IMPORT_PREFIX}/lib/libGaudiPluginService.so" )

# Import target "Gaudi::listcomponents" for configuration "Release"
set_property(TARGET Gaudi::listcomponents APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::listcomponents PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/listcomponents"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::listcomponents )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::listcomponents "${_IMPORT_PREFIX}/bin/listcomponents" )

# Import target "Gaudi::Test_GaudiPluginService_UseCasesLib" for configuration "Release"
set_property(TARGET Gaudi::Test_GaudiPluginService_UseCasesLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::Test_GaudiPluginService_UseCasesLib PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "Gaudi::GaudiPluginService;Boost::unit_test_framework"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTest_GaudiPluginService_UseCasesLib.so"
  IMPORTED_SONAME_RELEASE "libTest_GaudiPluginService_UseCasesLib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::Test_GaudiPluginService_UseCasesLib )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::Test_GaudiPluginService_UseCasesLib "${_IMPORT_PREFIX}/lib/libTest_GaudiPluginService_UseCasesLib.so" )

# Import target "Gaudi::Test_GaudiPluginService_LegacyUseCasesLib" for configuration "Release"
set_property(TARGET Gaudi::Test_GaudiPluginService_LegacyUseCasesLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::Test_GaudiPluginService_LegacyUseCasesLib PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "Gaudi::GaudiPluginService"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libTest_GaudiPluginService_LegacyUseCasesLib.so"
  IMPORTED_SONAME_RELEASE "libTest_GaudiPluginService_LegacyUseCasesLib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::Test_GaudiPluginService_LegacyUseCasesLib )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::Test_GaudiPluginService_LegacyUseCasesLib "${_IMPORT_PREFIX}/lib/libTest_GaudiPluginService_LegacyUseCasesLib.so" )

# Import target "Gaudi::GaudiKernel" for configuration "Release"
set_property(TARGET Gaudi::GaudiKernel APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::GaudiKernel PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_RELEASE "Python::Python"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libGaudiKernel.so"
  IMPORTED_SONAME_RELEASE "libGaudiKernel.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::GaudiKernel )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::GaudiKernel "${_IMPORT_PREFIX}/lib/libGaudiKernel.so" )

# Import target "Gaudi::profile_Property" for configuration "Release"
set_property(TARGET Gaudi::profile_Property APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::profile_Property PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/profile_Property"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::profile_Property )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::profile_Property "${_IMPORT_PREFIX}/bin/profile_Property" )

# Import target "Gaudi::PathResolver_test" for configuration "Release"
set_property(TARGET Gaudi::PathResolver_test APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::PathResolver_test PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/PathResolver_test"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::PathResolver_test )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::PathResolver_test "${_IMPORT_PREFIX}/bin/PathResolver_test" )

# Import target "Gaudi::genconf" for configuration "Release"
set_property(TARGET Gaudi::genconf APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::genconf PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/genconf"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::genconf )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::genconf "${_IMPORT_PREFIX}/bin/genconf" )

# Import target "Gaudi::instructionsetLevel" for configuration "Release"
set_property(TARGET Gaudi::instructionsetLevel APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::instructionsetLevel PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/instructionsetLevel"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::instructionsetLevel )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::instructionsetLevel "${_IMPORT_PREFIX}/bin/instructionsetLevel" )

# Import target "Gaudi::JOS_benchmark" for configuration "Release"
set_property(TARGET Gaudi::JOS_benchmark APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::JOS_benchmark PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/JOS_benchmark"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::JOS_benchmark )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::JOS_benchmark "${_IMPORT_PREFIX}/bin/JOS_benchmark" )

# Import target "Gaudi::JOS_memory_use" for configuration "Release"
set_property(TARGET Gaudi::JOS_memory_use APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::JOS_memory_use PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/JOS_memory_use"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::JOS_memory_use )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::JOS_memory_use "${_IMPORT_PREFIX}/bin/JOS_memory_use" )

# Import target "Gaudi::GaudiUtilsLib" for configuration "Release"
set_property(TARGET Gaudi::GaudiUtilsLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::GaudiUtilsLib PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libGaudiUtilsLib.so"
  IMPORTED_SONAME_RELEASE "libGaudiUtilsLib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::GaudiUtilsLib )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::GaudiUtilsLib "${_IMPORT_PREFIX}/lib/libGaudiUtilsLib.so" )

# Import target "Gaudi::testXMLFileCatalogWrite" for configuration "Release"
set_property(TARGET Gaudi::testXMLFileCatalogWrite APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::testXMLFileCatalogWrite PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/testXMLFileCatalogWrite"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::testXMLFileCatalogWrite )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::testXMLFileCatalogWrite "${_IMPORT_PREFIX}/bin/testXMLFileCatalogWrite" )

# Import target "Gaudi::testXMLFileCatalogRead" for configuration "Release"
set_property(TARGET Gaudi::testXMLFileCatalogRead APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::testXMLFileCatalogRead PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/testXMLFileCatalogRead"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::testXMLFileCatalogRead )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::testXMLFileCatalogRead "${_IMPORT_PREFIX}/bin/testXMLFileCatalogRead" )

# Import target "Gaudi::Gaudi" for configuration "Release"
set_property(TARGET Gaudi::Gaudi APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::Gaudi PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/Gaudi"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::Gaudi )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::Gaudi "${_IMPORT_PREFIX}/bin/Gaudi" )

# Import target "Gaudi::GaudiAlgLib" for configuration "Release"
set_property(TARGET Gaudi::GaudiAlgLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::GaudiAlgLib PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libGaudiAlgLib.so"
  IMPORTED_SONAME_RELEASE "libGaudiAlgLib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::GaudiAlgLib )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::GaudiAlgLib "${_IMPORT_PREFIX}/lib/libGaudiAlgLib.so" )

# Import target "Gaudi::GaudiCommonSvcLib" for configuration "Release"
set_property(TARGET Gaudi::GaudiCommonSvcLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::GaudiCommonSvcLib PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libGaudiCommonSvcLib.so"
  IMPORTED_SONAME_RELEASE "libGaudiCommonSvcLib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::GaudiCommonSvcLib )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::GaudiCommonSvcLib "${_IMPORT_PREFIX}/lib/libGaudiCommonSvcLib.so" )

# Import target "Gaudi::makeThesis" for configuration "Release"
set_property(TARGET Gaudi::makeThesis APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::makeThesis PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/makeThesis"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::makeThesis )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::makeThesis "${_IMPORT_PREFIX}/bin/makeThesis" )

# Import target "Gaudi::concurrentRun" for configuration "Release"
set_property(TARGET Gaudi::concurrentRun APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::concurrentRun PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/concurrentRun"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::concurrentRun )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::concurrentRun "${_IMPORT_PREFIX}/bin/concurrentRun" )

# Import target "Gaudi::GaudiMPLib" for configuration "Release"
set_property(TARGET Gaudi::GaudiMPLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::GaudiMPLib PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libGaudiMPLib.so"
  IMPORTED_SONAME_RELEASE "libGaudiMPLib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::GaudiMPLib )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::GaudiMPLib "${_IMPORT_PREFIX}/lib/libGaudiMPLib.so" )

# Import target "Gaudi::GaudiGenProfilingHtml" for configuration "Release"
set_property(TARGET Gaudi::GaudiGenProfilingHtml APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::GaudiGenProfilingHtml PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/GaudiGenProfilingHtml"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::GaudiGenProfilingHtml )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::GaudiGenProfilingHtml "${_IMPORT_PREFIX}/bin/GaudiGenProfilingHtml" )

# Import target "Gaudi::GaudiPythonLib" for configuration "Release"
set_property(TARGET Gaudi::GaudiPythonLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::GaudiPythonLib PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libGaudiPythonLib.so"
  IMPORTED_SONAME_RELEASE "libGaudiPythonLib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::GaudiPythonLib )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::GaudiPythonLib "${_IMPORT_PREFIX}/lib/libGaudiPythonLib.so" )

# Import target "Gaudi::RootCnvLib" for configuration "Release"
set_property(TARGET Gaudi::RootCnvLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::RootCnvLib PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libRootCnvLib.so"
  IMPORTED_SONAME_RELEASE "libRootCnvLib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::RootCnvLib )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::RootCnvLib "${_IMPORT_PREFIX}/lib/libRootCnvLib.so" )

# Import target "Gaudi::gaudi_merge" for configuration "Release"
set_property(TARGET Gaudi::gaudi_merge APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::gaudi_merge PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/gaudi_merge"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::gaudi_merge )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::gaudi_merge "${_IMPORT_PREFIX}/bin/gaudi_merge" )

# Import target "Gaudi::extract_event" for configuration "Release"
set_property(TARGET Gaudi::extract_event APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::extract_event PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/extract_event"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::extract_event )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::extract_event "${_IMPORT_PREFIX}/bin/extract_event" )

# Import target "Gaudi::GaudiExamplesLib" for configuration "Release"
set_property(TARGET Gaudi::GaudiExamplesLib APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::GaudiExamplesLib PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libGaudiExamplesLib.so"
  IMPORTED_SONAME_RELEASE "libGaudiExamplesLib.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::GaudiExamplesLib )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::GaudiExamplesLib "${_IMPORT_PREFIX}/lib/libGaudiExamplesLib.so" )

# Import target "Gaudi::Allocator" for configuration "Release"
set_property(TARGET Gaudi::Allocator APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::Allocator PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/Allocator"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::Allocator )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::Allocator "${_IMPORT_PREFIX}/bin/Allocator" )

# Import target "Gaudi::testAppMgrStateMachine" for configuration "Release"
set_property(TARGET Gaudi::testAppMgrStateMachine APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::testAppMgrStateMachine PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/testAppMgrStateMachine"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::testAppMgrStateMachine )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::testAppMgrStateMachine "${_IMPORT_PREFIX}/bin/testAppMgrStateMachine" )

# Import target "Gaudi::QueueingEventProcessorExample" for configuration "Release"
set_property(TARGET Gaudi::QueueingEventProcessorExample APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(Gaudi::QueueingEventProcessorExample PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/QueueingEventProcessorExample"
  )

list(APPEND _IMPORT_CHECK_TARGETS Gaudi::QueueingEventProcessorExample )
list(APPEND _IMPORT_CHECK_FILES_FOR_Gaudi::QueueingEventProcessorExample "${_IMPORT_PREFIX}/bin/QueueingEventProcessorExample" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
