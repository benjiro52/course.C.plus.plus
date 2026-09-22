#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> vec = {
        {1, 2, 3}, // [0][2]
        {4, 5, 6}, // [1][1]
        {7, 8, 9}  // [2][0]
    }; // i + j = n - 1

    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            if (i + j == vec.size() - 1) {
                cout << vec[i][j] << endl;
            }
        }
    }
}