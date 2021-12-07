//
// https://codeforces.com/problemset/problem/282/A
//

#include <iostream>

using namespace std;

int main() {
    int n = 0;

    cin >> n;

    int result = 0;
    for (int i = 0; i < n; ++i) {
        string op;
        cin >> op;

        if (op.find("++") != string::npos) {
            ++result;
        } else {
            --result;
        }
    }

    cout << result << "\n";

    return 0;
}