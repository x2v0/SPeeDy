#Sun Jul 31 03:18:51 2022"""Automatically generated. DO NOT EDIT please"""
import sys
if sys.version_info >= (3,):
    # Python 2 compatibility
    long = int
from GaudiKernel.GaudiHandles import *
from GaudiKernel.DataHandle import DataHandle
from GaudiKernel.Proxy.Configurable import *

class AlgResourcePool( ConfigurableService ) :
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
    'CreateLazily' : False, # bool
    'TopAlg' : [  ], # list
    'OverrideUnClonable' : False, # bool
    'CountAlgorithmInstanceMisses' : False, # bool
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
    'CreateLazily' : """  [AlgResourcePool] """,
    'TopAlg' : """ Names of the algorithms to be passed to the algorithm manager [AlgResourcePool] """,
    'OverrideUnClonable' : """ Override the un-clonability of algorithms. Use with caution! [AlgResourcePool] """,
    'CountAlgorithmInstanceMisses' : """ Count and print out algorithm instance misses. Useful for finding ways to improve throughput scalability. [AlgResourcePool] """,
  }
  __declaration_location__ = 'AlgResourcePool.cpp:23'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AlgResourcePool, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiHive'
  def getType( self ):
      return 'AlgResourcePool'
  pass # class AlgResourcePool

class AvalancheSchedulerSvc( ConfigurableService ) :
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
    'ThreadPoolSize' : -1, # int
    'WhiteboardSvc' : 'EventDataSvc', # str
    'MaxBlockingAlgosInFlight' : 0, # int
    'SimulateExecution' : False, # bool
    'Optimizer' : '', # str
    'DumpIntraEventDynamics' : False, # bool
    'PreemptiveBlockingTasks' : False, # bool
    'CheckDependencies' : False, # bool
    'DataLoaderAlg' : '', # str
    'EnableConditions' : False, # bool
    'ShowDataDependencies' : True, # bool
    'ShowDataFlow' : False, # bool
    'ShowControlFlow' : False, # bool
    'VerboseSubSlots' : False, # bool
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
    'ThreadPoolSize' : """ Size of the global thread pool initialised by TBB; a value of -1 requests to useall available hardware threads; -100 requests to bypass TBB executing all algorithms in the scheduler's thread. [AvalancheSchedulerSvc] """,
    'WhiteboardSvc' : """ The whiteboard name [AvalancheSchedulerSvc] """,
    'MaxBlockingAlgosInFlight' : """ Maximum allowed number of simultaneously running CPU-blocking algorithms [AvalancheSchedulerSvc] """,
    'SimulateExecution' : """ Flag to perform single-pass simulation of execution flow before the actual execution [AvalancheSchedulerSvc] """,
    'Optimizer' : """ The following modes are currently available: PCE, COD, DRE,  E [AvalancheSchedulerSvc] """,
    'DumpIntraEventDynamics' : """ Dump intra-event concurrency dynamics to csv file [AvalancheSchedulerSvc] """,
    'PreemptiveBlockingTasks' : """ Enable preemptive scheduling of CPU-blocking algorithms. Blocking algorithms must be flagged accordingly. [AvalancheSchedulerSvc] """,
    'CheckDependencies' : """ Runtime check of Algorithm Data Dependencies [AvalancheSchedulerSvc] """,
    'DataLoaderAlg' : """ Attribute unmet input dependencies to this DataLoader Algorithm [AvalancheSchedulerSvc] """,
    'EnableConditions' : """ Enable ConditionsSvc [AvalancheSchedulerSvc] """,
    'ShowDataDependencies' : """ Show the INPUT and OUTPUT data dependencies of Algorithms [AvalancheSchedulerSvc] """,
    'ShowDataFlow' : """ Show the configuration of DataFlow between Algorithms [AvalancheSchedulerSvc] """,
    'ShowControlFlow' : """ Show the configuration of all Algorithms and Sequences [AvalancheSchedulerSvc] """,
    'VerboseSubSlots' : """ Dump algorithm states for all sub-slots [AvalancheSchedulerSvc] """,
  }
  __declaration_location__ = 'AvalancheSchedulerSvc.cpp:40'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AvalancheSchedulerSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiHive'
  def getType( self ):
      return 'AvalancheSchedulerSvc'
  pass # class AvalancheSchedulerSvc

