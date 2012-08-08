#include <pdf_von_mises.h>
#include <cdf_von_mises.h>

int main()
{
    for( size_t i = 0; i < 9; ++i )
    {
        double const x = -M_PI + i * 2.0 * M_PI / 8.0;
        std::cout << x << " : " << cdf_norm_von_mises( 0.5, x ) << std::endl;
        std::cout << x << " : " << cdf_norm_von_mises( 0.5, x - M_PI/2.0 ) << std::endl;
    }
}
