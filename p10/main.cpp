#include <iostream>
#include <map>

using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    map<int, int> m1, m2;
    while (a--) {
        int q, w;
        cin >> q >> w;
        m1[q] = w;
    }
    while (b--) {
        int q, w;
        cin >> q >> w;
        m2[q] = w;
    }
    long long res = 0;
    for (auto &i: m1) {
        res += i.second * m2[i.first];
    }
    cout << res << endl;
}