class CPUCruncher( ConfigurableAlgorithm ) :
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
    'RegisterForContextService' : True, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'RootInTES' : '', # str
    'ErrorsPrint' : True, # bool
    'PropertiesPrint' : False, # bool
    'TypePrint' : True, # bool
    'Context' : '', # str
    'CounterList' : [ '.*' ], # list
    'VetoObjects' : [  ], # list
    'RequireObjects' : [  ], # list
    'Loader' : False, # bool
    'inpKeys' : [  ], # list
    'outKeys' : [  ], # list
    'avgRuntime' : 1.0000000, # float
    'varRuntime' : 0.010000000, # float
    'localRndm' : True, # bool
    'RwRepetitions' : 1, # int
    'SleepFraction' : 0.00000, # float
    'InvertDecision' : False, # bool
    'FailNEvents' : 0, # int
    'NParallel' : -1, # int
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
    'RootInTES' : """ note: overridden by parent settings [FixTESPath<Algorithm>] """,
    'ErrorsPrint' : """ print the statistics of errors/warnings/exceptions [GaudiCommon<Algorithm>] """,
    'PropertiesPrint' : """ print the properties of the component [GaudiCommon<Algorithm>] """,
    'TypePrint' : """ add the actual C++ component type into the messages [GaudiCommon<Algorithm>] """,
    'Context' : """ note: overridden by parent settings [GaudiCommon<Algorithm>] """,
    'CounterList' : """ RegEx list, of simple integer counters for CounterSummary [GaudiCommon<Algorithm>] """,
    'VetoObjects' : """ skip execute if one or more of these TES objects exist [GaudiAlgorithm] """,
    'RequireObjects' : """ execute only if one or more of these TES objects exist [GaudiAlgorithm] """,
    'Loader' : """ Declare the algorithm to be a data loader [CPUCruncher] """,
    'inpKeys' : """  [CPUCruncher] """,
    'outKeys' : """  [CPUCruncher] """,
    'avgRuntime' : """ Average runtime of the module. [CPUCruncher] """,
    'varRuntime' : """ Variance of the runtime of the module. [CPUCruncher] """,
    'localRndm' : """ Decide if the local random generator is to be used [CPUCruncher] """,
    'RwRepetitions' : """ Increase access to the WB [CPUCruncher] """,
    'SleepFraction' : """ Fraction of time, between 0 and 1, when an algorithm is actually sleeping instead of crunching [CPUCruncher] """,
    'InvertDecision' : """ Invert control flow decision. [CPUCruncher] """,
    'FailNEvents' : """ Return FAILURE on every Nth event [CPUCruncher] """,
    'NParallel' : """ Run N parallel crunching tasks [CPUCruncher] """,
  }
  __declaration_location__ = 'CPUCruncher.cpp:25'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(CPUCruncher, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiHive'
  def getType( self ):
      return 'CPUCruncher'
  pass # class CPUCruncher

class ContextEventCounterData( ConfigurableAlgorithm ) :
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
  }
  __declaration_location__ = 'ContextEventCounter.cpp:19'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(ContextEventCounterData, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiHive'
  def getType( self ):
      return 'ContextEventCounterData'
  pass # class ContextEventCounterData

class ContextEventCounterPtr( ConfigurableAlgorithm ) :
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
  }
  __declaration_location__ = 'ContextEventCounter.cpp:18'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(ContextEventCounterPtr, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiHive'
  def getType( self ):
      return 'ContextEventCounterPtr'
  pass # class ContextEventCounterPtr

class Gaudi__Hive__FetchDataFromFile( ConfigurableAlgorithm ) :
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
    'Cardinality' : 0, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'DataKeys' : [  ], # list
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
    'DataKeys' : """ list of objects to be read from file [Gaudi::Hive::FetchDataFromFile] """,
  }
  __declaration_location__ = 'FetchDataFromFile.cpp:48'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Gaudi__Hive__FetchDataFromFile, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiHive'
  def getType( self ):
      return 'Gaudi::Hive::FetchDataFromFile'
  pass # class Gaudi__Hive__FetchDataFromFile

