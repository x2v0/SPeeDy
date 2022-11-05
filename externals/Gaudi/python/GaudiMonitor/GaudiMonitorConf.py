#Sun Jul 31 03:17:09 2022"""Automatically generated. DO NOT EDIT please"""
import sys
if sys.version_info >= (3,):
    # Python 2 compatibility
    long = int
from GaudiKernel.Proxy.Configurable import *

class ExceptionSvc( ConfigurableService ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'AuditServices' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AutoRetrieveTools' : True, # bool
    'CheckToolDeps' : True, # bool
    'Catch' : 'ALL', # str
    'Errors' : 'NONE', # str
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Service] """,
    'AuditServices' : """ [[deprecated]] unused [Service] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Service] """,
    'AuditStart' : """ trigger auditor on start() [Service] """,
    'AuditStop' : """ trigger auditor on stop() [Service] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Service] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Service] """,
    'AuditRestart' : """ trigger auditor on restart() [Service] """,
    'AutoRetrieveTools' : """ retrieve all AlgTools during initialize [Service] """,
    'CheckToolDeps' : """ check data dependencies of AlgTools (error if any found) [Service] """,
    'Catch' : """  [ExceptionSvc] """,
    'Errors' : """  [ExceptionSvc] """,
  }
  __declaration_location__ = 'ExceptionSvc.cpp:34'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(ExceptionSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiMonitor'
  def getType( self ):
      return 'ExceptionSvc'
  pass # class ExceptionSvc

class HistorySvc( ConfigurableService ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'AuditServices' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AutoRetrieveTools' : True, # bool
    'CheckToolDeps' : True, # bool
    'Dump' : False, # bool
    'Activate' : True, # bool
    'OutputFile' : '', # str
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Service] """,
    'AuditServices' : """ [[deprecated]] unused [Service] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Service] """,
    'AuditStart' : """ trigger auditor on start() [Service] """,
    'AuditStop' : """ trigger auditor on stop() [Service] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Service] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Service] """,
    'AuditRestart' : """ trigger auditor on restart() [Service] """,
    'AutoRetrieveTools' : """ retrieve all AlgTools during initialize [Service] """,
    'CheckToolDeps' : """ check data dependencies of AlgTools (error if any found) [Service] """,
    'Dump' : """  [HistorySvc] """,
    'Activate' : """  [HistorySvc] """,
    'OutputFile' : """  [HistorySvc] """,
  }
  __declaration_location__ = 'HistorySvc.cpp:53'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HistorySvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiMonitor'
  def getType( self ):
      return 'HistorySvc'
  pass # class HistorySvc
