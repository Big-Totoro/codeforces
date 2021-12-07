//
// https://codeforces.com/problemset/problem/158/A
//

#include <iostream>

using namespace std;

int main() {
    int n = 0, k = 0, counter = 0;

    cin >> n >> k;

    int rates[n];

    for (int i = 0; i < n; ++i) {
        cin >> rates[i];
    }

    int rate = rates[k - 1];
    for (int i = 0; i < n; ++i) {
        if (rates[i] >= rate && rates[i] != 0) {
            ++counter;
        }
    }

    cout << counter << "\n";

    return 0;
}