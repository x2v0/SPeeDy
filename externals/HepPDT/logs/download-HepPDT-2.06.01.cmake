message(STATUS "downloading...
     src='https://lcgpackages.web.cern.ch/tarFiles/sources/HepPDT-2.06.01.tar.gz'
     dst='/home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01.tar.gz'
     timeout='none'")

function(sleep_before_download attempt)
  if(attempt EQUAL 0)
    return()
  endif()

  if(attempt EQUAL 1)
    message(STATUS "Retrying...")
    return()
  endif()

  set(sleep_seconds 0)

  if(attempt EQUAL 2)
    set(sleep_seconds 5)
  elseif(attempt EQUAL 3)
    set(sleep_seconds 5)
  elseif(attempt EQUAL 4)
    set(sleep_seconds 15)
  elseif(attempt EQUAL 5)
    set(sleep_seconds 60)
  elseif(attempt EQUAL 6)
    set(sleep_seconds 90)
  elseif(attempt EQUAL 7)
    set(sleep_seconds 300)
  else()
    set(sleep_seconds 1200)
  endif()

  message(STATUS "Retry after ${sleep_seconds} seconds (attempt #${attempt}) ...")

  execute_process(COMMAND "${CMAKE_COMMAND}" -E sleep "${sleep_seconds}")
endfunction()



set(retry_number 6)
set(download_retry_codes 7 6 8 15 22)
set(skip_url_list)
set(status_code)

foreach(i RANGE "${retry_number}")
  message(STATUS "status_code ${status_code}")
#  list (FIND download_retry_codes "${status_code}" _index)
#  if (${_index} GREATER -1)
     sleep_before_download("${i}")
#  endif()




if("x" STREQUAL "x")
  file(DOWNLOAD
    "https://lcgpackages.web.cern.ch/tarFiles/sources/HepPDT-2.06.01.tar.gz"
    "/home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01.tar.gz"
    # no EXPECTED_HASH
    # no TIMEOUT
    STATUS status
    LOG log)
else()
  get_filename_component(fname "/home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01.tar.gz" NAME)
  if(EXISTS "/${fname}")
    get_filename_component(ddir "/home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01.tar.gz" PATH)
    file(COPY "/${fname}" DESTINATION "${ddir}")
    set(status 0 "copy from cache")
  else()
    file(DOWNLOAD
      "https://lcgpackages.web.cern.ch/tarFiles/sources/HepPDT-2.06.01.tar.gz"
      "/home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01.tar.gz"
      # no EXPECTED_HASH
      # no TIMEOUT
      STATUS status
      LOG log)
    file(COPY "/home/sftnight/build/workspace/lcg_nightly_pipeline/build/externals/HepPDT-2.06.01/src/HepPDT-2.06.01.tar.gz" DESTINATION "")
  endif()
endif()

list(GET status 0 status_code)
list(GET status 1 status_string)

if(status_code EQUAL 0)
   message(STATUS "Downloading... done")
   return()
endif()

endforeach()

if(NOT status_code EQUAL 0)
  message(FATAL_ERROR "error: downloading 'https://lcgpackages.web.cern.ch/tarFiles/sources/HepPDT-2.06.01.tar.gz' failed
  status_code: ${status_code}
  status_string: ${status_string}
  log: ${log}
")
endif()

#message(STATUS "downloading... done")
