#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,3,5,6};
    int target = 7;
    
    int l = 0, r = nums.size() - 1;
    int mid = 0;
    while (l <= r) {
        mid = (l + r) / 2;
        if (nums[mid] < target) {
            l = mid + 1;
        } else if (nums[mid] > target) {
            r = mid - 1;
        } else {
            cout << mid;
            return 0;
        }
    }

    cout << l;

    return 0;
}