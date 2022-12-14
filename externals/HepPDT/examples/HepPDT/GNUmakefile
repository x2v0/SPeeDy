################################################################################ 
#
# makefile for HepPDT examples
#
# use: gmake [INCDIR= ] [CXX= ] [LIBNAME= ] all
#      gmake [INCDIR= ] [CXX= ] [LIBNAME= ] run
#
# Options:  
#      [HEPPDT_BASE= ]
#      [HerwigLIB= ]
#      [IsajetLIB= ]
#      [PythiaLIB= ]
#
################################################################################ 
#
# The examList executables are saved here to make it easy to verify 
# particle numbering translations.
#
################################################################################ 

  HEPPDT_BASE= /cvmfs/sft-nightlies.cern.ch/lcg/latest/HepPDT/2.06.01-dba76/aarch64-centos7-gcc11-opt
  CXX = /cvmfs/sft.cern.ch/lcg/releases/gcc/11.2.0-8a51a/aarch64-centos7/bin/g++
  HerwigLIB = $(HERWIG_DIR)/lib/libherwig.a $(HERWIG_DIR)/lib/libherdum.a $(HERWIG_DIR)/lib/timel.o
  IsajetLIB = $(ISAJET_DIR)/libisajet.a
  PythiaLIB = $(PYLIB)/pydata.o $(PYLIB)/libpythia.a $(PYLIB)/libpydum.a
  INCDIR    = -I$(HEPPDT_BASE)/include
  LIBS = 

################################################################################ 

UNAME = $(shell uname)
ifeq "$(UNAME)" "Linux"
  LIBNAME     = -L$(HEPPDT_BASE)/lib -lHepPDT -lHepPID \
                -Wl,-rpath -Wl,$(HEPPDT_BASE)/lib 
else
  LIBNAME     = -L$(HEPPDT_BASE)/lib -lHepPDT -lHepPID 
endif

################################################################################ 

ifndef DEBUG
    DEBUG = none
    DFLG =
    SFX =
else
    DFLG = $(DEBUG)
    SFX = _g
endif

ifdef HERWIG_DIR
    INCDIR += -I$(HERWIG_DIR)/src
endif

ifdef PYTHIA_DIR
    INCDIR += -I$(PYTHIA_DIR)/src/inc
endif

ifeq "$(CXX)" "g++"
    F77 = g77
    FFLAGS = $(DFLG) -fno-second-underscore $(INCDIR)
else
    F77 = f77
    FFLAGS = $(DFLG) $(INCDIR)
endif

################################################################################ 

AR=ar
ARFLG = -urs

CXXFLAGS = $(DFLG) -O -ansi -pedantic -Wall -D_GNU_SOURCE -g -O2 $(INCDIR)

#------------------------------------------

all: examMyPDT 

run:  run_test

examMyPDT: examMyPDT.o
	$(CXX) $(CXXFLAGS) -o $@ examMyPDT.o \
		$(LIBNAME) $(LIBS)

run_test: examMyPDT
	examMyPDT > examMyPDT.log
	diff examMyPDT.out examMyPDT.out.save

cleanobjs:
	rm -f *.o

clean:
	rm -f *.o
	rm -f examMyPDT
	rm -f *.out *.log
	rm -f fort.*


#------------------------------------------

.PHONY:  clean cleanobjs

.SUFFIXES :             # cancel implicit rules
.SUFFIXES : .o .cc .cpp .F .inc .h .hh

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

%_g.o: %.cc
	$(CXX) $(CXXFLAGS) -c -o $@ $<

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

%_g.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

%.o: %.F
	$(F77) $(FFLAGS) -c -o $@ $<
	
%_g.o: %.F
	$(F77) $(FFLAGS) -c -o $@ $<
 
