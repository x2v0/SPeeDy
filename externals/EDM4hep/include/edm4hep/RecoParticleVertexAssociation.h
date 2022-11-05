// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_RecoParticleVertexAssociation_H
#define EDM4HEP_RecoParticleVertexAssociation_H

#include "edm4hep/RecoParticleVertexAssociationObj.h"

#include "podio/ObjectID.h"
#include <ostream>

// forward declarations
namespace edm4hep {
class ReconstructedParticle;
class MutableReconstructedParticle;
class Vertex;
class MutableVertex;
}


namespace edm4hep {

class MutableRecoParticleVertexAssociation;

/** @class RecoParticleVertexAssociation
 *  Association between a Reconstructed Particle and a Vertex
 *  @author: Placido Fernandez Declara
 */
class RecoParticleVertexAssociation {

  friend class MutableRecoParticleVertexAssociation;
  friend class RecoParticleVertexAssociationCollection;
  friend class RecoParticleVertexAssociationCollectionIterator;

public:
  /// default constructor
  RecoParticleVertexAssociation();
  RecoParticleVertexAssociation(float weight);

  /// constructor from existing RecoParticleVertexAssociationObj
  RecoParticleVertexAssociation(RecoParticleVertexAssociationObj* obj);

  /// copy constructor
  RecoParticleVertexAssociation(const RecoParticleVertexAssociation& other);

  /// copy-assignment operator
  RecoParticleVertexAssociation& operator=(RecoParticleVertexAssociation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableRecoParticleVertexAssociation clone() const;

  /// destructor
  ~RecoParticleVertexAssociation();


public:

  /// Access the weight of this association
  const float& getWeight() const;


  /// Access the reference to the reconstructed particle
  const edm4hep::ReconstructedParticle getRec() const;
  /// Access the reference to the vertex
  const edm4hep::Vertex getVertex() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from RecoParticleVertexAssociationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const RecoParticleVertexAssociation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableRecoParticleVertexAssociation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const RecoParticleVertexAssociation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(RecoParticleVertexAssociation& a, RecoParticleVertexAssociation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  RecoParticleVertexAssociationObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const RecoParticleVertexAssociation& value);

} // namespace edm4hep


#endif
