// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_ParticleIDCollection_H
#define EDM4HEP_ParticleIDCollection_H

// datamodel specific includes
#include "edm4hep/ParticleIDData.h"
#include "edm4hep/ParticleID.h"
#include "edm4hep/MutableParticleID.h"
#include "edm4hep/ParticleIDObj.h"
#include "edm4hep/ParticleIDCollectionData.h"

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



class ParticleIDCollectionIterator {
public:
  ParticleIDCollectionIterator(size_t index, const ParticleIDObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  ParticleIDCollectionIterator(const ParticleIDCollectionIterator&) = delete;
  ParticleIDCollectionIterator& operator=(const ParticleIDCollectionIterator&) = delete;

  bool operator!=(const ParticleIDCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  ParticleID operator*();
  ParticleID* operator->();
  ParticleIDCollectionIterator& operator++();

private:
  size_t m_index;
  ParticleID m_object;
  const ParticleIDObjPointerContainer* m_collection;
};


class ParticleIDMutableCollectionIterator {
public:
  ParticleIDMutableCollectionIterator(size_t index, const ParticleIDObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  ParticleIDMutableCollectionIterator(const ParticleIDMutableCollectionIterator&) = delete;
  ParticleIDMutableCollectionIterator& operator=(const ParticleIDMutableCollectionIterator&) = delete;

  bool operator!=(const ParticleIDMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableParticleID operator*();
  MutableParticleID* operator->();
  ParticleIDMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableParticleID m_object;
  const ParticleIDObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ParticleIDCollection : public podio::CollectionBase {
public:
  using const_iterator = ParticleIDCollectionIterator;
  using iterator = ParticleIDMutableCollectionIterator;

  ParticleIDCollection();
  // This is a move-only type
  ParticleIDCollection(const ParticleIDCollection& ) = delete;
  ParticleIDCollection& operator=(const ParticleIDCollection& ) = delete;
  ParticleIDCollection(ParticleIDCollection&&) = default;
  ParticleIDCollection& operator=(ParticleIDCollection&&) = default;

//  ParticleIDCollection(ParticleIDVector* data, int collectionID);
  ~ParticleIDCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  ParticleIDCollection* operator->() { return (ParticleIDCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableParticleID create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableParticleID create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::ParticleIDCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::ParticleID"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::ParticleIDData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  ParticleID operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableParticleID operator[](unsigned int index);
  /// Returns the const object of given index
  ParticleID at(unsigned int index) const;
  /// Returns the object of given index
  MutableParticleID at(unsigned int index);


  /// Append object to the collection
  void push_back(ParticleID object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ParticleIDObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  const std::array<std::int32_t, arraysize> type() const;
  template<size_t arraysize>
  const std::array<std::int32_t, arraysize> PDG() const;
  template<size_t arraysize>
  const std::array<std::int32_t, arraysize> algorithmType() const;
  template<size_t arraysize>
  const std::array<float, arraysize> likelihood() const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ParticleIDCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  ParticleIDCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ParticleIDCollection& v);

template<typename... Args>
MutableParticleID ParticleIDCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ParticleIDObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ParticleIDData} constructor
  obj->m_parameters = new std::vector<float>();
  m_storage.createRelations(obj);
  return MutableParticleID(obj);
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> ParticleIDCollection::type() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.type;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> ParticleIDCollection::PDG() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.PDG;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> ParticleIDCollection::algorithmType() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.algorithmType;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> ParticleIDCollection::likelihood() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.likelihood;
  }
  return tmp;
}


} // namespace edm4hep


#endif
