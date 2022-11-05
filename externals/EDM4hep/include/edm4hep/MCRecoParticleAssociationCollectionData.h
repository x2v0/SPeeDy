// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCRecoParticleAssociation_CollectionData_H
#define EDM4HEP_MCRecoParticleAssociation_CollectionData_H

// datamodel specific includes
#include "edm4hep/MCRecoParticleAssociationData.h"
#include "edm4hep/MCRecoParticleAssociationObj.h"
#include "edm4hep/MCParticle.h"
#include "edm4hep/ReconstructedParticle.h"

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>

namespace edm4hep {


using MCRecoParticleAssociationObjPointerContainer = std::deque<MCRecoParticleAssociationObj*>;
using MCRecoParticleAssociationDataContainer = std::vector<MCRecoParticleAssociationData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class MCRecoParticleAssociationCollectionData {
public:
  /**
   * The Objs of this collection
   */
  MCRecoParticleAssociationObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  MCRecoParticleAssociationCollectionData();

  /**
   * Non copy-able, move-only class
   */
  MCRecoParticleAssociationCollectionData(const MCRecoParticleAssociationCollectionData&) = delete;
  MCRecoParticleAssociationCollectionData& operator=(const MCRecoParticleAssociationCollectionData&) = delete;
  MCRecoParticleAssociationCollectionData(MCRecoParticleAssociationCollectionData&& other) = default;
  MCRecoParticleAssociationCollectionData& operator=(MCRecoParticleAssociationCollectionData&& other) = default;

  /**
   * Deconstructor
   */
  ~MCRecoParticleAssociationCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(int collectionID);

  void makeSubsetCollection();


  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<edm4hep::ReconstructedParticle> m_rel_rec; ///< Relation buffer for read / write
  podio::UVecPtr<edm4hep::MCParticle> m_rel_sim; ///< Relation buffer for read / write

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<MCRecoParticleAssociationDataContainer> m_data{nullptr};
};


} // namespace edm4hep


#endif
