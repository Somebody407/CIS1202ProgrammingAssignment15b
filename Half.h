#ifndef HALF_H
#define HALF_H

#include <cmath>
#include <type_traits>
using namespace std;

// Templated function for floating-point types
template <typename T>
typename enable_if<is_floating_point<T>::value, T>::type
half(T value) {
    return value / 2;
}

// Explicit specialization for integer types
template <typename T>
typename enable_if<is_integral<T>::value, T>::type
half(T value) {
    return static_cast<T>(round(static_cast<double>(value) / 2));
}

#endif // HALF_H