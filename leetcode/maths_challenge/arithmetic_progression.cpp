#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums1 = {3, 5, 1};
    vector<int> nums2 = {1, 2, 4};

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    int a = nums1[1] - nums1[0];
    int b = nums2[1] - nums2[0];

    for (int i = 1; i < nums1.size(); i++) {
        if (nums1[i] - nums1[i - 1] != a) { 
            cout << "false1";
            return 0;
        }
    }

    for (int i = 1; i < nums2.size(); i++) {
        if (nums2[i] - nums2[i - 1] != b) {
            cout << "false2";
            return 0;
        }
    }

    cout << a << " " << b << endl << "true";
    return 0;
}