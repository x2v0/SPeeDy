// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MutableSimCalorimeterHit_H
#define EDM4HEP_MutableSimCalorimeterHit_H

#include "edm4hep/SimCalorimeterHitObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "edm4hep/SimCalorimeterHit.h"

#include "edm4hep/CaloHitContribution.h"
#include "edm4hep/Vector3f.h"
#include "podio/RelationRange.h"
#include <cstdint>
#include <vector>
#include "podio/ObjectID.h"
#include <ostream>



namespace edm4hep {


/** @class MutableSimCalorimeterHit
 *  Simulated calorimeter hit
 *  @author: F.Gaede, DESY
 */
class MutableSimCalorimeterHit {

  friend class SimCalorimeterHitCollection;
  friend class SimCalorimeterHitMutableCollectionIterator;
  friend class SimCalorimeterHit;

public:

  /// default constructor
  MutableSimCalorimeterHit();
  MutableSimCalorimeterHit(std::uint64_t cellID, float energy, edm4hep::Vector3f position);

  /// constructor from existing SimCalorimeterHitObj
  MutableSimCalorimeterHit(SimCalorimeterHitObj* obj);

  /// copy constructor
  MutableSimCalorimeterHit(const MutableSimCalorimeterHit& other);

  /// copy-assignment operator
  MutableSimCalorimeterHit& operator=(MutableSimCalorimeterHit other);

  /// create a mutable deep-copy of the object with identical relations
  MutableSimCalorimeterHit clone() const;

  /// destructor
  ~MutableSimCalorimeterHit();

  /// conversion to const object
  operator SimCalorimeterHit() const;

public:

  /// Access the ID of the sensor that created this hit
  const std::uint64_t& getCellID() const;

  /// Access the energy of the hit in [GeV].
  const float& getEnergy() const;

  /// Access the position of the hit in world coordinates.
  const edm4hep::Vector3f& getPosition() const;



  /// Set the ID of the sensor that created this hit
  void setCellID(std::uint64_t value);

  /// Set the energy of the hit in [GeV].
  void setEnergy(float value);

  /// Set the position of the hit in world coordinates.
  void setPosition(edm4hep::Vector3f value);
  /// Get reference to position of the hit in world coordinates.
  edm4hep::Vector3f& position();



  void addToContributions(edm4hep::CaloHitContribution);
  unsigned int contributions_size() const;
  edm4hep::CaloHitContribution getContributions(unsigned int) const;
  std::vector<edm4hep::CaloHitContribution>::const_iterator contributions_begin() const;
  std::vector<edm4hep::CaloHitContribution>::const_iterator contributions_end() const;
  podio::RelationRange<edm4hep::CaloHitContribution> getContributions() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from SimCalorimeterHitObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MutableSimCalorimeterHit& other) const { return m_obj == other.m_obj; }
  bool operator==(const SimCalorimeterHit& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableSimCalorimeterHit& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableSimCalorimeterHit& a, MutableSimCalorimeterHit& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  SimCalorimeterHitObj* m_obj;
};

} // namespace edm4hep


#endif
