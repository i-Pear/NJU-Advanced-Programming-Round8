#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int tmp;
    int sum = 0;
    while (n--) {
        cin >> tmp;
        sum += tmp;
    }
    cout << sum << endl;
}