#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 4, 3, 2};
    sort(nums.begin(), nums.end());

    int ans = 0;
    for (int i = 0; i < nums.size(); i += 2) {
        ans += nums[i]; 
    }

    cout << ans;

    return 0;
}
