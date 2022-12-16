#include <iostream>
#include "implement.h"

using namespace std;

int main() {
    static constexpr int fib_0 = fibnacci<0>::value;
    static constexpr int fib_2 = fibnacci<2>::value;
    static constexpr int fib_10 = fibnacci<10>::value;
    static constexpr int fib_20 = fibnacci<20>::value;
    cout<<fib_0<<endl;
    cout<<fib_2<<endl;
    cout<<fib_10<<endl;
    cout<<fib_20<<endl;
}