#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<char>> vec (n, vector<char>(n)); 

    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            if (i == 0) {
                vec[i][j] = 'R';
            } else if (i == n - 1) {
                vec[i][j] = 'B';
            } else if (j % 2) {
                vec[i][j] = 'R';
            } else {
                vec[i][j] = 'B';
            }
        }
    }

    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            cout << vec[i][j];
        }
        cout << '\n';
    }
}