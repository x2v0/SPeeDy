// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_TrackerHitPlaneCollection_H
#define EDM4HEP_TrackerHitPlaneCollection_H

// datamodel specific includes
#include "edm4hep/TrackerHitPlaneData.h"
#include "edm4hep/TrackerHitPlane.h"
#include "edm4hep/MutableTrackerHitPlane.h"
#include "edm4hep/TrackerHitPlaneObj.h"
#include "edm4hep/TrackerHitPlaneCollectionData.h"

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



class TrackerHitPlaneCollectionIterator {
public:
  TrackerHitPlaneCollectionIterator(size_t index, const TrackerHitPlaneObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  TrackerHitPlaneCollectionIterator(const TrackerHitPlaneCollectionIterator&) = delete;
  TrackerHitPlaneCollectionIterator& operator=(const TrackerHitPlaneCollectionIterator&) = delete;

  bool operator!=(const TrackerHitPlaneCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  TrackerHitPlane operator*();
  TrackerHitPlane* operator->();
  TrackerHitPlaneCollectionIterator& operator++();

private:
  size_t m_index;
  TrackerHitPlane m_object;
  const TrackerHitPlaneObjPointerContainer* m_collection;
};


class TrackerHitPlaneMutableCollectionIterator {
public:
  TrackerHitPlaneMutableCollectionIterator(size_t index, const TrackerHitPlaneObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  TrackerHitPlaneMutableCollectionIterator(const TrackerHitPlaneMutableCollectionIterator&) = delete;
  TrackerHitPlaneMutableCollectionIterator& operator=(const TrackerHitPlaneMutableCollectionIterator&) = delete;

  bool operator!=(const TrackerHitPlaneMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableTrackerHitPlane operator*();
  MutableTrackerHitPlane* operator->();
  TrackerHitPlaneMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableTrackerHitPlane m_object;
  const TrackerHitPlaneObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class TrackerHitPlaneCollection : public podio::CollectionBase {
public:
  using const_iterator = TrackerHitPlaneCollectionIterator;
  using iterator = TrackerHitPlaneMutableCollectionIterator;

  TrackerHitPlaneCollection();
  // This is a move-only type
  TrackerHitPlaneCollection(const TrackerHitPlaneCollection& ) = delete;
  TrackerHitPlaneCollection& operator=(const TrackerHitPlaneCollection& ) = delete;
  TrackerHitPlaneCollection(TrackerHitPlaneCollection&&) = default;
  TrackerHitPlaneCollection& operator=(TrackerHitPlaneCollection&&) = default;

//  TrackerHitPlaneCollection(TrackerHitPlaneVector* data, int collectionID);
  ~TrackerHitPlaneCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  TrackerHitPlaneCollection* operator->() { return (TrackerHitPlaneCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableTrackerHitPlane create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableTrackerHitPlane create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::TrackerHitPlaneCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::TrackerHitPlane"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::TrackerHitPlaneData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  TrackerHitPlane operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableTrackerHitPlane operator[](unsigned int index);
  /// Returns the const object of given index
  TrackerHitPlane at(unsigned int index) const;
  /// Returns the object of given index
  MutableTrackerHitPlane at(unsigned int index);


  /// Append object to the collection
  void push_back(TrackerHitPlane object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (TrackerHitPlaneObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  const std::array<std::uint64_t, arraysize> cellID() const;
  template<size_t arraysize>
  const std::array<std::int32_t, arraysize> type() const;
  template<size_t arraysize>
  const std::array<std::int32_t, arraysize> quality() const;
  template<size_t arraysize>
  const std::array<float, arraysize> time() const;
  template<size_t arraysize>
  const std::array<float, arraysize> eDep() const;
  template<size_t arraysize>
  const std::array<float, arraysize> eDepError() const;
  template<size_t arraysize>
  const std::array<float, arraysize> edx() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector2f, arraysize> u() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector2f, arraysize> v() const;
  template<size_t arraysize>
  const std::array<float, arraysize> du() const;
  template<size_t arraysize>
  const std::array<float, arraysize> dv() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector3d, arraysize> position() const;
  template<size_t arraysize>
  const std::array<std::array<float, 6>, arraysize> covMatrix() const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class TrackerHitPlaneCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  TrackerHitPlaneCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const TrackerHitPlaneCollection& v);

template<typename... Args>
MutableTrackerHitPlane TrackerHitPlaneCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new TrackerHitPlaneObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, TrackerHitPlaneData} constructor
  obj->m_rawHits = new std::vector<edm4hep::ObjectID>();
  m_storage.createRelations(obj);
  return MutableTrackerHitPlane(obj);
}

template<size_t arraysize>
const std::array<std::uint64_t, arraysize> TrackerHitPlaneCollection::cellID() const {
  std::array<std::uint64_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.cellID;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> TrackerHitPlaneCollection::type() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.type;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> TrackerHitPlaneCollection::quality() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.quality;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> TrackerHitPlaneCollection::time() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.time;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> TrackerHitPlaneCollection::eDep() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.eDep;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> TrackerHitPlaneCollection::eDepError() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.eDepError;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> TrackerHitPlaneCollection::edx() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.edx;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector2f, arraysize> TrackerHitPlaneCollection::u() const {
  std::array<edm4hep::Vector2f, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.u;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector2f, arraysize> TrackerHitPlaneCollection::v() const {
  std::array<edm4hep::Vector2f, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.v;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> TrackerHitPlaneCollection::du() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.du;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> TrackerHitPlaneCollection::dv() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.dv;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector3d, arraysize> TrackerHitPlaneCollection::position() const {
  std::array<edm4hep::Vector3d, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.position;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::array<float, 6>, arraysize> TrackerHitPlaneCollection::covMatrix() const {
  std::array<std::array<float, 6>, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.covMatrix;
  }
  return tmp;
}


} // namespace edm4hep


#endif
