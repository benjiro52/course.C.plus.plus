#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> vec = {
        {1, 2, 3}, 
        {10, 1, 1},
        {4, 5, 6}  
    };

    int sum = 0;
    int mx = 0;
    int ans = 0;

    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            sum += vec[i][j];
        }
        if (mx <= sum) {
            mx = sum;
            ans = i + 1;
        }
        sum = 0;
    }

    cout << ans;
}