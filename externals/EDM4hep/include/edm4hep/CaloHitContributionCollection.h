// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_CaloHitContributionCollection_H
#define EDM4HEP_CaloHitContributionCollection_H

// datamodel specific includes
#include "edm4hep/CaloHitContributionData.h"
#include "edm4hep/CaloHitContribution.h"
#include "edm4hep/MutableCaloHitContribution.h"
#include "edm4hep/CaloHitContributionObj.h"
#include "edm4hep/CaloHitContributionCollectionData.h"

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



class CaloHitContributionCollectionIterator {
public:
  CaloHitContributionCollectionIterator(size_t index, const CaloHitContributionObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  CaloHitContributionCollectionIterator(const CaloHitContributionCollectionIterator&) = delete;
  CaloHitContributionCollectionIterator& operator=(const CaloHitContributionCollectionIterator&) = delete;

  bool operator!=(const CaloHitContributionCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  CaloHitContribution operator*();
  CaloHitContribution* operator->();
  CaloHitContributionCollectionIterator& operator++();

private:
  size_t m_index;
  CaloHitContribution m_object;
  const CaloHitContributionObjPointerContainer* m_collection;
};


class CaloHitContributionMutableCollectionIterator {
public:
  CaloHitContributionMutableCollectionIterator(size_t index, const CaloHitContributionObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  CaloHitContributionMutableCollectionIterator(const CaloHitContributionMutableCollectionIterator&) = delete;
  CaloHitContributionMutableCollectionIterator& operator=(const CaloHitContributionMutableCollectionIterator&) = delete;

  bool operator!=(const CaloHitContributionMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  MutableCaloHitContribution operator*();
  MutableCaloHitContribution* operator->();
  CaloHitContributionMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableCaloHitContribution m_object;
  const CaloHitContributionObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class CaloHitContributionCollection : public podio::CollectionBase {
public:
  using const_iterator = CaloHitContributionCollectionIterator;
  using iterator = CaloHitContributionMutableCollectionIterator;

  CaloHitContributionCollection();
  // This is a move-only type
  CaloHitContributionCollection(const CaloHitContributionCollection& ) = delete;
  CaloHitContributionCollection& operator=(const CaloHitContributionCollection& ) = delete;
  CaloHitContributionCollection(CaloHitContributionCollection&&) = default;
  CaloHitContributionCollection& operator=(CaloHitContributionCollection&&) = default;

//  CaloHitContributionCollection(CaloHitContributionVector* data, int collectionID);
  ~CaloHitContributionCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  CaloHitContributionCollection* operator->() { return (CaloHitContributionCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableCaloHitContribution create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableCaloHitContribution create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name
  std::string getTypeName() const override { return std::string("edm4hep::CaloHitContributionCollection"); }
  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("edm4hep::CaloHitContribution"); }
  /// fully qualified type name of stored POD elements - with namespace
  std::string getDataTypeName() const override { return std::string("edm4hep::CaloHitContributionData"); }

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  CaloHitContribution operator[](unsigned int index) const;
  /// Returns the object of a given index
  MutableCaloHitContribution operator[](unsigned int index);
  /// Returns the const object of given index
  CaloHitContribution at(unsigned int index) const;
  /// Returns the object of given index
  MutableCaloHitContribution at(unsigned int index);


  /// Append object to the collection
  void push_back(CaloHitContribution object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  /// Get the collection buffers for this collection
  podio::CollectionBuffers getBuffers() final;

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (CaloHitContributionObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
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
  const std::array<float, arraysize> energy() const;
  template<size_t arraysize>
  const std::array<float, arraysize> time() const;
  template<size_t arraysize>
  const std::array<edm4hep::Vector3f, arraysize> stepPosition() const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class CaloHitContributionCollectionData;

  bool m_isValid{false};
  bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  int m_collectionID{0};
  CaloHitContributionCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const CaloHitContributionCollection& v);

template<typename... Args>
MutableCaloHitContribution CaloHitContributionCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new CaloHitContributionObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableCaloHitContribution(obj);
}

template<size_t arraysize>
const std::array<std::int32_t, arraysize> CaloHitContributionCollection::PDG() const {
  std::array<std::int32_t, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.PDG;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> CaloHitContributionCollection::energy() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.energy;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<float, arraysize> CaloHitContributionCollection::time() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.time;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<edm4hep::Vector3f, arraysize> CaloHitContributionCollection::stepPosition() const {
  std::array<edm4hep::Vector3f, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_storage.entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_storage.entries[i]->data.stepPosition;
  }
  return tmp;
}


} // namespace edm4hep


#endif
