//
// https://codeforces.com/problemset/problem/339/A
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string input, transformed, result;

    cin >> input;

    for (int i = 0; i < input.size(); ++i) {
        if (input[i] != '+') {
            transformed.push_back(input[i]);
        }
    }

    sort(transformed.begin(), transformed.end());

    for (int i = 0; i < transformed.size(); ++i) {
        result.push_back(transformed[i]);
        if (i < transformed.size() - 1) {
            result.push_back('+');
        }
    }

    cout << result << "\n";

    return 0;
}