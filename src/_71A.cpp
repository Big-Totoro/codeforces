//
// https://codeforces.com/problemset/problem/71/A
//

#include <iostream>

using namespace std;

int main() {

    int n = 0;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        string input;
        cin >> input;

        if (input.size() > 10) {
            input = input[0] + to_string(input.size() - 2) + input[input.size() - 1];
        }

        cout << input << "\n";
    }

    return 0;
}