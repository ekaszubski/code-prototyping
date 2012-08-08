#include <cdf_von_mises.h>

double int_indef_von_mises( double const & k, double const & value, int const & precision )
{
    double sum = 0;
    double sum_component = 0;
    int order = 1;

    double const precision_value = pow( 10, precision );

    //std::cout << "int_indef_von_mises( " << k << ", " << value << ")" << std::endl;
    //std::cout << "----" << std::endl;

    do
    {
        sum_component = gsl_sf_bessel_In( order, k ) * ( sin( (double)order * value ) / (double) order );
        //std::cout << order << " : " << sum_component << std::endl;
        sum += sum_component;
        order ++;
    }
    while( fabs( sum_component ) > precision_value );

    std::cout << "sum took " << ( order - 1 ) << " iterations to get within precision " << precision_value << std::endl;

    //std::cout << ">>>" << sum << std::endl;

    return ( 1.0 / ( 2.0 * M_PI ) ) * ( value + ( 2.0 / gsl_sf_bessel_I0( k ) ) * sum ) + 0.5;
}

double cdf_norm_von_mises( double const & k, double const & value )
{
    return int_indef_von_mises( k, value );
}

double cdf_von_mises( double const & mean, double const & k, double const & value )
{
    return cdf_norm_von_mises( k, value - mean );
}

//! Note: unimplemented
double cdf_inv_von_mises( double const & mean, double const & k, double const & value )
{
    return 0;
}
