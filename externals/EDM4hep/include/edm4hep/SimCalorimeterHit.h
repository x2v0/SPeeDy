// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_SimCalorimeterHit_H
#define EDM4HEP_SimCalorimeterHit_H

#include "edm4hep/SimCalorimeterHitObj.h"

#include "edm4hep/CaloHitContribution.h"
#include "edm4hep/Vector3f.h"
#include "podio/RelationRange.h"
#include <cstdint>
#include <vector>
#include "podio/ObjectID.h"
#include <ostream>



namespace edm4hep {

class MutableSimCalorimeterHit;

/** @class SimCalorimeterHit
 *  Simulated calorimeter hit
 *  @author: F.Gaede, DESY
 */
class SimCalorimeterHit {

  friend class MutableSimCalorimeterHit;
  friend class SimCalorimeterHitCollection;
  friend class SimCalorimeterHitCollectionIterator;

public:
  /// default constructor
  SimCalorimeterHit();
  SimCalorimeterHit(std::uint64_t cellID, float energy, edm4hep::Vector3f position);

  /// constructor from existing SimCalorimeterHitObj
  SimCalorimeterHit(SimCalorimeterHitObj* obj);

  /// copy constructor
  SimCalorimeterHit(const SimCalorimeterHit& other);

  /// copy-assignment operator
  SimCalorimeterHit& operator=(SimCalorimeterHit other);

  /// create a mutable deep-copy of the object with identical relations
  MutableSimCalorimeterHit clone() const;

  /// destructor
  ~SimCalorimeterHit();


public:

  /// Access the ID of the sensor that created this hit
  const std::uint64_t& getCellID() const;

  /// Access the energy of the hit in [GeV].
  const float& getEnergy() const;

  /// Access the position of the hit in world coordinates.
  const edm4hep::Vector3f& getPosition() const;



  unsigned int contributions_size() const;
  edm4hep::CaloHitContribution getContributions(unsigned int) const;
  std::vector<edm4hep::CaloHitContribution>::const_iterator contributions_begin() const;
  std::vector<edm4hep::CaloHitContribution>::const_iterator contributions_end() const;
  podio::RelationRange<edm4hep::CaloHitContribution> getContributions() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from SimCalorimeterHitObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const SimCalorimeterHit& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableSimCalorimeterHit& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const SimCalorimeterHit& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(SimCalorimeterHit& a, SimCalorimeterHit& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  SimCalorimeterHitObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const SimCalorimeterHit& value);

} // namespace edm4hep


#endif
