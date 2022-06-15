#ifndef RANDOMH
#define RANDOMH

#include <cstdlib>

inline double random_double() {
    return rand() / (RAND_MAX + 1.0);
}

inline double random_double_in_range(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}
#endif
