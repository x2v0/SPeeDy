#Sun Jul 31 03:18:34 2022"""Automatically generated. DO NOT EDIT please"""
import sys
if sys.version_info >= (3,):
    # Python 2 compatibility
    long = int
from GaudiKernel.Proxy.Configurable import *

class CPUCrunchSvc( ConfigurableService ) :
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
    'NIterationsVect' : [  ], # list
    'shortCalib' : False, # bool
    'minCalibTime' : 0, # int
    'numCalibRuns' : 1, # int
    'calibCorrectionFactor' : 1.00000, # float
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
    'NIterationsVect' : """ Number of iterations for the calibration. [CPUCrunchSvc] """,
    'shortCalib' : """ Enable coarse grained calibration [CPUCrunchSvc] """,
    'minCalibTime' : """ Minimum number of milliseconds to do calibration [CPUCrunchSvc] """,
    'numCalibRuns' : """ Number of times to do calibration run [CPUCrunchSvc] """,
    'calibCorrectionFactor' : """ Calibration correction factor to take into account things like turbo boost [CPUCrunchSvc] """,
  }
  __declaration_location__ = 'CPUCrunchSvc.cpp:18'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(CPUCrunchSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'CPUCrunchSvc'
  pass # class CPUCrunchSvc

class CollectionCloneAlg( ConfigurableAlgorithm ) :
  __slots__ = { 
    'ExtraInputs' : [], # list
    'ExtraOutputs' : [], # list
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'ErrorMax' : 1, # int
    'AuditAlgorithms' : False, # bool
    'AuditInitialize' : False, # bool
    'AuditReinitialize' : False, # bool
    'AuditRestart' : False, # bool
    'AuditExecute' : False, # bool
    'AuditFinalize' : False, # bool
    'AuditStart' : False, # bool
    'AuditStop' : False, # bool
    'Timeline' : True, # bool
    'MonitorService' : 'MonitorSvc', # str
    'RegisterForContextService' : False, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'EvtTupleSvc' : 'EvtTupleSvc', # str
    'Input' : [  ], # list
    'Output' : '', # str
  }
  _propertyDocDct = { 
    'ExtraInputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'ExtraOutputs' : """  [DataHandleHolderBase<PropertyHolder<CommonMessaging<implements<IAlgorithm,IDataHandleHolder,IProperty,IStateful> > > >] """,
    'OutputLevel' : """ output level [Gaudi::Algorithm] """,
    'Enable' : """ should the algorithm be executed or not [Gaudi::Algorithm] """,
    'ErrorMax' : """ [[deprecated]] max number of errors [Gaudi::Algorithm] """,
    'AuditAlgorithms' : """ [[deprecated]] unused [Gaudi::Algorithm] """,
    'AuditInitialize' : """ trigger auditor on initialize() [Gaudi::Algorithm] """,
    'AuditReinitialize' : """ trigger auditor on reinitialize() [Gaudi::Algorithm] """,
    'AuditRestart' : """ trigger auditor on restart() [Gaudi::Algorithm] """,
    'AuditExecute' : """ trigger auditor on execute() [Gaudi::Algorithm] """,
    'AuditFinalize' : """ trigger auditor on finalize() [Gaudi::Algorithm] """,
    'AuditStart' : """ trigger auditor on start() [Gaudi::Algorithm] """,
    'AuditStop' : """ trigger auditor on stop() [Gaudi::Algorithm] """,
    'Timeline' : """ send events to TimelineSvc [Gaudi::Algorithm] """,
    'MonitorService' : """ name to use for Monitor Service [Gaudi::Algorithm] """,
    'RegisterForContextService' : """ flag to enforce the registration for Algorithm Context Service [Gaudi::Algorithm] """,
    'Cardinality' : """ how many clones to create - 0 means algo is reentrant [Gaudi::Algorithm] """,
    'NeededResources' : """ named resources needed during event looping [Gaudi::Algorithm] """,
    'Blocking' : """ if algorithm invokes CPU-blocking system calls (offloads computations to accelerators or quantum processors, performs disk or network I/O, is bound by resource synchronization, etc) [Gaudi::Algorithm] """,
    'FilterCircularDependencies' : """ filter out circular data dependencies [Gaudi::Algorithm] """,
    'EvtTupleSvc' : """ name of the data provider service [CollectionCloneAlg] """,
    'Input' : """ input specifications [CollectionCloneAlg] """,
    'Output' : """ output specification [CollectionCloneAlg] """,
  }
  __declaration_location__ = 'CollectionCloneAlg.cpp:458'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(CollectionCloneAlg, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'CollectionCloneAlg'
  pass # class CollectionCloneAlg

class DetDataSvc( ConfigurableService ) :
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
    'RootCLID' : 3, # int
    'RootName' : '/dd', # str
    'ForceLeaves' : False, # bool
    'InhibitPathes' : [  ], # list
    'EnableFaultHandler' : False, # bool
    'DataFaultName' : 'DataFault', # str
    'EnableAccessHandler' : False, # bool
    'DataAccessName' : 'DataAccess', # str
    'DetStorageType' : 7, # int
    'DetDbLocation' : 'empty', # str
    'DetDbRootName' : 'dd', # str
    'UsePersistency' : False, # bool
    'PersistencySvc' : 'DetectorPersistencySvc', # str
    'AllowLoadInRunning' : True, # bool
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
    'RootCLID' : """ CLID of root entry [TsDataSvc] """,
    'RootName' : """ name of root entry [TsDataSvc] """,
    'ForceLeaves' : """ force creation of default leaves on registerObject [TsDataSvc] """,
    'InhibitPathes' : """ inhibited leaves [TsDataSvc] """,
    'EnableFaultHandler' : """ enable incidents on data creation requests [TsDataSvc] """,
    'DataFaultName' : """ Name of the data fault incident [TsDataSvc] """,
    'EnableAccessHandler' : """ enable incidents on data access requests [TsDataSvc] """,
    'DataAccessName' : """ Name of the data access incident [TsDataSvc] """,
    'DetStorageType' : """ Detector Data Persistency Storage type [DetDataSvc] """,
    'DetDbLocation' : """ location of detector Db (filename,URL) [DetDataSvc] """,
    'DetDbRootName' : """ name of the root node of the detector [DetDataSvc] """,
    'UsePersistency' : """ control if the persistency is required [DetDataSvc] """,
    'PersistencySvc' : """ name of the persistency service [DetDataSvc] """,
    'AllowLoadInRunning' : """ if set to false, no new object can be loaded while in running state (updates are still allowed), this forces preloading of the geometry [DetDataSvc] """,
  }
  __declaration_location__ = 'DetDataSvc.cpp:34'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(DetDataSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'DetDataSvc'
  pass # class DetDataSvc

class FileMgr( ConfigurableService ) :
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
    'LogFile' : '', # str
    'PrintSummary' : False, # bool
    'LoadROOTHandler' : True, # bool
    'LoadPOSIXHandler' : True, # bool
    'TSSL_UserProxy' : 'X509', # str
    'TSSL_CertDir' : 'X509', # str
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
    'LogFile' : """  [FileMgr] """,
    'PrintSummary' : """  [FileMgr] """,
    'LoadROOTHandler' : """  [FileMgr] """,
    'LoadPOSIXHandler' : """  [FileMgr] """,
    'TSSL_UserProxy' : """  [FileMgr] """,
    'TSSL_CertDir' : """  [FileMgr] """,
  }
  __declaration_location__ = 'FileMgr.cpp:21'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(FileMgr, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'FileMgr'
  pass # class FileMgr

class Gaudi__MetaDataSvc( ConfigurableService ) :
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
    'Enabled' : True, # bool
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
    'Enabled' : """  [Gaudi::MetaDataSvc] """,
  }
  __declaration_location__ = 'MetaDataSvc.cpp:31'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Gaudi__MetaDataSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'Gaudi::MetaDataSvc'
  pass # class Gaudi__MetaDataSvc

class HepRndm__Engine_CLHEP__DRand48Engine_( ConfigurableService ) :
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
    'Seeds' : [  ], # list
    'Column' : 0, # int
    'Row' : 1, # int
    'Luxury' : 3, # int
    'UseTable' : False, # bool
    'SetSingleton' : False, # bool
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
    'Seeds' : """ seed table [HepRndm::Engine<CLHEP::DRand48Engine>] """,
    'Column' : """  [HepRndm::Engine<CLHEP::DRand48Engine>] """,
    'Row' : """  [HepRndm::Engine<CLHEP::DRand48Engine>] """,
    'Luxury' : """  [HepRndm::Engine<CLHEP::DRand48Engine>] """,
    'UseTable' : """  [HepRndm::Engine<CLHEP::DRand48Engine>] """,
    'SetSingleton' : """  [HepRndm::Engine<CLHEP::DRand48Engine>] """,
  }
  __declaration_location__ = 'HepRndmEngines.cpp:206'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HepRndm__Engine_CLHEP__DRand48Engine_, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'HepRndm::Engine<CLHEP::DRand48Engine>'
  pass # class HepRndm__Engine_CLHEP__DRand48Engine_

