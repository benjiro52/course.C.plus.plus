#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};

    int l = 0, r = nums.size() - 1;

    while (l < r) {
        swap(nums[l], nums[r]);
        l++;
        r--;
    }

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}