#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,3,1,2,3};
    unordered_map<int, int> last_index;
    int k = 2;


    for (int i = 0; i < nums.size(); i++) {
        if (last_index.find(nums[i]) != last_index.end()) {
            if (i - last_index[nums[i]] <= k) {
                cout << "true";
                return 0;
            }
        }
        last_index[nums[i]] = i; 
    }
    // for (int i = 0; i < nums.size(); i++) {hh
    //     for (int j = 1; j < nums.size(); j++) {
    //         if (nums[i] == nums[j] && i != j) {
    //             if (abs(i - j) <= k) {
    //                 cout << "true";
    //                 return 0;
    //             }            
    //         }
    //     }
    // }
    // for (int i = 0; i < last_index.size(); i++) {
    //     cout << last_index[nums[i]] << " " << last_index[i] << endl;
    // }
    cout << "you are out♡";
    return 0;
}