class HepRndm__Engine_CLHEP__DualRand_( ConfigurableService ) :
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
    'Seeds' : [  ], # list
    'Column' : 0, # int
    'Row' : 1, # int
    'Luxury' : 3, # int
    'UseTable' : False, # bool
    'SetSingleton' : False, # bool
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
    'Seeds' : """ seed table [HepRndm::Engine<CLHEP::DualRand>] """,
    'Column' : """  [HepRndm::Engine<CLHEP::DualRand>] """,
    'Row' : """  [HepRndm::Engine<CLHEP::DualRand>] """,
    'Luxury' : """  [HepRndm::Engine<CLHEP::DualRand>] """,
    'UseTable' : """  [HepRndm::Engine<CLHEP::DualRand>] """,
    'SetSingleton' : """  [HepRndm::Engine<CLHEP::DualRand>] """,
  }
  __declaration_location__ = 'HepRndmEngines.cpp:202'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HepRndm__Engine_CLHEP__DualRand_, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'HepRndm::Engine<CLHEP::DualRand>'
  pass # class HepRndm__Engine_CLHEP__DualRand_

class HepRndm__Engine_CLHEP__HepJamesRandom_( ConfigurableService ) :
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
    'Seeds' : [  ], # list
    'Column' : 0, # int
    'Row' : 1, # int
    'Luxury' : 3, # int
    'UseTable' : False, # bool
    'SetSingleton' : False, # bool
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
    'Seeds' : """ seed table [HepRndm::Engine<CLHEP::HepJamesRandom>] """,
    'Column' : """  [HepRndm::Engine<CLHEP::HepJamesRandom>] """,
    'Row' : """  [HepRndm::Engine<CLHEP::HepJamesRandom>] """,
    'Luxury' : """  [HepRndm::Engine<CLHEP::HepJamesRandom>] """,
    'UseTable' : """  [HepRndm::Engine<CLHEP::HepJamesRandom>] """,
    'SetSingleton' : """  [HepRndm::Engine<CLHEP::HepJamesRandom>] """,
  }
  __declaration_location__ = 'HepRndmEngines.cpp:212'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HepRndm__Engine_CLHEP__HepJamesRandom_, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'HepRndm::Engine<CLHEP::HepJamesRandom>'
  pass # class HepRndm__Engine_CLHEP__HepJamesRandom_

