//
// https://codeforces.com/problemset/problem/266/A
//

#include <iostream>

using namespace std;

int main() {
    int n = 0;
    string input;

    cin >> n;
    cin >> input;

    int counter = 0;
    for (int i = 0; i < input.size() - 1; ++i) {
        if (input[i] == input[i + 1]) {
            ++counter;
        }
    }

    cout << counter << "\n";

    return 0;
}