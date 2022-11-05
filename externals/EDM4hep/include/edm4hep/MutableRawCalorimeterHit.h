// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MutableRawCalorimeterHit_H
#define EDM4HEP_MutableRawCalorimeterHit_H

#include "edm4hep/RawCalorimeterHitObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "edm4hep/RawCalorimeterHit.h"

#include <cstdint>
#include "podio/ObjectID.h"
#include <ostream>



namespace edm4hep {


/** @class MutableRawCalorimeterHit
 *  Raw calorimeter hit
 *  @author: F.Gaede, DESY
 */
class MutableRawCalorimeterHit {

  friend class RawCalorimeterHitCollection;
  friend class RawCalorimeterHitMutableCollectionIterator;
  friend class RawCalorimeterHit;

public:

  /// default constructor
  MutableRawCalorimeterHit();
  MutableRawCalorimeterHit(std::uint64_t cellID, std::int32_t amplitude, std::int32_t timeStamp);

  /// constructor from existing RawCalorimeterHitObj
  MutableRawCalorimeterHit(RawCalorimeterHitObj* obj);

  /// copy constructor
  MutableRawCalorimeterHit(const MutableRawCalorimeterHit& other);

  /// copy-assignment operator
  MutableRawCalorimeterHit& operator=(MutableRawCalorimeterHit other);

  /// create a mutable deep-copy of the object with identical relations
  MutableRawCalorimeterHit clone() const;

  /// destructor
  ~MutableRawCalorimeterHit();

  /// conversion to const object
  operator RawCalorimeterHit() const;

public:

  /// Access the detector specific (geometrical) cell id.
  const std::uint64_t& getCellID() const;

  /// Access the amplitude of the hit in ADC counts.
  const std::int32_t& getAmplitude() const;

  /// Access the time stamp for the hit.
  const std::int32_t& getTimeStamp() const;



  /// Set the detector specific (geometrical) cell id.
  void setCellID(std::uint64_t value);

  /// Set the amplitude of the hit in ADC counts.
  void setAmplitude(std::int32_t value);

  /// Set the time stamp for the hit.
  void setTimeStamp(std::int32_t value);






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from RawCalorimeterHitObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MutableRawCalorimeterHit& other) const { return m_obj == other.m_obj; }
  bool operator==(const RawCalorimeterHit& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableRawCalorimeterHit& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableRawCalorimeterHit& a, MutableRawCalorimeterHit& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  RawCalorimeterHitObj* m_obj;
};

} // namespace edm4hep


#endif