class HepRndm__Engine_CLHEP__Hurd160Engine_( ConfigurableService ) :
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
    'Seeds' : [  ], # list
    'Column' : 0, # int
    'Row' : 1, # int
    'Luxury' : 3, # int
    'UseTable' : False, # bool
    'SetSingleton' : False, # bool
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
    'Seeds' : """ seed table [HepRndm::Engine<CLHEP::Hurd160Engine>] """,
    'Column' : """  [HepRndm::Engine<CLHEP::Hurd160Engine>] """,
    'Row' : """  [HepRndm::Engine<CLHEP::Hurd160Engine>] """,
    'Luxury' : """  [HepRndm::Engine<CLHEP::Hurd160Engine>] """,
    'UseTable' : """  [HepRndm::Engine<CLHEP::Hurd160Engine>] """,
    'SetSingleton' : """  [HepRndm::Engine<CLHEP::Hurd160Engine>] """,
  }
  __declaration_location__ = 'HepRndmEngines.cpp:208'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HepRndm__Engine_CLHEP__Hurd160Engine_, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'HepRndm::Engine<CLHEP::Hurd160Engine>'
  pass # class HepRndm__Engine_CLHEP__Hurd160Engine_

class HepRndm__Engine_CLHEP__Hurd288Engine_( ConfigurableService ) :
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
    'Seeds' : [  ], # list
    'Column' : 0, # int
    'Row' : 1, # int
    'Luxury' : 3, # int
    'UseTable' : False, # bool
    'SetSingleton' : False, # bool
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
    'Seeds' : """ seed table [HepRndm::Engine<CLHEP::Hurd288Engine>] """,
    'Column' : """  [HepRndm::Engine<CLHEP::Hurd288Engine>] """,
    'Row' : """  [HepRndm::Engine<CLHEP::Hurd288Engine>] """,
    'Luxury' : """  [HepRndm::Engine<CLHEP::Hurd288Engine>] """,
    'UseTable' : """  [HepRndm::Engine<CLHEP::Hurd288Engine>] """,
    'SetSingleton' : """  [HepRndm::Engine<CLHEP::Hurd288Engine>] """,
  }
  __declaration_location__ = 'HepRndmEngines.cpp:210'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HepRndm__Engine_CLHEP__Hurd288Engine_, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'HepRndm::Engine<CLHEP::Hurd288Engine>'
  pass # class HepRndm__Engine_CLHEP__Hurd288Engine_

