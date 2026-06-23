#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    set<int> st; // контейнер

    for (int i = 0; i < nums1.size(); i++) {
        for (int j = 0; j < nums2.size(); j++) {
            if (nums1[i] == nums2[j]) {
                st.insert(nums1[i]);
            }
        }
    }

    for (int i : st) {
        cout << i << " ";
    }

    // for (int i = 0; i < nums1.size(); i++) {
    //     cout << mp[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < nums1.size(); i++) {
    //     cout << mp[nums1[i]] << " ";
    // }

    return 0;
}