#include <bits/stdc++.h>
using namespace std;

int main() {
    // unordered_map<int, int> map;
    // int for_map = 0;
    int start = 0, sum = 0;
    // cin >> n;

    vector<int> nums(5);
    for (int i = 0; i < nums.size(); i++) {
        cin >> nums[i];
    }
    
    int target;
    cin >> target;
    // sum = nums[0];

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            // sum += nums[j];
            if (nums[i] + nums[j] == target) {
                cout << i << ", " << j << endl;
                return 0;
            }
        }
        // sum -= nums[start];
        // start++;
        // place++;
        // sum += nums[i];

        // if (sum == target) {
        //     cout << place - 1 << ", " << place << endl;
        // }
    }
    // cout << place1 << " ";
    // cout << sum;

    return 0;
}