// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCRecoTrackParticleAssociationCollection_H
#define EDM4HEP_MCRecoTrackParticleAssociationCollection_H

// datamodel specific includes
#include "edm4hep/MCRecoTrackParticleAssociationData.h"
#include "edm4hep/MCRecoTrackParticleAssociation.h"
#include "edm4hep/MutableMCRecoTrackParticleAssociation.h"
#include "edm4hep/MCRecoTrackParticleAssociationObj.h"
#include "edm4hep/MCRecoTrackParticleAssociationCollectionData.h"

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



class MCRecoTrackParticleAssociationCollectionIterator {
public:
  MCRecoTrackParticleAssociationCollectionIterator(size_t index, const MCRecoTrackParticleAssociationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  MCRecoTrackParticleAssociationCollectionIterator(const MCRecoTrackParticleAssociationCollectionIterator&) = delete;
  MCRecoTrackParticleAssociationCollectionIterator& operator=(const MCRecoTrackParticleAssociationCollectionIterator&) = delete;

  bool operator!=(const MCRecoTrackParticleAssociationCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MCRecoTrackParticleAssociation operator*();
  MCRecoTrackParticleAssociation* operator->();
  MCRecoTrackParticleAssociationCollectionIterator& operator++();

private:
  size_t m_index;
  MCRecoTrackParticleAssociation m_object;
  const MCRecoTrackParticleAssociationObjPointerContainer* m_collection;
};


class MCRecoTrackParticleAssociationMutableCollectionIterator {
public:
  MCRecoTrackParticleAssociationMutableCollectionIterator(size_t index, const MCRecoTrackParticleAssociationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  MCRecoTrackParticleAssociationMutableCollectionIterator(const MCRecoTrackParticleAssociationMutableCollectionIterator&) = delete;
  MCRecoTrackParticleAssociationMutableCollectionIterator& operator=(const MCRecoTrackParticleAssociationMutableCollectionIterator&) = delete;

  bool operator!=(const MCRecoTrackParticleAssociationMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableMCRecoTrackParticleAssociation operator*();
  MutableMCRecoTrackParticleAssociation* operator->();
  MCRecoTrackParticleAssociationMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableMCRecoTrackParticleAssociation m_object;
  const MCRecoTrackParticleAssociationObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class MCRecoTrackParticleAssociationCollection : public podio::CollectionBase {
public:
  using const_iterator = MCRecoTrackParticleAssociationCollectionIterator;
  using iterator = MCRecoTrackParticleAssociationMutableCollectionIterator;

  MCRecoTrackParticleAssociationCollection();
  // This is a move-only type
  MCRecoTrackParticleAssociationCollection(const MCRecoTrackParticleAssociationCollection& ) = delete;
  MCRecoTrackParticleAssociationCollection& operator=(const MCRecoTrackParticleAssociationCollection& ) = delete;
  MCRecoTrackParticleAssociationCollection(MCRecoTrackParticleAssociationCollection&&) = default;
  MCRecoTrackParticleAssociationCollection& operator=(MCRecoTrackParticleAssociationCollection&&) = default;

//  MCRecoTrackParticleAssociationCollection(MCRecoTrackParticleAssociationVector* data, int collectionID);
  ~MCRecoTrackParticleAssociationCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  MCRecoTrackParticleAssociationCollection* operator->() { return (MCRecoTrackParticleAssociationCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableMCRecoTrackParticleAssociation create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableMCRecoTrackParticleAssociation create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::MCRecoTrackParticleAssociationCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::MCRecoTrackParticleAssociation"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::MCRecoTrackParticleAssociationData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  MCRecoTrackParticleAssociation operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableMCRecoTrackParticleAssociation operator[](unsigned int index);
  /// Returns the const object of given index
  MCRecoTrackParticleAssociation at(unsigned int index) const;
  /// Returns the object of given index
  MutableMCRecoTrackParticleAssociation at(unsigned int index);


  /// Append object to the collection
  void push_back(MCRecoTrackParticleAssociation object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (MCRecoTrackParticleAssociationObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  const std::array<float, arraysize> weight() const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class MCRecoTrackParticleAssociationCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  MCRecoTrackParticleAssociationCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const MCRecoTrackParticleAssociationCollection& v);

template<typename... Args>
MutableMCRecoTrackParticleAssociation MCRecoTrackParticleAssociationCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new MCRecoTrackParticleAssociationObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableMCRecoTrackParticleAssociation(obj);
}

template<size_t arraysize>
const std::array<float, arraysize> MCRecoTrackParticleAssociationCollection::weight() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.weight;
  }
  return tmp;
}


} // namespace edm4hep


#endif
