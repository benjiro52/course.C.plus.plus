#include <bits/stdc++.h>
using namespace std;

int findMax(vector<int> nums) {
    int biggest = nums[0];
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] > biggest) {
            biggest = nums[i];
        }
    }
    return biggest;
}

int main() {
    vector<int> v = {9, 0, 1, 2};

    cout << findMax(v);
    return 0;
}