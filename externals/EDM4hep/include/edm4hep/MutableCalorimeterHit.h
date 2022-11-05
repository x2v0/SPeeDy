// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MutableCalorimeterHit_H
#define EDM4HEP_MutableCalorimeterHit_H

#include "edm4hep/CalorimeterHitObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "edm4hep/CalorimeterHit.h"

#include "edm4hep/Vector3f.h"
#include <cstdint>
#include "podio/ObjectID.h"
#include <ostream>



namespace edm4hep {


/** @class MutableCalorimeterHit
 *  Calorimeter hit
 *  @author: F.Gaede, DESY
 */
class MutableCalorimeterHit {

  friend class CalorimeterHitCollection;
  friend class CalorimeterHitMutableCollectionIterator;
  friend class CalorimeterHit;

public:

  /// default constructor
  MutableCalorimeterHit();
  MutableCalorimeterHit(std::uint64_t cellID, float energy, float energyError, float time, edm4hep::Vector3f position, std::int32_t type);

  /// constructor from existing CalorimeterHitObj
  MutableCalorimeterHit(CalorimeterHitObj* obj);

  /// copy constructor
  MutableCalorimeterHit(const MutableCalorimeterHit& other);

  /// copy-assignment operator
  MutableCalorimeterHit& operator=(MutableCalorimeterHit other);

  /// create a mutable deep-copy of the object with identical relations
  MutableCalorimeterHit clone() const;

  /// destructor
  ~MutableCalorimeterHit();

  /// conversion to const object
  operator CalorimeterHit() const;

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



  /// Set the detector specific (geometrical) cell id.
  void setCellID(std::uint64_t value);

  /// Set the energy of the hit in [GeV].
  void setEnergy(float value);

  /// Set the error of the hit energy in [GeV].
  void setEnergyError(float value);

  /// Set the time of the hit in [ns].
  void setTime(float value);

  /// Set the position of the hit in world coordinates.
  void setPosition(edm4hep::Vector3f value);
  /// Get reference to position of the hit in world coordinates.
  edm4hep::Vector3f& position();

  /// Set the type of hit. Mapping of integer types to names via collection parameters "CalorimeterHitTypeNames" and "CalorimeterHitTypeValues".
  void setType(std::int32_t value);






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from CalorimeterHitObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MutableCalorimeterHit& other) const { return m_obj == other.m_obj; }
  bool operator==(const CalorimeterHit& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableCalorimeterHit& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableCalorimeterHit& a, MutableCalorimeterHit& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  CalorimeterHitObj* m_obj;
};

} // namespace edm4hep


#endif