class HepRndm__Engine_CLHEP__MTwistEngine_( ConfigurableService ) :
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
    'Seeds' : [  ], # list
    'Column' : 0, # int
    'Row' : 1, # int
    'Luxury' : 3, # int
    'UseTable' : False, # bool
    'SetSingleton' : False, # bool
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
    'Seeds' : """ seed table [HepRndm::Engine<CLHEP::MTwistEngine>] """,
    'Column' : """  [HepRndm::Engine<CLHEP::MTwistEngine>] """,
    'Row' : """  [HepRndm::Engine<CLHEP::MTwistEngine>] """,
    'Luxury' : """  [HepRndm::Engine<CLHEP::MTwistEngine>] """,
    'UseTable' : """  [HepRndm::Engine<CLHEP::MTwistEngine>] """,
    'SetSingleton' : """  [HepRndm::Engine<CLHEP::MTwistEngine>] """,
  }
  __declaration_location__ = 'HepRndmEngines.cpp:214'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HepRndm__Engine_CLHEP__MTwistEngine_, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'HepRndm::Engine<CLHEP::MTwistEngine>'
  pass # class HepRndm__Engine_CLHEP__MTwistEngine_

class HepRndm__Engine_CLHEP__RanecuEngine_( ConfigurableService ) :
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
    'Seeds' : [  ], # list
    'Column' : 0, # int
    'Row' : 1, # int
    'Luxury' : 3, # int
    'UseTable' : False, # bool
    'SetSingleton' : False, # bool
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
    'Seeds' : """ seed table [HepRndm::Engine<CLHEP::RanecuEngine>] """,
    'Column' : """  [HepRndm::Engine<CLHEP::RanecuEngine>] """,
    'Row' : """  [HepRndm::Engine<CLHEP::RanecuEngine>] """,
    'Luxury' : """  [HepRndm::Engine<CLHEP::RanecuEngine>] """,
    'UseTable' : """  [HepRndm::Engine<CLHEP::RanecuEngine>] """,
    'SetSingleton' : """  [HepRndm::Engine<CLHEP::RanecuEngine>] """,
  }
  __declaration_location__ = 'HepRndmEngines.cpp:216'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HepRndm__Engine_CLHEP__RanecuEngine_, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'HepRndm::Engine<CLHEP::RanecuEngine>'
  pass # class HepRndm__Engine_CLHEP__RanecuEngine_

