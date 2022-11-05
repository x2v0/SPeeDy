// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_RawCalorimeterHitDATA_H
#define EDM4HEP_RawCalorimeterHitDATA_H

#include <cstdint>

namespace edm4hep {


/** @class RawCalorimeterHitData
 *  Raw calorimeter hit
 *  @author: F.Gaede, DESY
 */
class RawCalorimeterHitData {
public:
  std::uint64_t cellID{}; ///< detector specific (geometrical) cell id.
  std::int32_t amplitude{}; ///< amplitude of the hit in ADC counts.
  std::int32_t timeStamp{}; ///< time stamp for the hit.

};

} // namespace edm4hep


#endif
