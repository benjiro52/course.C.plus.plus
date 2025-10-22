#include <bits/stdc++.h>
using namespace std;

int main() {
    // int n;
    // cin >> n;

    vector<int> nums(3);
    for (int i = 0; i < nums.size(); i++) {
        cin >> nums[i];
    }

    map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        mp[nums[i]] ++;
        if (mp[nums[i]] > nums.size() / 2) {
            cout << nums[i];
        }
    }
}