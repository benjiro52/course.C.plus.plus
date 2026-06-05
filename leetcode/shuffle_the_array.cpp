#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 3;
    int a = 1;
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    vector<int> nums2(nums.size());

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n; i++) {
        nums2[2 * i] = nums[i];
        nums2[2 * i + 1] = nums[n + i];
    }
    
    for (int i = 0; i < nums2.size(); i++) {
        cout << nums2[i] << " ";
    }
}