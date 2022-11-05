// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MutableMCRecoTrackParticleAssociation_H
#define EDM4HEP_MutableMCRecoTrackParticleAssociation_H

#include "edm4hep/MCRecoTrackParticleAssociationObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "edm4hep/MCRecoTrackParticleAssociation.h"

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


/** @class MutableMCRecoTrackParticleAssociation
 *  Association between a Track and a MCParticle
 *  @author: Placido Fernandez Declara
 */
class MutableMCRecoTrackParticleAssociation {

  friend class MCRecoTrackParticleAssociationCollection;
  friend class MCRecoTrackParticleAssociationMutableCollectionIterator;
  friend class MCRecoTrackParticleAssociation;

public:

  /// default constructor
  MutableMCRecoTrackParticleAssociation();
  MutableMCRecoTrackParticleAssociation(float weight);

  /// constructor from existing MCRecoTrackParticleAssociationObj
  MutableMCRecoTrackParticleAssociation(MCRecoTrackParticleAssociationObj* obj);

  /// copy constructor
  MutableMCRecoTrackParticleAssociation(const MutableMCRecoTrackParticleAssociation& other);

  /// copy-assignment operator
  MutableMCRecoTrackParticleAssociation& operator=(MutableMCRecoTrackParticleAssociation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableMCRecoTrackParticleAssociation clone() const;

  /// destructor
  ~MutableMCRecoTrackParticleAssociation();

  /// conversion to const object
  operator MCRecoTrackParticleAssociation() const;

public:

  /// Access the weight of this association
  const float& getWeight() const;


  /// Access the reference to the track
  const edm4hep::Track getRec() const;
  /// Access the reference to the Monte-Carlo particle
  const edm4hep::MCParticle getSim() const;

  /// Set the weight of this association
  void setWeight(float value);


  /// Set the reference to the track
  void setRec(edm4hep::Track value);
  /// Set the reference to the Monte-Carlo particle
  void setSim(edm4hep::MCParticle value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from MCRecoTrackParticleAssociationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MutableMCRecoTrackParticleAssociation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MCRecoTrackParticleAssociation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableMCRecoTrackParticleAssociation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableMCRecoTrackParticleAssociation& a, MutableMCRecoTrackParticleAssociation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  MCRecoTrackParticleAssociationObj* m_obj;
};

} // namespace edm4hep


#endif
