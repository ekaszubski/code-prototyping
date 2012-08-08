#include <gsl/gsl_sf_bessel.h>
#include <iostream>
#include <math.h>
#include <limits>

double int_indef_von_mises( double const & k, double const & value, double const & precision = 0.8 * std::numeric_limits<double>::min() );

double cdf_norm_von_mises( double const & k, double const & value );

double cdf_von_mises( double const & mean, double const & k, double const & value );
