// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MutableParticleID_H
#define EDM4HEP_MutableParticleID_H

#include "edm4hep/ParticleIDObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "edm4hep/ParticleID.h"

#include "podio/RelationRange.h"
#include <cstdint>
#include <vector>
#include "podio/ObjectID.h"
#include <ostream>



namespace edm4hep {


/** @class MutableParticleID
 *  ParticleID
 *  @author: F.Gaede, DESY
 */
class MutableParticleID {

  friend class ParticleIDCollection;
  friend class ParticleIDMutableCollectionIterator;
  friend class ParticleID;

public:

  /// default constructor
  MutableParticleID();
  MutableParticleID(std::int32_t type, std::int32_t PDG, std::int32_t algorithmType, float likelihood);

  /// constructor from existing ParticleIDObj
  MutableParticleID(ParticleIDObj* obj);

  /// copy constructor
  MutableParticleID(const MutableParticleID& other);

  /// copy-assignment operator
  MutableParticleID& operator=(MutableParticleID other);

  /// create a mutable deep-copy of the object with identical relations
  MutableParticleID clone() const;

  /// destructor
  ~MutableParticleID();

  /// conversion to const object
  operator ParticleID() const;

public:

  /// Access the userdefined type
  const std::int32_t& getType() const;

  /// Access the PDG code of this id - ( 999999 ) if unknown.
  const std::int32_t& getPDG() const;

  /// Access the type of the algorithm/module that created this hypothesis
  const std::int32_t& getAlgorithmType() const;

  /// Access the likelihood of this hypothesis - in a user defined normalization.
  const float& getLikelihood() const;



  /// Set the userdefined type
  void setType(std::int32_t value);

  /// Set the PDG code of this id - ( 999999 ) if unknown.
  void setPDG(std::int32_t value);

  /// Set the type of the algorithm/module that created this hypothesis
  void setAlgorithmType(std::int32_t value);

  /// Set the likelihood of this hypothesis - in a user defined normalization.
  void setLikelihood(float value);



  void addToParameters(float);
  unsigned int parameters_size() const;
  float getParameters(unsigned int) const;
  std::vector<float>::const_iterator parameters_begin() const;
  std::vector<float>::const_iterator parameters_end() const;
  podio::RelationRange<float> getParameters() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ParticleIDObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MutableParticleID& other) const { return m_obj == other.m_obj; }
  bool operator==(const ParticleID& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableParticleID& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableParticleID& a, MutableParticleID& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  ParticleIDObj* m_obj;
};

} // namespace edm4hep


#endif
