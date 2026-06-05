#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int best = 0;
    int cur = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            cur++;
        }
        if (cur != 0 && cur > best) best++;
        if (nums[i] == 0) cur = 0;
    } 

    cout << best;
}