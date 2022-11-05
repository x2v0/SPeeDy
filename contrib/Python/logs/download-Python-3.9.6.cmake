message(STATUS "downloading...
     src='https://lcgpackages.web.cern.ch/tarFiles/sources/Python-3.9.6.tgz'
     dst='/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/Python-3.9.6/src/Python-3.9.6.tgz'
     timeout='none'")




if("x" STREQUAL "x")
  file(DOWNLOAD
    "https://lcgpackages.web.cern.ch/tarFiles/sources/Python-3.9.6.tgz"
    "/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/Python-3.9.6/src/Python-3.9.6.tgz"
    # no EXPECTED_HASH
    # no TIMEOUT
    STATUS status
    LOG log)
else()
  get_filename_component(fname "/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/Python-3.9.6/src/Python-3.9.6.tgz" NAME)
  if(EXISTS "/${fname}")
    get_filename_component(ddir "/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/Python-3.9.6/src/Python-3.9.6.tgz" PATH)
    file(COPY "/${fname}" DESTINATION "${ddir}")
    set(status 0 "copy from cache")
  else()
    file(DOWNLOAD
      "https://lcgpackages.web.cern.ch/tarFiles/sources/Python-3.9.6.tgz"
      "/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/Python-3.9.6/src/Python-3.9.6.tgz"
      # no EXPECTED_HASH
      # no TIMEOUT
      STATUS status
      LOG log)
    file(COPY "/build/jenkins/workspace/lcg_nightly_pipeline/build/externals/Python-3.9.6/src/Python-3.9.6.tgz" DESTINATION "")
  endif()
endif()

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'https://lcgpackages.web.cern.ch/tarFiles/sources/Python-3.9.6.tgz' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
