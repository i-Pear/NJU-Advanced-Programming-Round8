#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int q;
    cin >> q;
    vector<int> v;
    while (n--) {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    int op, val;
    while (q--) {
        cin >> op;
        if (op == 1) {
            cin >> val;
            v.push_back(val);
        } else {
            // show
            sort(v.begin(), v.end());
//            int pos = int (ceil(1.0 * v.size() / 2) - 1);
            int pos = int((v.size() + 1)      / 2  - 1);
            cout << v[pos] << endl;
        }
    }

}