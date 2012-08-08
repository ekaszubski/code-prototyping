#include <pdf_von_mises.h>
#include <cdf_von_mises.h>
#include <pdf_wrapped_normal.h>
#include <cdf_wrapped_normal.h>

int main()
{
    std::cout << "cdf_von_mises" << std::endl;
    std::cout << "----------" << std::endl;
    for( size_t i = 0; i < 9; ++i )
    {
        double const x = -M_PI + i * 2.0 * M_PI / 8.0;
        std::cout << x << " : " << cdf_von_mises( 0, 2, x ) << std::endl;
    }
    std::cout << std::endl;

    std::cout << "pdf_von_mises" << std::endl;
    std::cout << "----------" << std::endl;
    for( size_t i = 0; i < 9; ++i )
    {
        double const x = -M_PI + i * 2.0 * M_PI / 8.0;
        std::cout << x << " : " << pdf_von_mises( 0, 2, x ) << std::endl;
    }
    std::cout << std::endl;

    std::cout << "cdf_wrapped_normal" << std::endl;
    std::cout << "----------" << std::endl;
    for( size_t i = 0; i < 9; ++i )
    {
        double const x = -M_PI + i * 2.0 * M_PI / 8.0;
        std::cout << x << " : " << cdf_wrapped_normal( 0, 1, x ) << std::endl;
    }
    std::cout << std::endl;

    std::cout << "pdf_wrapped_normal" << std::endl;
    std::cout << "----------" << std::endl;
    for( size_t i = 0; i < 9; ++i )
    {
        double const x = -M_PI + i * 2.0 * M_PI / 8.0;
        std::cout << x << " : " << pdf_wrapped_normal( 0, 1, x ) << std::endl;
    }
    std::cout << std::endl;
}
