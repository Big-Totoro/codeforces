//
// https://codeforces.com/problemset/problem/791/A
//

#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 0, counter = 0;

    cin >> a >> b;

    while (a <= b) {
        a *= 3;
        b *= 2;

        ++counter;
    }

    cout << counter << "\n";

    return 0;
}