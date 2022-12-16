#include <cmath>

template<typename T>
class is_float {
public:
    static constexpr bool value = false;
};

template<>
class is_float<float> {
public:
    static constexpr bool value = true;
};

template<typename A>
bool Equal(A a, A b) {
    if constexpr(is_float<A>::value) {
        abs()
        return fabs(a - b) < 1e-3;
    } else {
        return a == b;
    }
}