// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_ReconstructedParticleCollection_H
#define EDM4HEP_ReconstructedParticleCollection_H

// datamodel specific includes
#include "edm4hep/ReconstructedParticleData.h"
#include "edm4hep/ReconstructedParticle.h"
#include "edm4hep/MutableReconstructedParticle.h"
#include "edm4hep/ReconstructedParticleObj.h"
#include "edm4hep/ReconstructedParticleCollectionData.h"

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



class ReconstructedParticleCollectionIterator {
public:
  ReconstructedParticleCollectionIterator(size_t index, const ReconstructedParticleObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  ReconstructedParticleCollectionIterator(const ReconstructedParticleCollectionIterator&) = delete;
  ReconstructedParticleCollectionIterator& operator=(const ReconstructedParticleCollectionIterator&) = delete;

  bool operator!=(const ReconstructedParticleCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  ReconstructedParticle operator*();
  ReconstructedParticle* operator->();
  ReconstructedParticleCollectionIterator& operator++();

private:
  size_t m_index;
  ReconstructedParticle m_object;
  const ReconstructedParticleObjPointerContainer* m_collection;
};


class ReconstructedParticleMutableCollectionIterator {
public:
  ReconstructedParticleMutableCollectionIterator(size_t index, const ReconstructedParticleObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  ReconstructedParticleMutableCollectionIterator(const ReconstructedParticleMutableCollectionIterator&) = delete;
  ReconstructedParticleMutableCollectionIterator& operator=(const ReconstructedParticleMutableCollectionIterator&) = delete;

  bool operator!=(const ReconstructedParticleMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableReconstructedParticle operator*();
  MutableReconstructedParticle* operator->();
  ReconstructedParticleMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableReconstructedParticle m_object;
  const ReconstructedParticleObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ReconstructedParticleCollection : public podio::CollectionBase {
public:
  using const_iterator = ReconstructedParticleCollectionIterator;
  using iterator = ReconstructedParticleMutableCollectionIterator;

  ReconstructedParticleCollection();
  // This is a move-only type
  ReconstructedParticleCollection(const ReconstructedParticleCollection& ) = delete;
  ReconstructedParticleCollection& operator=(const ReconstructedParticleCollection& ) = delete;
  ReconstructedParticleCollection(ReconstructedParticleCollection&&) = default;
  ReconstructedParticleCollection& operator=(ReconstructedParticleCollection&&) = default;

//  ReconstructedParticleCollection(ReconstructedParticleVector* data, int collectionID);
  ~ReconstructedParticleCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  ReconstructedParticleCollection* operator->() { return (ReconstructedParticleCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableReconstructedParticle create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableReconstructedParticle create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::ReconstructedParticleCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::ReconstructedParticle"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::ReconstructedParticleData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  ReconstructedParticle operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableReconstructedParticle operator[](unsigned int index);
  /// Returns the const object of given index
  ReconstructedParticle at(unsigned int index) const;
  /// Returns the object of given index
  MutableReconstructedParticle at(unsigned int index);


  /// Append object to the collection
  void push_back(ReconstructedParticle object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ReconstructedParticleObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  const std::array<float, arraysize> energy() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector3f, arraysize> momentum() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector3f, arraysize> referencePoint() const;
  template<size_t arraysize>
  const std::array<float, arraysize> charge() const;
  template<size_t arraysize>
  const std::array<float, arraysize> mass() const;
  template<size_t arraysize>
  const std::array<float, arraysize> goodnessOfPID() const;
  template<size_t arraysize>
  const std::array<std::array<float, 10>, arraysize> covMatrix() const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ReconstructedParticleCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  ReconstructedParticleCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ReconstructedParticleCollection& v);

template<typename... Args>
MutableReconstructedParticle ReconstructedParticleCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ReconstructedParticleObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ReconstructedParticleData} constructor
  obj->m_clusters = new std::vector<edm4hep::Cluster>();
  obj->m_tracks = new std::vector<edm4hep::Track>();
  obj->m_particles = new std::vector<edm4hep::ReconstructedParticle>();
  obj->m_particleIDs = new std::vector<edm4hep::ParticleID>();
  m_storage.createRelations(obj);
  return MutableReconstructedParticle(obj);
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> ReconstructedParticleCollection::type() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.type;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> ReconstructedParticleCollection::energy() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.energy;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector3f, arraysize> ReconstructedParticleCollection::momentum() const {
  std::array<edm4hep::Vector3f, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.momentum;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector3f, arraysize> ReconstructedParticleCollection::referencePoint() const {
  std::array<edm4hep::Vector3f, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.referencePoint;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> ReconstructedParticleCollection::charge() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.charge;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> ReconstructedParticleCollection::mass() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.mass;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> ReconstructedParticleCollection::goodnessOfPID() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.goodnessOfPID;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::array<float, 10>, arraysize> ReconstructedParticleCollection::covMatrix() const {
  std::array<std::array<float, 10>, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.covMatrix;
  }
  return tmp;
}


} // namespace edm4hep


#endif
