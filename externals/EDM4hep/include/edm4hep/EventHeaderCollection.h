// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_EventHeaderCollection_H
#define EDM4HEP_EventHeaderCollection_H

// datamodel specific includes
#include "edm4hep/EventHeaderData.h"
#include "edm4hep/EventHeader.h"
#include "edm4hep/MutableEventHeader.h"
#include "edm4hep/EventHeaderObj.h"
#include "edm4hep/EventHeaderCollectionData.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>

namespace edm4hep {



class EventHeaderCollectionIterator {
public:
  EventHeaderCollectionIterator(size_t index, const EventHeaderObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  EventHeaderCollectionIterator(const EventHeaderCollectionIterator&) = delete;
  EventHeaderCollectionIterator& operator=(const EventHeaderCollectionIterator&) = delete;

  bool operator!=(const EventHeaderCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  EventHeader operator*();
  EventHeader* operator->();
  EventHeaderCollectionIterator& operator++();

private:
  size_t m_index;
  EventHeader m_object;
  const EventHeaderObjPointerContainer* m_collection;
};


class EventHeaderMutableCollectionIterator {
public:
  EventHeaderMutableCollectionIterator(size_t index, const EventHeaderObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  EventHeaderMutableCollectionIterator(const EventHeaderMutableCollectionIterator&) = delete;
  EventHeaderMutableCollectionIterator& operator=(const EventHeaderMutableCollectionIterator&) = delete;

  bool operator!=(const EventHeaderMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableEventHeader operator*();
  MutableEventHeader* operator->();
  EventHeaderMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableEventHeader m_object;
  const EventHeaderObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class EventHeaderCollection : public podio::CollectionBase {
public:
  using const_iterator = EventHeaderCollectionIterator;
  using iterator = EventHeaderMutableCollectionIterator;

  EventHeaderCollection();
  // This is a move-only type
  EventHeaderCollection(const EventHeaderCollection& ) = delete;
  EventHeaderCollection& operator=(const EventHeaderCollection& ) = delete;
  EventHeaderCollection(EventHeaderCollection&&) = default;
  EventHeaderCollection& operator=(EventHeaderCollection&&) = default;

//  EventHeaderCollection(EventHeaderVector* data, int collectionID);
  ~EventHeaderCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  EventHeaderCollection* operator->() { return (EventHeaderCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableEventHeader create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableEventHeader create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::EventHeaderCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::EventHeader"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::EventHeaderData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  EventHeader operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableEventHeader operator[](unsigned int index);
  /// Returns the const object of given index
  EventHeader at(unsigned int index) const;
  /// Returns the object of given index
  MutableEventHeader at(unsigned int index);


  /// Append object to the collection
  void push_back(EventHeader object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (EventHeaderObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
    );
    m_isValid = true;
  };

  unsigned getID() const override final {
    return m_collectionID;
  }

  bool isValid() const override final {
    return m_isValid;
  }

  // support for the iterator protocol
  iterator begin() {
    return iterator(0, &m_storage.entries);
  }
  const_iterator begin() const {
    return const_iterator(0, &m_storage.entries);
  }
  iterator end() {
    return iterator(m_storage.entries.size(), &m_storage.entries);
  }
  const_iterator end() const {
    return const_iterator(m_storage.entries.size(), &m_storage.entries);
  }

  template<size_t arraysize>
  const std::array<std::int32_t, arraysize> eventNumber() const;
  template<size_t arraysize>
  const std::array<std::int32_t, arraysize> runNumber() const;
  template<size_t arraysize>
  const std::array<std::uint64_t, arraysize> timeStamp() const;
  template<size_t arraysize>
  const std::array<float, arraysize> weight() const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class EventHeaderCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  EventHeaderCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const EventHeaderCollection& v);

template<typename... Args>
MutableEventHeader EventHeaderCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new EventHeaderObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableEventHeader(obj);
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> EventHeaderCollection::eventNumber() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.eventNumber;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> EventHeaderCollection::runNumber() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.runNumber;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::uint64_t, arraysize> EventHeaderCollection::timeStamp() const {
  std::array<std::uint64_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.timeStamp;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> EventHeaderCollection::weight() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.weight;
  }
  return tmp;
}


} // namespace edm4hep


#endif
