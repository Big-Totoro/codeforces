//
// https://codeforces.com/problemset/problem/263/A
//

#include <iostream>

using namespace std;

int main() {
    const int ROWS = 5, COLS = 5;
    const int R = 2, C = 2;

    int oneR = 0, oneC = 0, value = 0;

    for (int r = 0; r < ROWS; ++r) {
        for (int c = 0; c < COLS; ++c) {
            cin >> value;

            if (value == 1) {
                oneR = r;
                oneC = c;
            }
        }
    }

    int r = abs(R - oneR);
    int c = abs(C - oneC);

    cout << r + c << "\n";

    return 0;
}