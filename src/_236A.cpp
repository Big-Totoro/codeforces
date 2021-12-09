//
// https://codeforces.com/problemset/problem/236/A
//

#include <iostream>
#include <set>

using namespace std;

int main() {
    string input;

    cin >> input;
    set<char> symbols;

    for (int i = 0; i < input.size(); ++i) {
        symbols.insert(input[i]);
    }

    if (symbols.size() % 2 == 0) {
        cout << "CHAT WITH HER!" << "\n";
    } else {
        cout << "IGNORE HIM!" << "\n";
    }

    return 0;
}