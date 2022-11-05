// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_EventHeaderDATA_H
#define EDM4HEP_EventHeaderDATA_H

#include <cstdint>

namespace edm4hep {


/** @class EventHeaderData
 *  Event Header. Additional parameters are assumed to go into the metadata tree.
 *  @author: F.Gaede
 */
class EventHeaderData {
public:
  std::int32_t eventNumber{}; ///< event number
  std::int32_t runNumber{}; ///< run number
  std::uint64_t timeStamp{}; ///< time stamp
  float weight{}; ///< event weight

};

} // namespace edm4hep


#endif
