// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_ParticleID_H
#define EDM4HEP_ParticleID_H

#include "edm4hep/ParticleIDObj.h"

#include "podio/RelationRange.h"
#include <cstdint>
#include <vector>
#include "podio/ObjectID.h"
#include <ostream>



namespace edm4hep {

class MutableParticleID;

/** @class ParticleID
 *  ParticleID
 *  @author: F.Gaede, DESY
 */
class ParticleID {

  friend class MutableParticleID;
  friend class ParticleIDCollection;
  friend class ParticleIDCollectionIterator;

public:
  /// default constructor
  ParticleID();
  ParticleID(std::int32_t type, std::int32_t PDG, std::int32_t algorithmType, float likelihood);

  /// constructor from existing ParticleIDObj
  ParticleID(ParticleIDObj* obj);

  /// copy constructor
  ParticleID(const ParticleID& other);

  /// copy-assignment operator
  ParticleID& operator=(ParticleID other);

  /// create a mutable deep-copy of the object with identical relations
  MutableParticleID clone() const;

  /// destructor
  ~ParticleID();


public:

  /// Access the userdefined type
  const std::int32_t& getType() const;

  /// Access the PDG code of this id - ( 999999 ) if unknown.
  const std::int32_t& getPDG() const;

  /// Access the type of the algorithm/module that created this hypothesis
  const std::int32_t& getAlgorithmType() const;

  /// Access the likelihood of this hypothesis - in a user defined normalization.
  const float& getLikelihood() const;



  unsigned int parameters_size() const;
  float getParameters(unsigned int) const;
  std::vector<float>::const_iterator parameters_begin() const;
  std::vector<float>::const_iterator parameters_end() const;
  podio::RelationRange<float> getParameters() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ParticleIDObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ParticleID& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableParticleID& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ParticleID& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(ParticleID& a, ParticleID& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  ParticleIDObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ParticleID& value);

} // namespace edm4hep


#endif
