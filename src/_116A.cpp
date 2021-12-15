//
// https://codeforces.com/problemset/problem/116/A
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0;

    cin >> n;

    int maxValue = 0;
    int result = 0;
    for (int i = 0; i < n; ++i) {
        int a = 0, b = 0;

        cin >> a >> b;
        result -= a;
        result += b;

        maxValue = max(result, maxValue);
    }

    cout << maxValue << "\n";

    return 0;
}