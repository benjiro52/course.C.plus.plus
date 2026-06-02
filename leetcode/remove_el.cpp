#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == val) {
            nums.erase(nums.begin() + i);
            i --;
        }
    }
    int k = nums.size();

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl << k;
    return 0;
}