// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MutableCaloHitContribution_H
#define EDM4HEP_MutableCaloHitContribution_H

#include "edm4hep/CaloHitContributionObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "edm4hep/CaloHitContribution.h"

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


/** @class MutableCaloHitContribution
 *  Monte Carlo contribution to SimCalorimeterHit
 *  @author: F.Gaede, DESY
 */
class MutableCaloHitContribution {

  friend class CaloHitContributionCollection;
  friend class CaloHitContributionMutableCollectionIterator;
  friend class CaloHitContribution;

public:

  /// default constructor
  MutableCaloHitContribution();
  MutableCaloHitContribution(std::int32_t PDG, float energy, float time, edm4hep::Vector3f stepPosition);

  /// constructor from existing CaloHitContributionObj
  MutableCaloHitContribution(CaloHitContributionObj* obj);

  /// copy constructor
  MutableCaloHitContribution(const MutableCaloHitContribution& other);

  /// copy-assignment operator
  MutableCaloHitContribution& operator=(MutableCaloHitContribution other);

  /// create a mutable deep-copy of the object with identical relations
  MutableCaloHitContribution clone() const;

  /// destructor
  ~MutableCaloHitContribution();

  /// conversion to const object
  operator CaloHitContribution() const;

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

  /// Set the PDG code of the shower particle that caused this contribution.
  void setPDG(std::int32_t value);

  /// Set the energy in [GeV] of the this contribution
  void setEnergy(float value);

  /// Set the time in [ns] of this contribution
  void setTime(float value);

  /// Set the position of this energy deposition (step)
  void setStepPosition(edm4hep::Vector3f value);
  /// Get reference to position of this energy deposition (step)
  edm4hep::Vector3f& stepPosition();


  /// Set the primary MCParticle that caused the shower responsible for this contribution to the hit.
  void setParticle(edm4hep::MCParticle value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from CaloHitContributionObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MutableCaloHitContribution& other) const { return m_obj == other.m_obj; }
  bool operator==(const CaloHitContribution& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableCaloHitContribution& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableCaloHitContribution& a, MutableCaloHitContribution& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  CaloHitContributionObj* m_obj;
};

} // namespace edm4hep


#endif
