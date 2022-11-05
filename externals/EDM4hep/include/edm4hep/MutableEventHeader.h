// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MutableEventHeader_H
#define EDM4HEP_MutableEventHeader_H

#include "edm4hep/EventHeaderObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "edm4hep/EventHeader.h"

#include <cstdint>
#include "podio/ObjectID.h"
#include <ostream>



namespace edm4hep {


/** @class MutableEventHeader
 *  Event Header. Additional parameters are assumed to go into the metadata tree.
 *  @author: F.Gaede
 */
class MutableEventHeader {

  friend class EventHeaderCollection;
  friend class EventHeaderMutableCollectionIterator;
  friend class EventHeader;

public:

  /// default constructor
  MutableEventHeader();
  MutableEventHeader(std::int32_t eventNumber, std::int32_t runNumber, std::uint64_t timeStamp, float weight);

  /// constructor from existing EventHeaderObj
  MutableEventHeader(EventHeaderObj* obj);

  /// copy constructor
  MutableEventHeader(const MutableEventHeader& other);

  /// copy-assignment operator
  MutableEventHeader& operator=(MutableEventHeader other);

  /// create a mutable deep-copy of the object with identical relations
  MutableEventHeader clone() const;

  /// destructor
  ~MutableEventHeader();

  /// conversion to const object
  operator EventHeader() const;

public:

  /// Access the event number
  const std::int32_t& getEventNumber() const;

  /// Access the run number
  const std::int32_t& getRunNumber() const;

  /// Access the time stamp
  const std::uint64_t& getTimeStamp() const;

  /// Access the event weight
  const float& getWeight() const;



  /// Set the event number
  void setEventNumber(std::int32_t value);

  /// Set the run number
  void setRunNumber(std::int32_t value);

  /// Set the time stamp
  void setTimeStamp(std::uint64_t value);

  /// Set the event weight
  void setWeight(float value);






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from EventHeaderObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MutableEventHeader& other) const { return m_obj == other.m_obj; }
  bool operator==(const EventHeader& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableEventHeader& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableEventHeader& a, MutableEventHeader& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  EventHeaderObj* m_obj;
};

} // namespace edm4hep


#endif
