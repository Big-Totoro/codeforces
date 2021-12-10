//
// https://codeforces.com/problemset/problem/546/A
//

#include <iostream>

using namespace std;

int main() {
    int k = 0, w = 0, n = 0;
    int result = 0;

    cin >> k >> n >> w;

    for (int i = 1; i <= w; ++i) {
        result += k * i;
    }

    int r = n - result;
    if (r < 0) {
        cout << abs(r) << "\n";
    } else {
        cout << 0 << "\n";
    }

    return 0;
}