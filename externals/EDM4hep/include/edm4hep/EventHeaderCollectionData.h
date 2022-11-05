// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_EventHeader_CollectionData_H
#define EDM4HEP_EventHeader_CollectionData_H

// datamodel specific includes
#include "edm4hep/EventHeaderData.h"
#include "edm4hep/EventHeaderObj.h"

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>

namespace edm4hep {


using EventHeaderObjPointerContainer = std::deque<EventHeaderObj*>;
using EventHeaderDataContainer = std::vector<EventHeaderData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class EventHeaderCollectionData {
public:
  /**
   * The Objs of this collection
   */
  EventHeaderObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  EventHeaderCollectionData();

  /**
   * Non copy-able, move-only class
   */
  EventHeaderCollectionData(const EventHeaderCollectionData&) = delete;
  EventHeaderCollectionData& operator=(const EventHeaderCollectionData&) = delete;
  EventHeaderCollectionData(EventHeaderCollectionData&& other) = default;
  EventHeaderCollectionData& operator=(EventHeaderCollectionData&& other) = default;

  /**
   * Deconstructor
   */
  ~EventHeaderCollectionData() = default;

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
  std::unique_ptr<EventHeaderDataContainer> m_data{nullptr};
};


} // namespace edm4hep


#endif
