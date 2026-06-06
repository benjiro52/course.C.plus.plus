#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {8, 1, 2, 2, 3};
    // unordered_map<int, int> mp;
    vector<int> ans(nums.size(), 0);
    

    for (int i = 0; i < nums.size(); i++) {
        int cnt = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[i] > nums[j]) {
                cnt++;
            }
        }
        // cout << " " << mp[nums[i]] << endl;
        ans[i] = cnt;
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}