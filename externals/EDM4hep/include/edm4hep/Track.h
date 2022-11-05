// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_Track_H
#define EDM4HEP_Track_H

#include "edm4hep/TrackObj.h"

#include "edm4hep/TrackState.h"
#include "edm4hep/TrackerHit.h"
#include "podio/RelationRange.h"
#include <cstdint>
#include <vector>
#include "podio/ObjectID.h"
#include <ostream>



namespace edm4hep {

class MutableTrack;

/** @class Track
 *  Reconstructed track
 *  @author: F.Gaede, DESY
 */
class Track {

  friend class MutableTrack;
  friend class TrackCollection;
  friend class TrackCollectionIterator;

public:
  /// default constructor
  Track();
  Track(std::int32_t type, float chi2, std::int32_t ndf, float dEdx, float dEdxError, float radiusOfInnermostHit);

  /// constructor from existing TrackObj
  Track(TrackObj* obj);

  /// copy constructor
  Track(const Track& other);

  /// copy-assignment operator
  Track& operator=(Track other);

  /// create a mutable deep-copy of the object with identical relations
  MutableTrack clone() const;

  /// destructor
  ~Track();


public:

  /// Access the flagword that defines the type of track.Bits 16-31 are used internally
  const std::int32_t& getType() const;

  /// Access the Chi^2 of the track fit
  const float& getChi2() const;

  /// Access the number of degrees of freedom of the track fit
  const std::int32_t& getNdf() const;

  /// Access the dEdx of the track.
  const float& getDEdx() const;

  /// Access the error of dEdx.
  const float& getDEdxError() const;

  /// Access the radius of the innermost hit that has been used in the track fit
  const float& getRadiusOfInnermostHit() const;



  unsigned int trackerHits_size() const;
  edm4hep::TrackerHit getTrackerHits(unsigned int) const;
  std::vector<edm4hep::TrackerHit>::const_iterator trackerHits_begin() const;
  std::vector<edm4hep::TrackerHit>::const_iterator trackerHits_end() const;
  podio::RelationRange<edm4hep::TrackerHit> getTrackerHits() const;
  unsigned int tracks_size() const;
  edm4hep::Track getTracks(unsigned int) const;
  std::vector<edm4hep::Track>::const_iterator tracks_begin() const;
  std::vector<edm4hep::Track>::const_iterator tracks_end() const;
  podio::RelationRange<edm4hep::Track> getTracks() const;
  unsigned int subDetectorHitNumbers_size() const;
  std::int32_t getSubDetectorHitNumbers(unsigned int) const;
  std::vector<std::int32_t>::const_iterator subDetectorHitNumbers_begin() const;
  std::vector<std::int32_t>::const_iterator subDetectorHitNumbers_end() const;
  podio::RelationRange<std::int32_t> getSubDetectorHitNumbers() const;
  unsigned int trackStates_size() const;
  edm4hep::TrackState getTrackStates(unsigned int) const;
  std::vector<edm4hep::TrackState>::const_iterator trackStates_begin() const;
  std::vector<edm4hep::TrackState>::const_iterator trackStates_end() const;
  podio::RelationRange<edm4hep::TrackState> getTrackStates() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from TrackObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const Track& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableTrack& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const Track& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

  friend void swap(Track& a, Track& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  TrackObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const Track& value);

} // namespace edm4hep


#endif
