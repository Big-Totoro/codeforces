//
// https://codeforces.com/problemset/problem/4/A
//

#include <iostream>

using namespace std;

int main() {
    int w = 0;

    cin >> w;

    cout << (((w % 2 == 0) && (w >= 4)) ? "YES" : "NO");

    return 0;
}