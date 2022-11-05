// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MutableRecoParticleVertexAssociation_H
#define EDM4HEP_MutableRecoParticleVertexAssociation_H

#include "edm4hep/RecoParticleVertexAssociationObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "edm4hep/RecoParticleVertexAssociation.h"

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


/** @class MutableRecoParticleVertexAssociation
 *  Association between a Reconstructed Particle and a Vertex
 *  @author: Placido Fernandez Declara
 */
class MutableRecoParticleVertexAssociation {

  friend class RecoParticleVertexAssociationCollection;
  friend class RecoParticleVertexAssociationMutableCollectionIterator;
  friend class RecoParticleVertexAssociation;

public:

  /// default constructor
  MutableRecoParticleVertexAssociation();
  MutableRecoParticleVertexAssociation(float weight);

  /// constructor from existing RecoParticleVertexAssociationObj
  MutableRecoParticleVertexAssociation(RecoParticleVertexAssociationObj* obj);

  /// copy constructor
  MutableRecoParticleVertexAssociation(const MutableRecoParticleVertexAssociation& other);

  /// copy-assignment operator
  MutableRecoParticleVertexAssociation& operator=(MutableRecoParticleVertexAssociation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableRecoParticleVertexAssociation clone() const;

  /// destructor
  ~MutableRecoParticleVertexAssociation();

  /// conversion to const object
  operator RecoParticleVertexAssociation() const;

public:

  /// Access the weight of this association
  const float& getWeight() const;


  /// Access the reference to the reconstructed particle
  const edm4hep::ReconstructedParticle getRec() const;
  /// Access the reference to the vertex
  const edm4hep::Vertex getVertex() const;

  /// Set the weight of this association
  void setWeight(float value);


  /// Set the reference to the reconstructed particle
  void setRec(edm4hep::ReconstructedParticle value);
  /// Set the reference to the vertex
  void setVertex(edm4hep::Vertex value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from RecoParticleVertexAssociationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MutableRecoParticleVertexAssociation& other) const { return m_obj == other.m_obj; }
  bool operator==(const RecoParticleVertexAssociation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableRecoParticleVertexAssociation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableRecoParticleVertexAssociation& a, MutableRecoParticleVertexAssociation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  RecoParticleVertexAssociationObj* m_obj;
};

} // namespace edm4hep


#endif
