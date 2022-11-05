// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_TrackerHitPlane_CollectionData_H
#define EDM4HEP_TrackerHitPlane_CollectionData_H

// datamodel specific includes
#include "edm4hep/TrackerHitPlaneData.h"
#include "edm4hep/TrackerHitPlaneObj.h"

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>

namespace edm4hep {


using TrackerHitPlaneObjPointerContainer = std::deque<TrackerHitPlaneObj*>;
using TrackerHitPlaneDataContainer = std::vector<TrackerHitPlaneData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class TrackerHitPlaneCollectionData {
public:
  /**
   * The Objs of this collection
   */
  TrackerHitPlaneObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  TrackerHitPlaneCollectionData();

  /**
   * Non copy-able, move-only class
   */
  TrackerHitPlaneCollectionData(const TrackerHitPlaneCollectionData&) = delete;
  TrackerHitPlaneCollectionData& operator=(const TrackerHitPlaneCollectionData&) = delete;
  TrackerHitPlaneCollectionData(TrackerHitPlaneCollectionData&& other) = default;
  TrackerHitPlaneCollectionData& operator=(TrackerHitPlaneCollectionData&& other) = default;

  /**
   * Deconstructor
   */
  ~TrackerHitPlaneCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(int collectionID);

  void makeSubsetCollection();

  void createRelations(TrackerHitPlaneObj* obj);

  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations

  // members to handle vector members
  podio::UVecPtr<edm4hep::ObjectID> m_vec_rawHits; /// combined vector of all objects in collection
  std::vector<podio::UVecPtr<edm4hep::ObjectID>> m_vecs_rawHits{}; /// pointers to individual member vectors

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<TrackerHitPlaneDataContainer> m_data{nullptr};
};


} // namespace edm4hep


#endif
