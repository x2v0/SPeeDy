// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_RecoParticleVertexAssociation_CollectionData_H
#define EDM4HEP_RecoParticleVertexAssociation_CollectionData_H

// datamodel specific includes
#include "edm4hep/RecoParticleVertexAssociationData.h"
#include "edm4hep/RecoParticleVertexAssociationObj.h"
#include "edm4hep/ReconstructedParticle.h"
#include "edm4hep/Vertex.h"

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>

namespace edm4hep {


using RecoParticleVertexAssociationObjPointerContainer = std::deque<RecoParticleVertexAssociationObj*>;
using RecoParticleVertexAssociationDataContainer = std::vector<RecoParticleVertexAssociationData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class RecoParticleVertexAssociationCollectionData {
public:
  /**
   * The Objs of this collection
   */
  RecoParticleVertexAssociationObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  RecoParticleVertexAssociationCollectionData();

  /**
   * Non copy-able, move-only class
   */
  RecoParticleVertexAssociationCollectionData(const RecoParticleVertexAssociationCollectionData&) = delete;
  RecoParticleVertexAssociationCollectionData& operator=(const RecoParticleVertexAssociationCollectionData&) = delete;
  RecoParticleVertexAssociationCollectionData(RecoParticleVertexAssociationCollectionData&& other) = default;
  RecoParticleVertexAssociationCollectionData& operator=(RecoParticleVertexAssociationCollectionData&& other) = default;

  /**
   * Deconstructor
   */
  ~RecoParticleVertexAssociationCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(int collectionID);

  void makeSubsetCollection();


  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<edm4hep::ReconstructedParticle> m_rel_rec; ///< Relation buffer for read / write
  podio::UVecPtr<edm4hep::Vertex> m_rel_vertex; ///< Relation buffer for read / write

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<RecoParticleVertexAssociationDataContainer> m_data{nullptr};
};


} // namespace edm4hep


#endif
