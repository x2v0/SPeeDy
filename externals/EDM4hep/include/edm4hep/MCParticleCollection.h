// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_MCParticleCollection_H
#define EDM4HEP_MCParticleCollection_H

// datamodel specific includes
#include "edm4hep/MCParticleData.h"
#include "edm4hep/MCParticle.h"
#include "edm4hep/MutableMCParticle.h"
#include "edm4hep/MCParticleObj.h"
#include "edm4hep/MCParticleCollectionData.h"

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



class MCParticleCollectionIterator {
public:
  MCParticleCollectionIterator(size_t index, const MCParticleObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  MCParticleCollectionIterator(const MCParticleCollectionIterator&) = delete;
  MCParticleCollectionIterator& operator=(const MCParticleCollectionIterator&) = delete;

  bool operator!=(const MCParticleCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MCParticle operator*();
  MCParticle* operator->();
  MCParticleCollectionIterator& operator++();

private:
  size_t m_index;
  MCParticle m_object;
  const MCParticleObjPointerContainer* m_collection;
};


class MCParticleMutableCollectionIterator {
public:
  MCParticleMutableCollectionIterator(size_t index, const MCParticleObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  MCParticleMutableCollectionIterator(const MCParticleMutableCollectionIterator&) = delete;
  MCParticleMutableCollectionIterator& operator=(const MCParticleMutableCollectionIterator&) = delete;

  bool operator!=(const MCParticleMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableMCParticle operator*();
  MutableMCParticle* operator->();
  MCParticleMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableMCParticle m_object;
  const MCParticleObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class MCParticleCollection : public podio::CollectionBase {
public:
  using const_iterator = MCParticleCollectionIterator;
  using iterator = MCParticleMutableCollectionIterator;

  MCParticleCollection();
  // This is a move-only type
  MCParticleCollection(const MCParticleCollection& ) = delete;
  MCParticleCollection& operator=(const MCParticleCollection& ) = delete;
  MCParticleCollection(MCParticleCollection&&) = default;
  MCParticleCollection& operator=(MCParticleCollection&&) = default;

//  MCParticleCollection(MCParticleVector* data, int collectionID);
  ~MCParticleCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  MCParticleCollection* operator->() { return (MCParticleCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableMCParticle create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableMCParticle create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::MCParticleCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::MCParticle"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::MCParticleData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  MCParticle operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableMCParticle operator[](unsigned int index);
  /// Returns the const object of given index
  MCParticle at(unsigned int index) const;
  /// Returns the object of given index
  MutableMCParticle at(unsigned int index);


  /// Append object to the collection
  void push_back(MCParticle object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (MCParticleObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  const std::array<std::int32_t, arraysize> PDG() const;
  template<size_t arraysize>
  const std::array<std::int32_t, arraysize> generatorStatus() const;
  template<size_t arraysize>
  const std::array<std::int32_t, arraysize> simulatorStatus() const;
  template<size_t arraysize>
  const std::array<float, arraysize> charge() const;
  template<size_t arraysize>
  const std::array<float, arraysize> time() const;
  template<size_t arraysize>
  const std::array<double, arraysize> mass() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector3d, arraysize> vertex() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector3d, arraysize> endpoint() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector3f, arraysize> momentum() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector3f, arraysize> momentumAtEndpoint() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector3f, arraysize> spin() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector2i, arraysize> colorFlow() const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class MCParticleCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  MCParticleCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const MCParticleCollection& v);

template<typename... Args>
MutableMCParticle MCParticleCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new MCParticleObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, MCParticleData} constructor
  obj->m_parents = new std::vector<edm4hep::MCParticle>();
  obj->m_daughters = new std::vector<edm4hep::MCParticle>();
  m_storage.createRelations(obj);
  return MutableMCParticle(obj);
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> MCParticleCollection::PDG() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.PDG;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> MCParticleCollection::generatorStatus() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.generatorStatus;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> MCParticleCollection::simulatorStatus() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.simulatorStatus;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> MCParticleCollection::charge() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.charge;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> MCParticleCollection::time() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.time;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<double, arraysize> MCParticleCollection::mass() const {
  std::array<double, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.mass;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector3d, arraysize> MCParticleCollection::vertex() const {
  std::array<edm4hep::Vector3d, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.vertex;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector3d, arraysize> MCParticleCollection::endpoint() const {
  std::array<edm4hep::Vector3d, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.endpoint;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector3f, arraysize> MCParticleCollection::momentum() const {
  std::array<edm4hep::Vector3f, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.momentum;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector3f, arraysize> MCParticleCollection::momentumAtEndpoint() const {
  std::array<edm4hep::Vector3f, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.momentumAtEndpoint;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector3f, arraysize> MCParticleCollection::spin() const {
  std::array<edm4hep::Vector3f, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.spin;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector2i, arraysize> MCParticleCollection::colorFlow() const {
  std::array<edm4hep::Vector2i, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.colorFlow;
  }
  return tmp;
}


} // namespace edm4hep


#endif
