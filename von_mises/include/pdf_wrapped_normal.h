#ifndef VONMISES_PDFWRAPPEDNORMAL_H_
#define VONMISES_PDFWRAPPEDNORMAL_H_

#include <pdf_von_mises.h>

// #############################################################################################################################################
//! The probability density function of the wrapped normal distribution
/*! @param mean the location of the center of the distribution
 *  @param variance the measure of concentration
 *  @param value the value at which to evaluate the CDF
 */
double pdf_wrapped_normal( double const & mean, double const & variance, double const & value );

#endif // VONMISES_PDFWRAPPEDNORMAL_H_
