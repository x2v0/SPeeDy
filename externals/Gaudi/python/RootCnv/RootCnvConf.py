#Sun Jul 31 03:16:50 2022"""Automatically generated. DO NOT EDIT please"""
import sys
if sys.version_info >= (3,):
    # Python 2 compatibility
    long = int
from GaudiKernel.Proxy.Configurable import *

class Gaudi__RootCnvSvc( ConfigurableService ) :
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
    'IOPerfStats' : '', # str
    'ShareFiles' : 'NO', # str
    'EnableIncident' : True, # bool
    'RecordsName' : '/FileRecords', # str
    'AutoFlush' : 100, # int
    'BasketSize' : 2097152, # int
    'BufferSize' : 2048, # int
    'SplitLevel' : 0, # int
    'GlobalCompression' : '', # str
    'LoadSection' : 'Event', # str
    'CacheSize' : 10485760, # int
    'LearnEntries' : 10, # int
    'CacheBranches' : [ '*' ], # list
    'VetoBranches' : [  ], # list
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
    'IOPerfStats' : """ Enable TTree IOperfStats if not empty; otherwise perf stat file name [Gaudi::RootCnvSvc] """,
    'ShareFiles' : """ Share files? If set to YES,  files will not be closed on finalize [Gaudi::RootCnvSvc] """,
    'EnableIncident' : """ Flag to enable incidents on FILE_OPEN [Gaudi::RootCnvSvc] """,
    'RecordsName' : """ Records name to fire incident for file records [Gaudi::RootCnvSvc] """,
    'AutoFlush' : """ AutoFlush parameter for ROOT TTree (Number of events between auto flushes) [Gaudi::RootCnvSvc] """,
    'BasketSize' : """ Basket optimization parameter for ROOT TTree (total basket size) [Gaudi::RootCnvSvc] """,
    'BufferSize' : """ Buffer size optimization parameter for ROOT TTree [Gaudi::RootCnvSvc] """,
    'SplitLevel' : """ Split level optimization parameter for ROOT TTree [Gaudi::RootCnvSvc] """,
    'GlobalCompression' : """ Compression-algorithm:compression-level,  empty: do nothing [Gaudi::RootCnvSvc] """,
  }
  __declaration_location__ = 'Components.cpp:15'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Gaudi__RootCnvSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'RootCnv'
  def getType( self ):
      return 'Gaudi::RootCnvSvc'
  pass # class Gaudi__RootCnvSvc

class Gaudi__RootEvtSelector( ConfigurableService ) :
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
    'EvtPersistencySvc' : 'EventPersistencySvc', # str
    'DbType' : '', # str
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
    'EvtPersistencySvc' : """ Name of the persistency service to search for conversion service [Gaudi::RootEvtSelector] """,
    'DbType' : """ dummy property to fake backwards compatibility [Gaudi::RootEvtSelector] """,
  }
  __declaration_location__ = 'Components.cpp:16'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Gaudi__RootEvtSelector, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'RootCnv'
  def getType( self ):
      return 'Gaudi::RootEvtSelector'
  pass # class Gaudi__RootEvtSelector

class Gaudi__RootPerfMonSvc( ConfigurableService ) :
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
    'IOPerfStats' : '', # str
    'Streams' : '', # str
    'BasketSize' : '', # str
    'BufferSize' : '', # str
    'SplitLevel' : '', # str
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
    'IOPerfStats' : """ Enable TTree IOperfStats if not empty; otherwise perf stat file name [Gaudi::RootPerfMonSvc] """,
    'Streams' : """  [Gaudi::RootPerfMonSvc] """,
    'BasketSize' : """  [Gaudi::RootPerfMonSvc] """,
    'BufferSize' : """  [Gaudi::RootPerfMonSvc] """,
    'SplitLevel' : """  [Gaudi::RootPerfMonSvc] """,
  }
  __declaration_location__ = 'Components.cpp:17'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Gaudi__RootPerfMonSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'RootCnv'
  def getType( self ):
      return 'Gaudi::RootPerfMonSvc'
  pass # class Gaudi__RootPerfMonSvc
