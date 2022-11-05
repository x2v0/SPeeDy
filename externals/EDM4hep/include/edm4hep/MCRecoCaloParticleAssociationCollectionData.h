// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCRecoCaloParticleAssociation_CollectionData_H
#define EDM4HEP_MCRecoCaloParticleAssociation_CollectionData_H

// datamodel specific includes
#include "edm4hep/MCRecoCaloParticleAssociationData.h"
#include "edm4hep/MCRecoCaloParticleAssociationObj.h"
#include "edm4hep/CalorimeterHit.h"
#include "edm4hep/MCParticle.h"

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>

namespace edm4hep {


using MCRecoCaloParticleAssociationObjPointerContainer = std::deque<MCRecoCaloParticleAssociationObj*>;
using MCRecoCaloParticleAssociationDataContainer = std::vector<MCRecoCaloParticleAssociationData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class MCRecoCaloParticleAssociationCollectionData {
public:
  /**
   * The Objs of this collection
   */
  MCRecoCaloParticleAssociationObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  MCRecoCaloParticleAssociationCollectionData();

  /**
   * Non copy-able, move-only class
   */
  MCRecoCaloParticleAssociationCollectionData(const MCRecoCaloParticleAssociationCollectionData&) = delete;
  MCRecoCaloParticleAssociationCollectionData& operator=(const MCRecoCaloParticleAssociationCollectionData&) = delete;
  MCRecoCaloParticleAssociationCollectionData(MCRecoCaloParticleAssociationCollectionData&& other) = default;
  MCRecoCaloParticleAssociationCollectionData& operator=(MCRecoCaloParticleAssociationCollectionData&& other) = default;

  /**
   * Deconstructor
   */
  ~MCRecoCaloParticleAssociationCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(int collectionID);

  void makeSubsetCollection();


  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<edm4hep::CalorimeterHit> m_rel_rec; ///< Relation buffer for read / write
  podio::UVecPtr<edm4hep::MCParticle> m_rel_sim; ///< Relation buffer for read / write

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<MCRecoCaloParticleAssociationDataContainer> m_data{nullptr};
};


} // namespace edm4hep


#endif
