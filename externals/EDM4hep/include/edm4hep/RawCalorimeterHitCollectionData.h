// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_RawCalorimeterHit_CollectionData_H
#define EDM4HEP_RawCalorimeterHit_CollectionData_H

// datamodel specific includes
#include "edm4hep/RawCalorimeterHitData.h"
#include "edm4hep/RawCalorimeterHitObj.h"

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>

namespace edm4hep {


using RawCalorimeterHitObjPointerContainer = std::deque<RawCalorimeterHitObj*>;
using RawCalorimeterHitDataContainer = std::vector<RawCalorimeterHitData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class RawCalorimeterHitCollectionData {
public:
  /**
   * The Objs of this collection
   */
  RawCalorimeterHitObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  RawCalorimeterHitCollectionData();

  /**
   * Non copy-able, move-only class
   */
  RawCalorimeterHitCollectionData(const RawCalorimeterHitCollectionData&) = delete;
  RawCalorimeterHitCollectionData& operator=(const RawCalorimeterHitCollectionData&) = delete;
  RawCalorimeterHitCollectionData(RawCalorimeterHitCollectionData&& other) = default;
  RawCalorimeterHitCollectionData& operator=(RawCalorimeterHitCollectionData&& other) = default;

  /**
   * Deconstructor
   */
  ~RawCalorimeterHitCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(int collectionID);

  void makeSubsetCollection();


  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<RawCalorimeterHitDataContainer> m_data{nullptr};
};


} // namespace edm4hep


#endif
