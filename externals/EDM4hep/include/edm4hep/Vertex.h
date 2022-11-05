// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_Vertex_H
#define EDM4HEP_Vertex_H

#include "edm4hep/VertexObj.h"

#include "edm4hep/Vector3f.h"
#include "podio/RelationRange.h"
#include <array>
#include <cstdint>
#include <vector>
#include "podio/ObjectID.h"
#include <ostream>

// forward declarations
namespace edm4hep {
class ReconstructedParticle;
class MutableReconstructedParticle;
}


namespace edm4hep {

class MutableVertex;

/** @class Vertex
 *  Vertex
 *  @author: F.Gaede, DESY
 */
class Vertex {

  friend class MutableVertex;
  friend class VertexCollection;
  friend class VertexCollectionIterator;

public:
  /// default constructor
  Vertex();
  Vertex(std::int32_t primary, float chi2, float probability, edm4hep::Vector3f position, std::array<float, 6> covMatrix, std::int32_t algorithmType);

  /// constructor from existing VertexObj
  Vertex(VertexObj* obj);

  /// copy constructor
  Vertex(const Vertex& other);

  /// copy-assignment operator
  Vertex& operator=(Vertex other);

  /// create a mutable deep-copy of the object with identical relations
  MutableVertex clone() const;

  /// destructor
  ~Vertex();


public:

  /// Access the boolean flag, if vertex is the primary vertex of the event
  const std::int32_t& getPrimary() const;

  /// Access the chi-squared of the vertex fit
  const float& getChi2() const;

  /// Access the probability of the vertex fit
  const float& getProbability() const;

  /// Access the [mm] position of the vertex.
  const edm4hep::Vector3f& getPosition() const;

  /// Access the covariance matrix of the position (stored as lower triangle matrix, i.e. cov(xx),cov(y,x),cov(z,x),cov(y,y),... )
  const std::array<float, 6>& getCovMatrix() const;
  /// Access item i of the covariance matrix of the position (stored as lower triangle matrix, i.e. cov(xx),cov(y,x),cov(z,x),cov(y,y),... )
  const float& getCovMatrix(size_t i) const;
  /// Access the type code for the algorithm that has been used to create the vertex - check/set the collection parameters AlgorithmName and AlgorithmType.
  const std::int32_t& getAlgorithmType() const;


  /// Access the reconstructed particle associated to this vertex.
  const edm4hep::ReconstructedParticle getAssociatedParticle() const;

  unsigned int parameters_size() const;
  float getParameters(unsigned int) const;
  std::vector<float>::const_iterator parameters_begin() const;
  std::vector<float>::const_iterator parameters_end() const;
  podio::RelationRange<float> getParameters() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from VertexObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const Vertex& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableVertex& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const Vertex& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(Vertex& a, Vertex& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  VertexObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const Vertex& value);

} // namespace edm4hep


#endif
