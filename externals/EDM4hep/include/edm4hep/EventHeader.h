// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_EventHeader_H
#define EDM4HEP_EventHeader_H

#include "edm4hep/EventHeaderObj.h"

#include <cstdint>
#include "podio/ObjectID.h"
#include <ostream>



namespace edm4hep {

class MutableEventHeader;

/** @class EventHeader
 *  Event Header. Additional parameters are assumed to go into the metadata tree.
 *  @author: F.Gaede
 */
class EventHeader {

  friend class MutableEventHeader;
  friend class EventHeaderCollection;
  friend class EventHeaderCollectionIterator;

public:
  /// default constructor
  EventHeader();
  EventHeader(std::int32_t eventNumber, std::int32_t runNumber, std::uint64_t timeStamp, float weight);

  /// constructor from existing EventHeaderObj
  EventHeader(EventHeaderObj* obj);

  /// copy constructor
  EventHeader(const EventHeader& other);

  /// copy-assignment operator
  EventHeader& operator=(EventHeader other);

  /// create a mutable deep-copy of the object with identical relations
  MutableEventHeader clone() const;

  /// destructor
  ~EventHeader();


public:

  /// Access the event number
  const std::int32_t& getEventNumber() const;

  /// Access the run number
  const std::int32_t& getRunNumber() const;

  /// Access the time stamp
  const std::uint64_t& getTimeStamp() const;

  /// Access the event weight
  const float& getWeight() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from EventHeaderObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const EventHeader& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableEventHeader& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const EventHeader& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(EventHeader& a, EventHeader& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  EventHeaderObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const EventHeader& value);

} // namespace edm4hep


#endif
