#include <string>
#include <tuple>

std::tuple<int, int> div_int(int dividend, int divisor) {
    int quotient = dividend / divisor;
    int remainder = dividend - quotient * divisor;
    return {quotient, remainder};
}