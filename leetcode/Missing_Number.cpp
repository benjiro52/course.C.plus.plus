#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {3,0,1}; 
    unordered_set<int> s(nums.begin(), nums.end());

    for (int i = 0; i <= nums.size(); i++) {
        if (s.find(i) == s.end()) { 
            cout << i << endl;
            break;
        }
    }

    return 0;
}