class Gaudi__Hive__FetchLeavesFromFile( ConfigurableAlgorithm ) :
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
    'RegisterForContextService' : True, # bool
    'Cardinality' : 0, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'RootInTES' : '', # str
    'ErrorsPrint' : True, # bool
    'PropertiesPrint' : False, # bool
    'TypePrint' : True, # bool
    'Context' : '', # str
    'CounterList' : [ '.*' ], # list
    'VetoObjects' : [  ], # list
    'RequireObjects' : [  ], # list
    'InputFileLeavesLocation' : DataHandle('/Event/InputFileLeaves', 'W', 'std::vector<DataObject*,std::allocator<DataObject*> >'), # DataHandle
    'DataService' : 'EventDataSvc', # str
    'Root' : '', # str
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
    'RootInTES' : """ note: overridden by parent settings [FixTESPath<Algorithm>] """,
    'ErrorsPrint' : """ print the statistics of errors/warnings/exceptions [GaudiCommon<Algorithm>] """,
    'PropertiesPrint' : """ print the properties of the component [GaudiCommon<Algorithm>] """,
    'TypePrint' : """ add the actual C++ component type into the messages [GaudiCommon<Algorithm>] """,
    'Context' : """ note: overridden by parent settings [GaudiCommon<Algorithm>] """,
    'CounterList' : """ RegEx list, of simple integer counters for CounterSummary [GaudiCommon<Algorithm>] """,
    'VetoObjects' : """ skip execute if one or more of these TES objects exist [GaudiAlgorithm] """,
    'RequireObjects' : """ execute only if one or more of these TES objects exist [GaudiAlgorithm] """,
    'InputFileLeavesLocation' : """  [Gaudi::Functional::details::DataHandleMixin<std::tuple<std::vector<DataObject*,std::allocator<DataObject*> > >,std::tuple<>,Gaudi::Functional::Traits::use_<> >] """,
    'DataService' : """ Name of the data service to use [Gaudi::Hive::FetchLeavesFromFile] """,
    'Root' : """ Path to the element from which to start the scan [Gaudi::Hive::FetchLeavesFromFile] """,
  }
  __declaration_location__ = 'FetchLeavesFromFile.cpp:119'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Gaudi__Hive__FetchLeavesFromFile, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiHive'
  def getType( self ):
      return 'Gaudi::Hive::FetchLeavesFromFile'
  pass # class Gaudi__Hive__FetchLeavesFromFile

class HiveDataBrokerSvc( ConfigurableService ) :
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
    'DataLoader' : '', # str
    'DataProducers' : [  ], # list
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
    'DataLoader' : """ Attribute any unmet input dependencies to this Algorithm [HiveDataBrokerSvc] """,
    'DataProducers' : """ List of algorithms to be used to resolve data dependencies [HiveDataBrokerSvc] """,
  }
  __declaration_location__ = 'HiveDataBroker.cpp:36'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HiveDataBrokerSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiHive'
  def getType( self ):
      return 'HiveDataBrokerSvc'
  pass # class HiveDataBrokerSvc

class HiveReadAlgorithm( ConfigurableAlgorithm ) :
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
    'RegisterForContextService' : True, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'RootInTES' : '', # str
    'ErrorsPrint' : True, # bool
    'PropertiesPrint' : False, # bool
    'TypePrint' : True, # bool
    'Context' : '', # str
    'CounterList' : [ '.*' ], # list
    'VetoObjects' : [  ], # list
    'RequireObjects' : [  ], # list
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
    'RootInTES' : """ note: overridden by parent settings [FixTESPath<Algorithm>] """,
    'ErrorsPrint' : """ print the statistics of errors/warnings/exceptions [GaudiCommon<Algorithm>] """,
    'PropertiesPrint' : """ print the properties of the component [GaudiCommon<Algorithm>] """,
    'TypePrint' : """ add the actual C++ component type into the messages [GaudiCommon<Algorithm>] """,
    'Context' : """ note: overridden by parent settings [GaudiCommon<Algorithm>] """,
    'CounterList' : """ RegEx list, of simple integer counters for CounterSummary [GaudiCommon<Algorithm>] """,
    'VetoObjects' : """ skip execute if one or more of these TES objects exist [GaudiAlgorithm] """,
    'RequireObjects' : """ execute only if one or more of these TES objects exist [GaudiAlgorithm] """,
  }
  __declaration_location__ = 'HiveReadAlgorithm.cpp:22'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HiveReadAlgorithm, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiHive'
  def getType( self ):
      return 'HiveReadAlgorithm'
  pass # class HiveReadAlgorithm

