//
// https://codeforces.com/problemset/problem/4/A
//

#include <iostream>
#include <math.h>

using namespace std;

bool calculate(int w) {
    for (int i = 2; i <= sqrt(w); ++i) {
        if (!(w % i)) {
            return false;
        }
    }

    return true;
}

int main() {
    int w = 0;

    cin >> w;

    if (calculate(w) || (w % 2 != 0)) {
        cout << "NO" << "\n";
        return 0;
    }

    cout << "YES" << "\n";

    return 0;
}