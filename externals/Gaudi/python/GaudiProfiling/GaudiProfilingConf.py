#Sun Jul 31 03:16:53 2022"""Automatically generated. DO NOT EDIT please"""
import sys
if sys.version_info >= (3,):
    # Python 2 compatibility
    long = int
from GaudiKernel.Proxy.Configurable import *

class PerfMonAuditor( ConfigurableAuditor ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'EVENT0' : '', # str
    'EVENT1' : '', # str
    'EVENT2' : '', # str
    'EVENT3' : '', # str
    'FAMILY' : '', # str
    'PREFIX' : '', # str
    'INV0' : False, # bool
    'INV1' : False, # bool
    'INV2' : False, # bool
    'INV3' : False, # bool
    'CMASK0' : 0, # int
    'CMASK1' : 0, # int
    'CMASK2' : 0, # int
    'CMASK3' : 0, # int
    'SP0' : 0, # int
    'SP1' : 0, # int
    'SP2' : 0, # int
    'SP3' : 0, # int
    'SAMPLE' : False, # bool
    'START_AT_EVENT' : 0, # int
    'IS_NEHALEM' : 1, # int
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Auditor] """,
    'Enable' : """ should the auditor be used or not [Auditor] """,
  }
  __declaration_location__ = 'PerfMonAuditor.cpp:979'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(PerfMonAuditor, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiProfiling'
  def getType( self ):
      return 'PerfMonAuditor'
  pass # class PerfMonAuditor
