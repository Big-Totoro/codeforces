//
// https://codeforces.com/problemset/problem/231/A
//

#include <iostream>

using namespace std;

int main() {
    int n = 0;

    cin >> n;

    int tasks = 0;
    for (int i = 0; i < n; ++i) {
        int v1 = 0, v2 = 0, v3 = 0;

        cin >> v1;
        cin >> v2;
        cin >> v3;

        if (v1 + v2 + v3 >= 2) {
            ++tasks;
        }
    }

    cout << tasks << "\n";

    return 0;
}