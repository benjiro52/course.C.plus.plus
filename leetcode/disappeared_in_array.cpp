#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {4,3,2,7,8,2,3,1};
    sort(nums.begin(), nums.end());
    unordered_map<int,int> mp(nums.size());

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]]++;
    }
    for (int i = 1; i <= nums.size(); i++) {
        if (mp[i] == 0) cout << i << " ";
    }
    // for (int i = 1; i <= nums.size(); i++) {
    //     cout << mp[i] << " ";
    // }

    return 0;
}