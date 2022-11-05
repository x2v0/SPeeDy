#!/bin/sh
if [ ! $?LD_LIBRARY_PATH ]; then
  export LD_LIBRARY_PATH=/cvmfs/sft-nightlies.cern.ch/lcg/latest/HepMC/2.06.11-d5a39/x86_64-centos7-gcc11-opt/lib
fi
if [ $?LD_LIBRARY_PATH ]; then
  export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:/cvmfs/sft-nightlies.cern.ch/lcg/latest/HepMC/2.06.11-d5a39/x86_64-centos7-gcc11-opt/lib
fi
export PYTHIA8DATA=${PYTHIA8_HOME}/xmldoc
