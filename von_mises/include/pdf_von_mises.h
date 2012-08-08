#ifndef VONMISES_PDFVONMISES_H_
#define VONMISES_PDFVONMISES_H_

#include <gsl/gsl_sf_bessel.h>
#include <iostream>
#include <math.h>
#include <limits>

double pdf_von_mises( double const & mean, double const & k, double const & value );

#endif // VONMISES_PDFVONMISES_H_
