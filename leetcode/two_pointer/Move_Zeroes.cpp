#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {0,1,0,3,12};
    int slow = 0;
    // fast slow to pointer
    for (int fast = 0; fast < nums.size(); fast++) {
        if (nums[fast] != 0) {
            swap(nums[slow], nums[fast]);
            slow++;
        }
    }

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
}