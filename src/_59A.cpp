//
// https://codeforces.com/problemset/problem/59/A
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string input;

    cin >> input;

    int lower = 0, upper = 0;
    for (char ch : input) {
        if (islower(ch)) {
            ++lower;
        } else {
            ++upper;
        }
    }

    if (lower >= upper) {
        transform(input.begin(), input.end(), input.begin(),
                  [](unsigned char c){ return tolower(c); });
    } else {
        transform(input.begin(), input.end(), input.begin(),
                  [](unsigned char c){ return toupper(c); });
    }

    cout << input << "\n";

    return 0;
}