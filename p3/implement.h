#include <cmath>

template<typename T>
bool Equal(T a, T b) {
    return a == b;
}

template<>
bool Equal(float a, float b) {
    return std::abs(a - b) < 1e-3;
}