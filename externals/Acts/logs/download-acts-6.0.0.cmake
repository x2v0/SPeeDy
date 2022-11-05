message(STATUS "downloading...
     src='https://lcgpackages.web.cern.ch/tarFiles/sources/acts-6.0.0.tar.gz'
     dst='/home/jenkins/agent/workspace/lcg_jenk8s_nightly/build/frameworks/acts-6.0.0/src/acts-6.0.0.tar.gz'
     timeout='none'")




if("x" STREQUAL "x")
  file(DOWNLOAD
    "https://lcgpackages.web.cern.ch/tarFiles/sources/acts-6.0.0.tar.gz"
    "/home/jenkins/agent/workspace/lcg_jenk8s_nightly/build/frameworks/acts-6.0.0/src/acts-6.0.0.tar.gz"
    # no EXPECTED_HASH
    # no TIMEOUT
    STATUS status
    LOG log)
else()
  get_filename_component(fname "/home/jenkins/agent/workspace/lcg_jenk8s_nightly/build/frameworks/acts-6.0.0/src/acts-6.0.0.tar.gz" NAME)
  if(EXISTS "/${fname}")
    get_filename_component(ddir "/home/jenkins/agent/workspace/lcg_jenk8s_nightly/build/frameworks/acts-6.0.0/src/acts-6.0.0.tar.gz" PATH)
    file(COPY "/${fname}" DESTINATION "${ddir}")
    set(status 0 "copy from cache")
  else()
    file(DOWNLOAD
      "https://lcgpackages.web.cern.ch/tarFiles/sources/acts-6.0.0.tar.gz"
      "/home/jenkins/agent/workspace/lcg_jenk8s_nightly/build/frameworks/acts-6.0.0/src/acts-6.0.0.tar.gz"
      # no EXPECTED_HASH
      # no TIMEOUT
      STATUS status
      LOG log)
    file(COPY "/home/jenkins/agent/workspace/lcg_jenk8s_nightly/build/frameworks/acts-6.0.0/src/acts-6.0.0.tar.gz" DESTINATION "")
  endif()
endif()

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'https://lcgpackages.web.cern.ch/tarFiles/sources/acts-6.0.0.tar.gz' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
