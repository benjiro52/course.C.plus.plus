#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {3,1,2,10,1};
    vector<int> run_sum;
    int ans = 0;

    for (int i = 0; i < nums.size(); i++) {
        ans += nums[i];
        run_sum.push_back(ans);
    }

    for (int i = 0; i < run_sum.size(); i++) {
        cout << run_sum[i] << " ";
    }
}