#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);

    int t = 0;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int array[3] = {0};

        cin >> array[0] >> array[1] >> array[2];

        int size = sizeof(array) / sizeof(array[0]);
        sort(array, array + size);

        if ((array[0] == array[1]) && (array[1] == array[2]) && array[0] % 2 == 0) {
            cout << "YES" << "\n";
            continue;
        }
        if ((array[2] - array[0] == array[1]) || (array[2] - array[1] == array[0])){
            cout << "YES" << "\n";
            continue;
        }
        if ((array[0] == array[1]) && (array[2] % 2 == 0)) {
            cout << "YES" << "\n";
            continue;
        }
        if ((array[1] == array[2]) && (array[0] % 2 == 0)) {
            cout << "YES" << "\n";
            continue;
        }
        if ((array[0] == array[2]) && (array[1] % 2 == 0)) {
            cout << "YES" << "\n";
            continue;
        }

        cout << "NO" << "\n";
    }

    return 0;
}