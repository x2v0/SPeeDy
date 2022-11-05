// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_Vertex_CollectionData_H
#define EDM4HEP_Vertex_CollectionData_H

// datamodel specific includes
#include "edm4hep/VertexData.h"
#include "edm4hep/VertexObj.h"
#include "edm4hep/ReconstructedParticle.h"

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>

namespace edm4hep {


using VertexObjPointerContainer = std::deque<VertexObj*>;
using VertexDataContainer = std::vector<VertexData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class VertexCollectionData {
public:
  /**
   * The Objs of this collection
   */
  VertexObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  VertexCollectionData();

  /**
   * Non copy-able, move-only class
   */
  VertexCollectionData(const VertexCollectionData&) = delete;
  VertexCollectionData& operator=(const VertexCollectionData&) = delete;
  VertexCollectionData(VertexCollectionData&& other) = default;
  VertexCollectionData& operator=(VertexCollectionData&& other) = default;

  /**
   * Deconstructor
   */
  ~VertexCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(int collectionID);

  void makeSubsetCollection();

  void createRelations(VertexObj* obj);

  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<edm4hep::ReconstructedParticle> m_rel_associatedParticle; ///< Relation buffer for read / write

  // members to handle vector members
  podio::UVecPtr<float> m_vec_parameters; /// combined vector of all objects in collection
  std::vector<podio::UVecPtr<float>> m_vecs_parameters{}; /// pointers to individual member vectors

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<VertexDataContainer> m_data{nullptr};
};


} // namespace edm4hep


#endif