class HepRndm__Engine_CLHEP__Ranlux64Engine_( ConfigurableService ) :
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
    'Seeds' : [  ], # list
    'Column' : 0, # int
    'Row' : 1, # int
    'Luxury' : 3, # int
    'UseTable' : False, # bool
    'SetSingleton' : False, # bool
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
    'Seeds' : """ seed table [HepRndm::Engine<CLHEP::Ranlux64Engine>] """,
    'Column' : """  [HepRndm::Engine<CLHEP::Ranlux64Engine>] """,
    'Row' : """  [HepRndm::Engine<CLHEP::Ranlux64Engine>] """,
    'Luxury' : """  [HepRndm::Engine<CLHEP::Ranlux64Engine>] """,
    'UseTable' : """  [HepRndm::Engine<CLHEP::Ranlux64Engine>] """,
    'SetSingleton' : """  [HepRndm::Engine<CLHEP::Ranlux64Engine>] """,
  }
  __declaration_location__ = 'HepRndmEngines.cpp:218'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HepRndm__Engine_CLHEP__Ranlux64Engine_, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'HepRndm::Engine<CLHEP::Ranlux64Engine>'
  pass # class HepRndm__Engine_CLHEP__Ranlux64Engine_

class HepRndm__Engine_CLHEP__RanluxEngine_( ConfigurableService ) :
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
    'Seeds' : [  ], # list
    'Column' : 0, # int
    'Row' : 1, # int
    'Luxury' : 3, # int
    'UseTable' : False, # bool
    'SetSingleton' : False, # bool
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
    'Seeds' : """ seed table [HepRndm::Engine<CLHEP::RanluxEngine>] """,
    'Column' : """  [HepRndm::Engine<CLHEP::RanluxEngine>] """,
    'Row' : """  [HepRndm::Engine<CLHEP::RanluxEngine>] """,
    'Luxury' : """  [HepRndm::Engine<CLHEP::RanluxEngine>] """,
    'UseTable' : """  [HepRndm::Engine<CLHEP::RanluxEngine>] """,
    'SetSingleton' : """  [HepRndm::Engine<CLHEP::RanluxEngine>] """,
  }
  __declaration_location__ = 'HepRndmEngines.cpp:220'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HepRndm__Engine_CLHEP__RanluxEngine_, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'HepRndm::Engine<CLHEP::RanluxEngine>'
  pass # class HepRndm__Engine_CLHEP__RanluxEngine_

class HepRndm__Engine_CLHEP__RanshiEngine_( ConfigurableService ) :
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
    'Seeds' : [  ], # list
    'Column' : 0, # int
    'Row' : 1, # int
    'Luxury' : 3, # int
    'UseTable' : False, # bool
    'SetSingleton' : False, # bool
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
    'Seeds' : """ seed table [HepRndm::Engine<CLHEP::RanshiEngine>] """,
    'Column' : """  [HepRndm::Engine<CLHEP::RanshiEngine>] """,
    'Row' : """  [HepRndm::Engine<CLHEP::RanshiEngine>] """,
    'Luxury' : """  [HepRndm::Engine<CLHEP::RanshiEngine>] """,
    'UseTable' : """  [HepRndm::Engine<CLHEP::RanshiEngine>] """,
    'SetSingleton' : """  [HepRndm::Engine<CLHEP::RanshiEngine>] """,
  }
  __declaration_location__ = 'HepRndmEngines.cpp:222'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HepRndm__Engine_CLHEP__RanshiEngine_, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'HepRndm::Engine<CLHEP::RanshiEngine>'
  pass # class HepRndm__Engine_CLHEP__RanshiEngine_

class HepRndm__Engine_CLHEP__TripleRand_( ConfigurableService ) :
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
    'Seeds' : [  ], # list
    'Column' : 0, # int
    'Row' : 1, # int
    'Luxury' : 3, # int
    'UseTable' : False, # bool
    'SetSingleton' : False, # bool
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
    'Seeds' : """ seed table [HepRndm::Engine<CLHEP::TripleRand>] """,
    'Column' : """  [HepRndm::Engine<CLHEP::TripleRand>] """,
    'Row' : """  [HepRndm::Engine<CLHEP::TripleRand>] """,
    'Luxury' : """  [HepRndm::Engine<CLHEP::TripleRand>] """,
    'UseTable' : """  [HepRndm::Engine<CLHEP::TripleRand>] """,
    'SetSingleton' : """  [HepRndm::Engine<CLHEP::TripleRand>] """,
  }
  __declaration_location__ = 'HepRndmEngines.cpp:204'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HepRndm__Engine_CLHEP__TripleRand_, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'HepRndm::Engine<CLHEP::TripleRand>'
  pass # class HepRndm__Engine_CLHEP__TripleRand_