class HiveSlimEventLoopMgr( ConfigurableService ) :
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
    'HistogramPersistency' : '', # str
    'EvtSel' : '', # str
    'Warnings' : True, # bool
    'SchedulerName' : 'AvalancheSchedulerSvc', # str
    'EventNumberBlackList' : [  ], # list
    'AbortOnFailure' : True, # bool
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
    'HistogramPersistency' : """  [HiveSlimEventLoopMgr] """,
    'EvtSel' : """  [HiveSlimEventLoopMgr] """,
    'Warnings' : """ Set this property to false to suppress warning messages [HiveSlimEventLoopMgr] """,
    'SchedulerName' : """ Name of the scheduler to be used [HiveSlimEventLoopMgr] """,
    'EventNumberBlackList' : """  [HiveSlimEventLoopMgr] """,
    'AbortOnFailure' : """ Abort job on event failure [HiveSlimEventLoopMgr] """,
  }
  __declaration_location__ = 'HiveSlimEventLoopMgr.cpp:26'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HiveSlimEventLoopMgr, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiHive'
  def getType( self ):
      return 'HiveSlimEventLoopMgr'
  pass # class HiveSlimEventLoopMgr

class HiveTestAlgorithm( ConfigurableAlgorithm ) :
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
    'RegisterForContextService' : True, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'RootInTES' : '', # str
    'ErrorsPrint' : True, # bool
    'PropertiesPrint' : False, # bool
    'TypePrint' : True, # bool
    'Context' : '', # str
    'CounterList' : [ '.*' ], # list
    'VetoObjects' : [  ], # list
    'RequireObjects' : [  ], # list
    'Input' : [  ], # list
    'Output' : [  ], # list
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
    'RootInTES' : """ note: overridden by parent settings [FixTESPath<Algorithm>] """,
    'ErrorsPrint' : """ print the statistics of errors/warnings/exceptions [GaudiCommon<Algorithm>] """,
    'PropertiesPrint' : """ print the properties of the component [GaudiCommon<Algorithm>] """,
    'TypePrint' : """ add the actual C++ component type into the messages [GaudiCommon<Algorithm>] """,
    'Context' : """ note: overridden by parent settings [GaudiCommon<Algorithm>] """,
    'CounterList' : """ RegEx list, of simple integer counters for CounterSummary [GaudiCommon<Algorithm>] """,
    'VetoObjects' : """ skip execute if one or more of these TES objects exist [GaudiAlgorithm] """,
    'RequireObjects' : """ execute only if one or more of these TES objects exist [GaudiAlgorithm] """,
    'Input' : """ List of required inputs [HiveTestAlgorithm] """,
    'Output' : """ List of provided outputs [HiveTestAlgorithm] """,
  }
  __declaration_location__ = 'HiveTestAlgorithm.cpp:17'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HiveTestAlgorithm, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiHive'
  def getType( self ):
      return 'HiveTestAlgorithm'
  pass # class HiveTestAlgorithm

