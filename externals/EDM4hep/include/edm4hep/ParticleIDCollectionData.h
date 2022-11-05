// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_ParticleID_CollectionData_H
#define EDM4HEP_ParticleID_CollectionData_H

// datamodel specific includes
#include "edm4hep/ParticleIDData.h"
#include "edm4hep/ParticleIDObj.h"

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>

namespace edm4hep {


using ParticleIDObjPointerContainer = std::deque<ParticleIDObj*>;
using ParticleIDDataContainer = std::vector<ParticleIDData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ParticleIDCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ParticleIDObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ParticleIDCollectionData();

  /**
   * Non copy-able, move-only class
   */
  ParticleIDCollectionData(const ParticleIDCollectionData&) = delete;
  ParticleIDCollectionData& operator=(const ParticleIDCollectionData&) = delete;
  ParticleIDCollectionData(ParticleIDCollectionData&& other) = default;
  ParticleIDCollectionData& operator=(ParticleIDCollectionData&& other) = default;

  /**
   * Deconstructor
   */
  ~ParticleIDCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(int collectionID);

  void makeSubsetCollection();

  void createRelations(ParticleIDObj* obj);

  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations

  // members to handle vector members
  podio::UVecPtr<float> m_vec_parameters; /// combined vector of all objects in collection
  std::vector<podio::UVecPtr<float>> m_vecs_parameters{}; /// pointers to individual member vectors

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ParticleIDDataContainer> m_data{nullptr};
};


} // namespace edm4hep


#endif
