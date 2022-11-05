// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCRecoTrackParticleAssociation_H
#define EDM4HEP_MCRecoTrackParticleAssociation_H

#include "edm4hep/MCRecoTrackParticleAssociationObj.h"

#include "podio/ObjectID.h"
#include <ostream>

// forward declarations
namespace edm4hep {
class Track;
class MutableTrack;
class MCParticle;
class MutableMCParticle;
}


namespace edm4hep {

class MutableMCRecoTrackParticleAssociation;

/** @class MCRecoTrackParticleAssociation
 *  Association between a Track and a MCParticle
 *  @author: Placido Fernandez Declara
 */
class MCRecoTrackParticleAssociation {

  friend class MutableMCRecoTrackParticleAssociation;
  friend class MCRecoTrackParticleAssociationCollection;
  friend class MCRecoTrackParticleAssociationCollectionIterator;

public:
  /// default constructor
  MCRecoTrackParticleAssociation();
  MCRecoTrackParticleAssociation(float weight);

  /// constructor from existing MCRecoTrackParticleAssociationObj
  MCRecoTrackParticleAssociation(MCRecoTrackParticleAssociationObj* obj);

  /// copy constructor
  MCRecoTrackParticleAssociation(const MCRecoTrackParticleAssociation& other);

  /// copy-assignment operator
  MCRecoTrackParticleAssociation& operator=(MCRecoTrackParticleAssociation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableMCRecoTrackParticleAssociation clone() const;

  /// destructor
  ~MCRecoTrackParticleAssociation();


public:

  /// Access the weight of this association
  const float& getWeight() const;


  /// Access the reference to the track
  const edm4hep::Track getRec() const;
  /// Access the reference to the Monte-Carlo particle
  const edm4hep::MCParticle getSim() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from MCRecoTrackParticleAssociationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MCRecoTrackParticleAssociation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableMCRecoTrackParticleAssociation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MCRecoTrackParticleAssociation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MCRecoTrackParticleAssociation& a, MCRecoTrackParticleAssociation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  MCRecoTrackParticleAssociationObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const MCRecoTrackParticleAssociation& value);

} // namespace edm4hep


#endif
