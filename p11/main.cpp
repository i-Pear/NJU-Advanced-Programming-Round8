#include "implement.h"
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int dividend, divisor;
        cin >> dividend >> divisor;
        auto [quotient, remainder] = div_int(dividend, divisor);
        cout << dividend << "=" << divisor << "*" << quotient << "+" << remainder << endl;
    }
}