#ifndef VONMISES_CDFVONMISES_H_
#define VONMISES_CDFVONMISES_H_

#include <gsl/gsl_sf_bessel.h>
#include <iostream>
#include <math.h>
#include <limits>

double int_indef_von_mises( double const & k, double const & value, int const & precision = int( log10( std::numeric_limits<double>::min() ) * 0.05 ) );

double cdf_norm_von_mises( double const & k, double const & value );

double cdf_von_mises( double const & mean, double const & k, double const & value );

double cdf_inv_von_mises( double const & mean, double const & k, double const & value );

#endif // VONMISES_CDFVONMISES_H_
