//
// https://codeforces.com/problemset/problem/266/B
//

#include <iostream>

using namespace std;

int main() {
    int n = 0, t = 0;
    string s;

    cin >> n >> t;
    cin >> s;

    for (int i = 0; i < t; ++i) {
        for (int j = 1; j < n; ++j) {
            if (s[j - 1] == 'B' && s[j] == 'G') {
                swap(s[j - 1], s[j]);
                ++j;
            }
        }
    }

    cout << s << "\n";

    return 0;
}