class NTupleSvc( ConfigurableService ) :
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
    'RootCLID' : 1, # int
    'RootName' : '/NTUPLES', # str
    'ForceLeaves' : False, # bool
    'InhibitPathes' : [  ], # list
    'EnableFaultHandler' : False, # bool
    'DataFaultName' : 'DataFault', # str
    'EnableAccessHandler' : False, # bool
    'DataAccessName' : 'DataAccess', # str
    'Input' : [  ], # list
    'Output' : [  ], # list
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
    'RootCLID' : """ CLID of root entry [DataSvc] """,
    'RootName' : """ name of root entry [DataSvc] """,
    'ForceLeaves' : """ force creation of default leaves on registerObject [DataSvc] """,
    'InhibitPathes' : """ inhibited leaves [DataSvc] """,
    'EnableFaultHandler' : """ enable incidents on data creation requests [DataSvc] """,
    'DataFaultName' : """ Name of the data fault incident [DataSvc] """,
    'EnableAccessHandler' : """ enable incidents on data access requests [DataSvc] """,
    'DataAccessName' : """ Name of the data access incident [DataSvc] """,
    'Input' : """ input streams [NTupleSvc] """,
    'Output' : """ output streams [NTupleSvc] """,
  }
  __declaration_location__ = 'NTupleSvc.cpp:56'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(NTupleSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'NTupleSvc'
  pass # class NTupleSvc

class RndmGenSvc( ConfigurableService ) :
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
    'Engine' : 'HepRndm::Engine<CLHEP::RanluxEngine>', # str
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
    'Engine' : """ engine name [RndmGenSvc] """,
  }
  __declaration_location__ = 'RndmGenSvc.cpp:41'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(RndmGenSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'RndmGenSvc'
  pass # class RndmGenSvc

class THistSvc( ConfigurableService ) :
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
    'AutoSave' : 0, # int
    'AutoFlush' : 0, # int
    'PrintAll' : False, # bool
    'MaxFileSize' : 10240, # int
    'CompressionLevel' : 1, # int
    'Output' : [  ], # list
    'Input' : [  ], # list
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
    'AutoSave' : """  [THistSvc] """,
    'AutoFlush' : """  [THistSvc] """,
    'PrintAll' : """  [THistSvc] """,
    'MaxFileSize' : """ maximum file size in MB. if exceeded, will cause an abort. -1 to never check. [THistSvc] """,
    'CompressionLevel' : """  [THistSvc] """,
    'Output' : """  [THistSvc] """,
    'Input' : """  [THistSvc] """,
  }
  __declaration_location__ = 'THistSvc.cpp:56'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(THistSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'THistSvc'
  pass # class THistSvc

class TagCollectionSvc( ConfigurableService ) :
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
    'RootCLID' : 1, # int
    'RootName' : '/NTUPLES', # str
    'ForceLeaves' : False, # bool
    'InhibitPathes' : [  ], # list
    'EnableFaultHandler' : False, # bool
    'DataFaultName' : 'DataFault', # str
    'EnableAccessHandler' : False, # bool
    'DataAccessName' : 'DataAccess', # str
    'Input' : [  ], # list
    'Output' : [  ], # list
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
    'RootCLID' : """ CLID of root entry [DataSvc] """,
    'RootName' : """ name of root entry [DataSvc] """,
    'ForceLeaves' : """ force creation of default leaves on registerObject [DataSvc] """,
    'InhibitPathes' : """ inhibited leaves [DataSvc] """,
    'EnableFaultHandler' : """ enable incidents on data creation requests [DataSvc] """,
    'DataFaultName' : """ Name of the data fault incident [DataSvc] """,
    'EnableAccessHandler' : """ enable incidents on data access requests [DataSvc] """,
    'DataAccessName' : """ Name of the data access incident [DataSvc] """,
    'Input' : """ input streams [NTupleSvc] """,
    'Output' : """ output streams [NTupleSvc] """,
  }
  __declaration_location__ = 'TagCollectionSvc.cpp:53'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(TagCollectionSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiSvc'
  def getType( self ):
      return 'TagCollectionSvc'
  pass # class TagCollectionSvc
