#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> vec = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}  
    };

    int mx = vec[0][0];

    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            if (vec[i][j] > mx) {
                mx = vec[i][j];
            }
        }
    }

    cout << mx;
}