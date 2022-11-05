// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EDM4HEP_TrackerHitPlaneDATA_H
#define EDM4HEP_TrackerHitPlaneDATA_H

#include "edm4hep/Vector2f.h"
#include "edm4hep/Vector3d.h"
#include <array>
#include <cstdint>

namespace edm4hep {


/** @class TrackerHitPlaneData
 *  Tracker hit plane
 *  @author: Placido Fernandez Declara, CERN
 */
class TrackerHitPlaneData {
public:
  std::uint64_t cellID{}; ///< ID of the sensor that created this hit
  std::int32_t type{}; ///< type of raw data hit, either one of edm4hep::TPCHIT, edm4hep::SIMTRACKERHIT - see collection parameters "TrackerHitTypeNames" and "TrackerHitTypeValues".
  std::int32_t quality{}; ///< quality bit flag of the hit.
  float time{}; ///< time of the hit.
  float eDep{}; ///< energy deposited on the hit [GeV].
  float eDepError{}; ///< error measured on EDep [GeV].
  float edx{}; ///< dE/dx of the hit in [GeV/mm].
  ::edm4hep::Vector2f u{}; ///< measurement direction vector, u lies in the x-y plane
  ::edm4hep::Vector2f v{}; ///< measurement direction vector, v is along z
  float du{}; ///< measurement error along the direction
  float dv{}; ///< measurement error along the direction
  ::edm4hep::Vector3d position{}; ///< hit position in [mm].
  std::array<float, 6> covMatrix{}; ///< covariance of the position (x,y,z), stored as lower triangle matrix. i.e. cov(x,x) , cov(y,x) , cov(y,y) , cov(z,x) , cov(z,y) , cov(z,z)

  unsigned int rawHits_begin{};
  unsigned int rawHits_end{};
};

} // namespace edm4hep


#endif
