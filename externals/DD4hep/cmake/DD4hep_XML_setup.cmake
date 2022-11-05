if(DD4HEP_USE_XERCESC)
  find_package( XercesC REQUIRED )
  set_target_properties(XercesC::XercesC
    PROPERTIES
    COMPILE_DEFINITIONS DD4HEP_USE_XERCESC
    INTERFACE_COMPILE_DEFINITIONS DD4HEP_USE_XERCESC
    )
  set(XML_LIBRARIES XercesC::XercesC)
else()
  set(DD4HEP_USE_XERCESC OFF)
  IF(NOT TARGET TinyXML AND NOT TARGET DD4hep::TinyXML)
    ADD_LIBRARY(TinyXML INTERFACE)
    ADD_LIBRARY(DD4hep::TinyXML ALIAS TinyXML)
    TARGET_COMPILE_DEFINITIONS(TinyXML INTERFACE DD4HEP_USE_TINYXML)
    INSTALL(TARGETS TinyXML EXPORT DD4hep DESTINATION lib)
  ENDIF()
  set(XML_LIBRARIES DD4hep::TinyXML)
endif()