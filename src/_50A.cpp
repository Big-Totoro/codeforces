//
// https://codeforces.com/problemset/problem/50/A
//

#include <iostream>

using namespace std;

int main() {
    int m = 0, n = 0;

    cin >> m >> n;

    if ((m * n) % 2 == 0) {
        cout << m * n / 2 << "\n";
    } else {
        cout << ((m * n) - 1) / 2 << "\n";
    }

    return 0;
}