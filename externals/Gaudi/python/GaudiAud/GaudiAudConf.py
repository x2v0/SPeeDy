#Sun Jul 31 03:17:07 2022"""Automatically generated. DO NOT EDIT please"""
import sys
if sys.version_info >= (3,):
    # Python 2 compatibility
    long = int
from GaudiKernel.Proxy.Configurable import *

class AlgContextAuditor( ConfigurableAuditor ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Auditor] """,
    'Enable' : """ should the auditor be used or not [Auditor] """,
  }
  __declaration_location__ = 'AlgContextAuditor.cpp:43'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(AlgContextAuditor, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiAud'
  def getType( self ):
      return 'AlgContextAuditor'
  pass # class AlgContextAuditor

class ChronoAuditor( ConfigurableAuditor ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'EventTypes' : [  ], # list
    'CustomEventTypes' : [  ], # list
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Auditor] """,
    'Enable' : """ should the auditor be used or not [Auditor] """,
    'EventTypes' : """ list of event types to audit ([]=all, ['none']=none) [CommonAuditor] """,
    'CustomEventTypes' : """ [[deprecated]] use EventTypes instead [CommonAuditor] """,
  }
  __declaration_location__ = 'ChronoAuditor.cpp:16'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(ChronoAuditor, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiAud'
  def getType( self ):
      return 'ChronoAuditor'
  pass # class ChronoAuditor

class MemStatAuditor( ConfigurableAuditor ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'EventTypes' : [  ], # list
    'CustomEventTypes' : [  ], # list
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Auditor] """,
    'Enable' : """ should the auditor be used or not [Auditor] """,
    'EventTypes' : """ list of event types to audit ([]=all, ['none']=none) [CommonAuditor] """,
    'CustomEventTypes' : """ [[deprecated]] use EventTypes instead [CommonAuditor] """,
  }
  __declaration_location__ = 'MemStatAuditor.cpp:50'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(MemStatAuditor, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiAud'
  def getType( self ):
      return 'MemStatAuditor'
  pass # class MemStatAuditor

class MemoryAuditor( ConfigurableAuditor ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'EventTypes' : [  ], # list
    'CustomEventTypes' : [  ], # list
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Auditor] """,
    'Enable' : """ should the auditor be used or not [Auditor] """,
    'EventTypes' : """ list of event types to audit ([]=all, ['none']=none) [CommonAuditor] """,
    'CustomEventTypes' : """ [[deprecated]] use EventTypes instead [CommonAuditor] """,
  }
  __declaration_location__ = 'MemoryAuditor.cpp:37'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(MemoryAuditor, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiAud'
  def getType( self ):
      return 'MemoryAuditor'
  pass # class MemoryAuditor

class NameAuditor( ConfigurableAuditor ) :
  __slots__ = { 
    'OutputLevel' : 0, # int
    'Enable' : True, # bool
    'EventTypes' : [  ], # list
    'CustomEventTypes' : [  ], # list
  }
  _propertyDocDct = { 
    'OutputLevel' : """ output level [Auditor] """,
    'Enable' : """ should the auditor be used or not [Auditor] """,
    'EventTypes' : """ list of event types to audit ([]=all, ['none']=none) [CommonAuditor] """,
    'CustomEventTypes' : """ [[deprecated]] use EventTypes instead [CommonAuditor] """,
  }
  __declaration_location__ = 'NameAuditor.cpp:35'
  def __init__(self, name = Configurable.DefaultName, **kwargs):
      super(NameAuditor, self).__init__(name)
      for n,v in kwargs.items():
         setattr(self, n, v)
  def getDlls( self ):
      return 'GaudiAud'
  def getType( self ):
      return 'NameAuditor'
  pass # class NameAuditor
