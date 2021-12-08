//
// https://codeforces.com/problemset/problem/112/A
//

#include <iostream>

using namespace std;

int main() {
    string a;
    string b;

    cin >> a >> b;

    for (int i = 0; i < a.size(); ++i) {
        if (tolower(a[i]) < tolower(b[i])) {
            cout << "-1" << "\n";
            return 0;
        } else if (tolower(a[i]) > tolower(b[i])) {
            cout << "1" << "\n";
            return 0;
        }
    }

    cout << "0" << "\n";

    return 0;
}