#include "myfunc.h"
#include <random>

float generateRandomNumber( )
{
    std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_real_distribution<float> dice( 0, 1 );
    return dice(mt);
}