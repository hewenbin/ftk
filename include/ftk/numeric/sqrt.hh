#ifndef _FTK_SQRT_HH
#define _FTK_SQRT_HH

#include <cmath>
#include <complex>

namespace ftk {

template <typename T>
static std::complex<T> complex_sqrt(const std::complex<T> z)
{
  return pow(z, T(1)/T(2));
}

template <typename T>
static std::complex<T> complex_cbrt(const std::complex<T> z)
{
  return pow(z, T(1)/T(3));
}

}

#endif
