// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_CalorimeterHit_H
#define EDM4HEP_CalorimeterHit_H

#include "edm4hep/CalorimeterHitObj.h"

#include "edm4hep/Vector3f.h"
#include <cstdint>
#include "podio/ObjectID.h"
#include <ostream>



namespace edm4hep {

class MutableCalorimeterHit;

/** @class CalorimeterHit
 *  Calorimeter hit
 *  @author: F.Gaede, DESY
 */
class CalorimeterHit {

  friend class MutableCalorimeterHit;
  friend class CalorimeterHitCollection;
  friend class CalorimeterHitCollectionIterator;

public:
  /// default constructor
  CalorimeterHit();
  CalorimeterHit(std::uint64_t cellID, float energy, float energyError, float time, edm4hep::Vector3f position, std::int32_t type);

  /// constructor from existing CalorimeterHitObj
  CalorimeterHit(CalorimeterHitObj* obj);

  /// copy constructor
  CalorimeterHit(const CalorimeterHit& other);

  /// copy-assignment operator
  CalorimeterHit& operator=(CalorimeterHit other);

  /// create a mutable deep-copy of the object with identical relations
  MutableCalorimeterHit clone() const;

  /// destructor
  ~CalorimeterHit();


public:

  /// Access the detector specific (geometrical) cell id.
  const std::uint64_t& getCellID() const;

  /// Access the energy of the hit in [GeV].
  const float& getEnergy() const;

  /// Access the error of the hit energy in [GeV].
  const float& getEnergyError() const;

  /// Access the time of the hit in [ns].
  const float& getTime() const;

  /// Access the position of the hit in world coordinates.
  const edm4hep::Vector3f& getPosition() const;

  /// Access the type of hit. Mapping of integer types to names via collection parameters "CalorimeterHitTypeNames" and "CalorimeterHitTypeValues".
  const std::int32_t& getType() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from CalorimeterHitObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const CalorimeterHit& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableCalorimeterHit& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const CalorimeterHit& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(CalorimeterHit& a, CalorimeterHit& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  CalorimeterHitObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const CalorimeterHit& value);

} // namespace edm4hep


#endif
