//
// https://codeforces.com/problemset/problem/617/A
//

#include <iostream>

using namespace std;

int main() {
    int x = 0;

    cin >> x;

    int counter = x / 5;
    if (x % 5 != 0) {
        ++counter;
    }

    cout << counter << "\n";

    return 0;
}