#include <optional>
#include <iostream>

using namespace std;

optional<int> div_int(int dividend, int divisor) {
    if (divisor != 0) {
        return {dividend / divisor};
    }
    return {}; // no return value
}

int main() {
    auto res = div_int(20, 1);
    if (res.has_value()) {
        cout << "Quotient: " << res.value();
    } else {
        cout << "Can't divide.";
    }
}

