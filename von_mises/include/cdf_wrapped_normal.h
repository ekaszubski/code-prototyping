#ifndef VONMISES_CDFWRAPPEDNORMAL_H_
#define VONMISES_CDFWRAPPEDNORMAL_H_

#include <cdf_von_mises.h>

double cdf_wrapped_normal( double const & mean, double const & variance, double const & value );

double cdf_inv_wrapped_normal( double const & mean, double const & variance, double const & value );

#endif // VONMISES_CDFWRAPPEDNORMAL_H_
