// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_SimCalorimeterHit_CollectionData_H
#define EDM4HEP_SimCalorimeterHit_CollectionData_H

// datamodel specific includes
#include "edm4hep/SimCalorimeterHitData.h"
#include "edm4hep/SimCalorimeterHitObj.h"
#include "edm4hep/CaloHitContribution.h"

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>

namespace edm4hep {


using SimCalorimeterHitObjPointerContainer = std::deque<SimCalorimeterHitObj*>;
using SimCalorimeterHitDataContainer = std::vector<SimCalorimeterHitData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class SimCalorimeterHitCollectionData {
public:
  /**
   * The Objs of this collection
   */
  SimCalorimeterHitObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  SimCalorimeterHitCollectionData();

  /**
   * Non copy-able, move-only class
   */
  SimCalorimeterHitCollectionData(const SimCalorimeterHitCollectionData&) = delete;
  SimCalorimeterHitCollectionData& operator=(const SimCalorimeterHitCollectionData&) = delete;
  SimCalorimeterHitCollectionData(SimCalorimeterHitCollectionData&& other) = default;
  SimCalorimeterHitCollectionData& operator=(SimCalorimeterHitCollectionData&& other) = default;

  /**
   * Deconstructor
   */
  ~SimCalorimeterHitCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(int collectionID);

  void makeSubsetCollection();

  void createRelations(SimCalorimeterHitObj* obj);

  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<edm4hep::CaloHitContribution> m_rel_contributions;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<edm4hep::CaloHitContribution>> m_rel_contributions_tmp{}; ///< Relation buffer for internal book-keeping

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<SimCalorimeterHitDataContainer> m_data{nullptr};
};


} // namespace edm4hep


#endif
