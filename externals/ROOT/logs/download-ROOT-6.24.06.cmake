message(STATUS "downloading...
     src='http://root.cern.ch/download/root_v6.24.06.source.tar.gz'
     dst='/build/jenkins/workspace/lcg_nightly_pipeline/build/projects/ROOT-6.24.06/src/root_v6.24.06.source.tar.gz'
     timeout='none'")




if("x" STREQUAL "x")
  file(DOWNLOAD
    "http://root.cern.ch/download/root_v6.24.06.source.tar.gz"
    "/build/jenkins/workspace/lcg_nightly_pipeline/build/projects/ROOT-6.24.06/src/root_v6.24.06.source.tar.gz"
    # no EXPECTED_HASH
    # no TIMEOUT
    STATUS status
    LOG log)
else()
  get_filename_component(fname "/build/jenkins/workspace/lcg_nightly_pipeline/build/projects/ROOT-6.24.06/src/root_v6.24.06.source.tar.gz" NAME)
  if(EXISTS "/${fname}")
    get_filename_component(ddir "/build/jenkins/workspace/lcg_nightly_pipeline/build/projects/ROOT-6.24.06/src/root_v6.24.06.source.tar.gz" PATH)
    file(COPY "/${fname}" DESTINATION "${ddir}")
    set(status 0 "copy from cache")
  else()
    file(DOWNLOAD
      "http://root.cern.ch/download/root_v6.24.06.source.tar.gz"
      "/build/jenkins/workspace/lcg_nightly_pipeline/build/projects/ROOT-6.24.06/src/root_v6.24.06.source.tar.gz"
      # no EXPECTED_HASH
      # no TIMEOUT
      STATUS status
      LOG log)
    file(COPY "/build/jenkins/workspace/lcg_nightly_pipeline/build/projects/ROOT-6.24.06/src/root_v6.24.06.source.tar.gz" DESTINATION "")
  endif()
endif()

list(GET status 0 status_code)
list(GET status 1 status_string)

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'http://root.cern.ch/download/root_v6.24.06.source.tar.gz' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

message(STATUS "downloading... done")
