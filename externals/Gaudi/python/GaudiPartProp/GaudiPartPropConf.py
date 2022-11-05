#Sun Jul 31 03:16:53 2022"""Automatically generated. DO NOT EDIT please"""
import sys
if sys.version_info >= (3,):
    # Python 2 compatibility
    long = int
from GaudiKernel.Proxy.Configurable import *

class Gaudi__ParticlePropertySvc( ConfigurableService ) :
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
    'ParticlePropertiesFile' : 'ParticleTable.txt', # str
    'OtherFiles' : [  ], # list
    'Particles' : [  ], # list
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
    'ParticlePropertiesFile' : """ Filename of the particle properties file [Gaudi::ParticlePropertySvc] """,
    'OtherFiles' : """ additional file names [Gaudi::ParticlePropertySvc] """,
    'Particles' : """ properties to be redefined explicitly [Gaudi::ParticlePropertySvc] """,
  }
  __declaration_location__ = 'ParticlePropertySvc.cpp:42'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(Gaudi__ParticlePropertySvc, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiPartProp'
  def getType( self ):
      return 'Gaudi::ParticlePropertySvc'
  pass # class Gaudi__ParticlePropertySvc
