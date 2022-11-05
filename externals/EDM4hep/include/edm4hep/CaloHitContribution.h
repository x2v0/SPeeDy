// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_CaloHitContribution_H
#define EDM4HEP_CaloHitContribution_H

#include "edm4hep/CaloHitContributionObj.h"

#include "edm4hep/Vector3f.h"
#include <cstdint>
#include "podio/ObjectID.h"
#include <ostream>

// forward declarations
namespace edm4hep {
class MCParticle;
class MutableMCParticle;
}


namespace edm4hep {

class MutableCaloHitContribution;

/** @class CaloHitContribution
 *  Monte Carlo contribution to SimCalorimeterHit
 *  @author: F.Gaede, DESY
 */
class CaloHitContribution {

  friend class MutableCaloHitContribution;
  friend class CaloHitContributionCollection;
  friend class CaloHitContributionCollectionIterator;

public:
  /// default constructor
  CaloHitContribution();
  CaloHitContribution(std::int32_t PDG, float energy, float time, edm4hep::Vector3f stepPosition);

  /// constructor from existing CaloHitContributionObj
  CaloHitContribution(CaloHitContributionObj* obj);

  /// copy constructor
  CaloHitContribution(const CaloHitContribution& other);

  /// copy-assignment operator
  CaloHitContribution& operator=(CaloHitContribution other);

  /// create a mutable deep-copy of the object with identical relations
  MutableCaloHitContribution clone() const;

  /// destructor
  ~CaloHitContribution();


public:

  /// Access the PDG code of the shower particle that caused this contribution.
  const std::int32_t& getPDG() const;

  /// Access the energy in [GeV] of the this contribution
  const float& getEnergy() const;

  /// Access the time in [ns] of this contribution
  const float& getTime() const;

  /// Access the position of this energy deposition (step)
  const edm4hep::Vector3f& getStepPosition() const;


  /// Access the primary MCParticle that caused the shower responsible for this contribution to the hit.
  const edm4hep::MCParticle getParticle() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from CaloHitContributionObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const CaloHitContribution& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableCaloHitContribution& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const CaloHitContribution& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(CaloHitContribution& a, CaloHitContribution& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  CaloHitContributionObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const CaloHitContribution& value);

} // namespace edm4hep


#endif
