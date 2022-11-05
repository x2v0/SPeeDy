#!/bin/bash

#
# Simple script to run DD4hep tests
# - sources thisdd4hep.sh first and then
#   calls the command (given as first argument)
#   with all following arguments
#

# ---- initialize DD4hep for this shell
. /cvmfs/sft-nightlies.cern.ch/lcg/latest/DD4hep/master-bbf57/x86_64-centos7-gcc11-opt/bin/thisdd4hep.sh

#----- parse command line - first argument is the 
#      test to run
command=$1
theargs=""
shift
for i in "$@" ; do
    if [ $i != ${command} ] ; then 
	theargs="${theargs} $i"
    fi
done

echo " #### LD_LIBRARY_PATH = :  ${LD_LIBRARY_PATH}"
echo " #### DYLD_LIBRARY_PATH = :  ${DYLD_LIBRARY_PATH}"

echo "---running test :  '" ${command} ${theargs} "'"
eval ${command} ${theargs}