class HiveWhiteBoard( ConfigurableService ) :
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
    'RootCLID' : 110, # int
    'RootName' : '/Event', # str
    'DataLoader' : 'EventPersistencySvc', # str
    'EventSlots' : 1, # int
    'ForceLeaves' : False, # bool
    'EnableFaultHandler' : False, # bool
    'InhibitPathes' : [  ], # list
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
    'RootCLID' : """ CLID of root entry [HiveWhiteBoard] """,
    'RootName' : """ name of root entry [HiveWhiteBoard] """,
    'DataLoader' : """  [HiveWhiteBoard] """,
    'EventSlots' : """ number of event slots [HiveWhiteBoard] """,
    'ForceLeaves' : """ force creation of default leaves on registerObject [HiveWhiteBoard] """,
    'EnableFaultHandler' : """ enable incidents on data creation requests [HiveWhiteBoard] """,
    'InhibitPathes' : """ inhibited leaves [HiveWhiteBoard] """,
  }
  __declaration_location__ = 'HiveWhiteBoard.cpp:515'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(HiveWhiteBoard, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiHive'
  def getType( self ):
      return 'HiveWhiteBoard'
  pass # class HiveWhiteBoard

class PrecedenceSvc( ConfigurableService ) :
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
    'TaskPriorityRule' : '', # str
    'IgnoreDFRules' : False, # bool
    'DumpPrecedenceTrace' : False, # bool
    'PrecedenceTraceFile' : '', # str
    'DumpPrecedenceRules' : False, # bool
    'PrecedenceRulesFile' : '', # str
    'VerifyTaskPrecedenceRules' : True, # bool
    'ShowDataFlow' : False, # bool
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
    'TaskPriorityRule' : """ Task avalanche induction strategy. [PrecedenceSvc] """,
    'IgnoreDFRules' : """ Ignore the data flow rules. [PrecedenceSvc] """,
    'DumpPrecedenceTrace' : """ Dump task precedence traces for each event. [PrecedenceSvc] """,
    'PrecedenceTraceFile' : """ Override default name of the GRAPHML trace file. NOTE: if more than 1 event is processed, the setting forces creation of a single file with cumulative precedence trace. [PrecedenceSvc] """,
    'DumpPrecedenceRules' : """ Dump task precedence rules. [PrecedenceSvc] """,
    'PrecedenceRulesFile' : """ Override default name of the GRAPHML precedence rules file. [PrecedenceSvc] """,
    'VerifyTaskPrecedenceRules' : """ Verify task precedence rules for common errors. [PrecedenceSvc] """,
    'ShowDataFlow' : """ Show the configuration of DataFlow between Algorithms [PrecedenceSvc] """,
  }
  __declaration_location__ = 'PrecedenceSvc.cpp:23'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(PrecedenceSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiHive'
  def getType( self ):
      return 'PrecedenceSvc'
  pass # class PrecedenceSvc

class Test__ViewTester( ConfigurableAlgorithm ) :
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
    'RegisterForContextService' : True, # bool
    'Cardinality' : 1, # int
    'NeededResources' : [  ], # list
    'Blocking' : False, # bool
    'FilterCircularDependencies' : True, # bool
    'RootInTES' : '', # str
    'ErrorsPrint' : True, # bool
    'PropertiesPrint' : False, # bool
    'TypePrint' : True, # bool
    'Context' : '', # str
    'CounterList' : [ '.*' ], # list
    'VetoObjects' : [  ], # list
    'RequireObjects' : [  ], # list
    'inpKeys' : [  ], # list
    'outKeys' : [  ], # list
    'baseViewName' : 'view', # str
    'viewNumber' : 0, # int
    'viewNodeName' : 'viewNode', # str
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
    'RootInTES' : """ note: overridden by parent settings [FixTESPath<Algorithm>] """,
    'ErrorsPrint' : """ print the statistics of errors/warnings/exceptions [GaudiCommon<Algorithm>] """,
    'PropertiesPrint' : """ print the properties of the component [GaudiCommon<Algorithm>] """,
    'TypePrint' : """ add the actual C++ component type into the messages [GaudiCommon<Algorithm>] """,
    'Context' : """ note: overridden by parent settings [GaudiCommon<Algorithm>] """,
    'CounterList' : """ RegEx list, of simple integer counters for CounterSummary [GaudiCommon<Algorithm>] """,
    'VetoObjects' : """ skip execute if one or more of these TES objects exist [GaudiAlgorithm] """,
    'RequireObjects' : """ execute only if one or more of these TES objects exist [GaudiAlgorithm] """,
    'inpKeys' : """  [Test::ViewTester] """,
    'outKeys' : """  [Test::ViewTester] """,
    'baseViewName' : """ Views to be named this, plus a numerical index [Test::ViewTester] """,
    'viewNumber' : """ How many views to make [Test::ViewTester] """,
    'viewNodeName' : """ Name of node to attach views to [Test::ViewTester] """,
  }
  __declaration_location__ = 'ViewTester.cpp:14'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Test__ViewTester, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiHive'
  def getType( self ):
      return 'Test::ViewTester'
  pass # class Test__ViewTester

class ThreadPoolSvc( ConfigurableService ) :
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
    'ThreadInitTools' : PrivateToolHandleArray([]), # GaudiHandleArray
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
    'ThreadInitTools' : """ ToolHandleArray of IThreadInitTools [unknown owner type] """,
  }
  __declaration_location__ = 'ThreadPoolSvc.cpp:30'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(ThreadPoolSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiHive'
  def getType( self ):
      return 'ThreadPoolSvc'
  pass # class ThreadPoolSvc

class TimelineSvc( ConfigurableService ) :
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
    'TimelineFile' : 'timeline.csv', # str
    'RecordTimeline' : False, # bool
    'DumpTimeline' : False, # bool
    'Partial' : False, # bool
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
    'TimelineFile' : """  [TimelineSvc] """,
    'RecordTimeline' : """ Enable recording of the timeline events [TimelineSvc] """,
    'DumpTimeline' : """ Enable dumping of the timeline events [TimelineSvc] """,
    'Partial' : """  [TimelineSvc] """,
  }
  __declaration_location__ = 'TimelineSvc.cpp:100'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(TimelineSvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiHive'
  def getType( self ):
      return 'TimelineSvc'
  pass # class TimelineSvc
