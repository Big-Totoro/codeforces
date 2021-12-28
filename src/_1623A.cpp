//
// https://codeforces.com/contest/1623/problem/A
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);

    int t = 0, n = 0, m = 0, rb = 0, cb = 0, rd = 0, cd = 0;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> n >> m >> rb >> cb >> rd >> cd;
        int s = 0, r = rb, c = cb, dr = 1, dc = 1;
        while (true) {
            if (r == rd) {
                break;
            }
            if (c == cd) {
                break;
            }

            r += dr;
            c += dc;

            if (r + dr > n) {
                dr = -dr;
            }
            if (c + dc > m) {
                dc = -dc;
            }

            ++s;
        }

        cout << s << "\n";
    }

    return 0;
}