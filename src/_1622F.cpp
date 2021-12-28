//
// Created by SSkuratov on 27.12.2021.
//

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <math.h>

using namespace std;

long long factorial(unsigned int n)
{
    long long res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}

void makeCombiUtil(vector<vector<int>> &ans, vector<int> &tmp, int n, int left, int k) {
    if (k == 0) {
        ans.push_back(tmp);
        return;
    }

    for (int i = left; i <= n; ++i) {
        tmp.push_back(i);
        makeCombiUtil(ans, tmp, n, i + 1, k - 1);

        tmp.pop_back();
    }
}

int main() {
    cin.tie(0);
    cout.tie(0);

    int n = 0;
    cin >> n;
    map<int, long long> cache;

    vector<vector<int>> combi;
    vector<int> tmp;
    makeCombiUtil(combi, tmp, 2, 3);

    for (int i = 0; i < n; ++i) {
        vector<int> array(i + 1);
        for (int j = 0; j <= i; ++j) {
            array[j] = j + 1;
        }

        long long f = 0;
        do {
            long long result = 1;

            for (int k = 0; k < array.size(); ++k) {
                if (cache.count(k + 1) == 0) {
                    f = factorial(k + 1);
                    cache[k + 1] = f;
                } else {
                    f = cache[k + 1];
                }

                result *= f;
            }

            double sqrtResult = sqrt(result);
            if (abs(sqrtResult - (long)sqrtResult) == 0) {
                cout << array.size() << "\n";
                for (int m = 0; m < array.size(); ++m) {
                    cout << array[m] << " ";
                }
                cout << "\n";
            }

        } while (next_permutation(array.begin(), array.end()));

    }

    return 0;
}