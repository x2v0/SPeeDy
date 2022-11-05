// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MutableTrackerHit_H
#define EDM4HEP_MutableTrackerHit_H

#include "edm4hep/TrackerHitObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "edm4hep/TrackerHit.h"

#include "edm4hep/ObjectID.h"
#include "edm4hep/Vector3d.h"
#include "podio/RelationRange.h"
#include <array>
#include <cstdint>
#include <vector>
#include "podio/ObjectID.h"
#include <ostream>



namespace edm4hep {


/** @class MutableTrackerHit
 *  Tracker hit
 *  @author: F.Gaede, DESY
 */
class MutableTrackerHit {

  friend class TrackerHitCollection;
  friend class TrackerHitMutableCollectionIterator;
  friend class TrackerHit;

public:

  /// default constructor
  MutableTrackerHit();
  MutableTrackerHit(std::uint64_t cellID, std::int32_t type, std::int32_t quality, float time, float eDep, float eDepError, float edx, edm4hep::Vector3d position, std::array<float, 6> covMatrix);

  /// constructor from existing TrackerHitObj
  MutableTrackerHit(TrackerHitObj* obj);

  /// copy constructor
  MutableTrackerHit(const MutableTrackerHit& other);

  /// copy-assignment operator
  MutableTrackerHit& operator=(MutableTrackerHit other);

  /// create a mutable deep-copy of the object with identical relations
  MutableTrackerHit clone() const;

  /// destructor
  ~MutableTrackerHit();

  /// conversion to const object
  operator TrackerHit() const;

public:

  /// Access the ID of the sensor that created this hit
  const std::uint64_t& getCellID() const;

  /// Access the type of raw data hit, either one of edm4hep::TPCHIT, edm4hep::SIMTRACKERHIT - see collection parameters "TrackerHitTypeNames" and "TrackerHitTypeValues".
  const std::int32_t& getType() const;

  /// Access the quality bit flag of the hit.
  const std::int32_t& getQuality() const;

  /// Access the time of the hit.
  const float& getTime() const;

  /// Access the energy deposited on the hit [GeV].
  const float& getEDep() const;

  /// Access the error measured on EDep [GeV].
  const float& getEDepError() const;

  /// Access the dE/dx of the hit in [GeV/mm].
  const float& getEdx() const;

  /// Access the hit position in [mm].
  const edm4hep::Vector3d& getPosition() const;

  /// Access the covariance of the position (x,y,z), stored as lower triangle matrix. i.e. cov(x,x) , cov(y,x) , cov(y,y) , cov(z,x) , cov(z,y) , cov(z,z)
  const std::array<float, 6>& getCovMatrix() const;
  /// Access item i of the covariance of the position (x,y,z), stored as lower triangle matrix. i.e. cov(x,x) , cov(y,x) , cov(y,y) , cov(z,x) , cov(z,y) , cov(z,z)
  const float& getCovMatrix(size_t i) const;


  /// Set the ID of the sensor that created this hit
  void setCellID(std::uint64_t value);

  /// Set the type of raw data hit, either one of edm4hep::TPCHIT, edm4hep::SIMTRACKERHIT - see collection parameters "TrackerHitTypeNames" and "TrackerHitTypeValues".
  void setType(std::int32_t value);

  /// Set the quality bit flag of the hit.
  void setQuality(std::int32_t value);

  /// Set the time of the hit.
  void setTime(float value);

  /// Set the energy deposited on the hit [GeV].
  void setEDep(float value);

  /// Set the error measured on EDep [GeV].
  void setEDepError(float value);

  /// Set the dE/dx of the hit in [GeV/mm].
  void setEdx(float value);

  /// Set the hit position in [mm].
  void setPosition(edm4hep::Vector3d value);
  /// Get reference to hit position in [mm].
  edm4hep::Vector3d& position();

  /// Set the covariance of the position (x,y,z), stored as lower triangle matrix. i.e. cov(x,x) , cov(y,x) , cov(y,y) , cov(z,x) , cov(z,y) , cov(z,z)
  void setCovMatrix(std::array<float, 6> value);
  void setCovMatrix(size_t i, float value);
  /// Get reference to covariance of the position (x,y,z), stored as lower triangle matrix. i.e. cov(x,x) , cov(y,x) , cov(y,y) , cov(z,x) , cov(z,y) , cov(z,z)
  std::array<float, 6>& covMatrix();



  void addToRawHits(edm4hep::ObjectID);
  unsigned int rawHits_size() const;
  edm4hep::ObjectID getRawHits(unsigned int) const;
  std::vector<edm4hep::ObjectID>::const_iterator rawHits_begin() const;
  std::vector<edm4hep::ObjectID>::const_iterator rawHits_end() const;
  podio::RelationRange<edm4hep::ObjectID> getRawHits() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from TrackerHitObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const MutableTrackerHit& other) const { return m_obj == other.m_obj; }
  bool operator==(const TrackerHit& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableTrackerHit& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableTrackerHit& a, MutableTrackerHit& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  TrackerHitObj* m_obj;
};

} // namespace edm4hep


#endif
