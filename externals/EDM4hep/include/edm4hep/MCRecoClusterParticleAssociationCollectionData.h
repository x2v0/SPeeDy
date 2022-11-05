// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCRecoClusterParticleAssociation_CollectionData_H
#define EDM4HEP_MCRecoClusterParticleAssociation_CollectionData_H

// datamodel specific includes
#include "edm4hep/MCRecoClusterParticleAssociationData.h"
#include "edm4hep/MCRecoClusterParticleAssociationObj.h"
#include "edm4hep/Cluster.h"
#include "edm4hep/MCParticle.h"

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>

namespace edm4hep {


using MCRecoClusterParticleAssociationObjPointerContainer = std::deque<MCRecoClusterParticleAssociationObj*>;
using MCRecoClusterParticleAssociationDataContainer = std::vector<MCRecoClusterParticleAssociationData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class MCRecoClusterParticleAssociationCollectionData {
public:
  /**
   * The Objs of this collection
   */
  MCRecoClusterParticleAssociationObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  MCRecoClusterParticleAssociationCollectionData();

  /**
   * Non copy-able, move-only class
   */
  MCRecoClusterParticleAssociationCollectionData(const MCRecoClusterParticleAssociationCollectionData&) = delete;
  MCRecoClusterParticleAssociationCollectionData& operator=(const MCRecoClusterParticleAssociationCollectionData&) = delete;
  MCRecoClusterParticleAssociationCollectionData(MCRecoClusterParticleAssociationCollectionData&& other) = default;
  MCRecoClusterParticleAssociationCollectionData& operator=(MCRecoClusterParticleAssociationCollectionData&& other) = default;

  /**
   * Deconstructor
   */
  ~MCRecoClusterParticleAssociationCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(int collectionID);

  void makeSubsetCollection();


  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<edm4hep::Cluster> m_rel_rec; ///< Relation buffer for read / write
  podio::UVecPtr<edm4hep::MCParticle> m_rel_sim; ///< Relation buffer for read / write

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<MCRecoClusterParticleAssociationDataContainer> m_data{nullptr};
};


} // namespace edm4hep


#endif
