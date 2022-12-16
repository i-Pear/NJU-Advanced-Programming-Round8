#include "implement.h"
#include <iostream>

using namespace std;

class A {
public:
    int val;

    A(int val) : val(val) {}

    bool operator==(const A &b) const {
        return val == b.val;
    }
};

int main() {
    cout << Equal(1, 2) << endl; // 0
    cout << Equal(1.0, 1.5) << endl; // 0
    cout << Equal(1.0f, 1.0001f) << endl; //1
    cout << Equal(100L, 100L) << endl; //1
    cout << Equal(100.0l, 100.000001l) << endl; //1
    cout << Equal(A(1), A(2)) << endl;
}