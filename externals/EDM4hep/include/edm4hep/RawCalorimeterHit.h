// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_RawCalorimeterHit_H
#define EDM4HEP_RawCalorimeterHit_H

#include "edm4hep/RawCalorimeterHitObj.h"

#include <cstdint>
#include "podio/ObjectID.h"
#include <ostream>



namespace edm4hep {

class MutableRawCalorimeterHit;

/** @class RawCalorimeterHit
 *  Raw calorimeter hit
 *  @author: F.Gaede, DESY
 */
class RawCalorimeterHit {

  friend class MutableRawCalorimeterHit;
  friend class RawCalorimeterHitCollection;
  friend class RawCalorimeterHitCollectionIterator;

public:
  /// default constructor
  RawCalorimeterHit();
  RawCalorimeterHit(std::uint64_t cellID, std::int32_t amplitude, std::int32_t timeStamp);

  /// constructor from existing RawCalorimeterHitObj
  RawCalorimeterHit(RawCalorimeterHitObj* obj);

  /// copy constructor
  RawCalorimeterHit(const RawCalorimeterHit& other);

  /// copy-assignment operator
  RawCalorimeterHit& operator=(RawCalorimeterHit other);

  /// create a mutable deep-copy of the object with identical relations
  MutableRawCalorimeterHit clone() const;

  /// destructor
  ~RawCalorimeterHit();


public:

  /// Access the detector specific (geometrical) cell id.
  const std::uint64_t& getCellID() const;

  /// Access the amplitude of the hit in ADC counts.
  const std::int32_t& getAmplitude() const;

  /// Access the time stamp for the hit.
  const std::int32_t& getTimeStamp() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from RawCalorimeterHitObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const RawCalorimeterHit& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableRawCalorimeterHit& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const RawCalorimeterHit& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(RawCalorimeterHit& a, RawCalorimeterHit& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  RawCalorimeterHitObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const RawCalorimeterHit& value);

} // namespace edm4hep


#endif
