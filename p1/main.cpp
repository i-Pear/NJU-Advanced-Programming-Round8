#include "implement.h"
#include <iostream>

using namespace std;

class A {
public:
    int val;

    explicit A(int val) : val(val) {

    }

    bool operator<(const A &other) const {
        return val < other.val;
    }
};

int main() {
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        A a1(a), a2(b);
        auto res = Max(a1, a2);
        cout << res.val << endl;
    }
}