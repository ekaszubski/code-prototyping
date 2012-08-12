#include <probability_distribution.h>
#include <iostream>

int main()
{
    ProbabilityDistribution<pd::Normal> pd1( 0, 1 );
    ProbabilityDistribution<pd::Normal> pd2( 1, 1 );

    std::cout << pd1 + pd2 << std::endl;
    std::cout << pd1 - pd2 << std::endl;
    std::cout << pd1 * pd2 << std::endl;
    std::cout << pd1 / pd2 << std::endl;
}
