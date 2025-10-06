#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums(4);

    for (int i = 0; i < nums.size(); i++) {
        cin >> nums[i];
    }

    map<int, int> map;

    for (int i = 0; i < nums.size(); i++) {
        map[nums[i]]++;
        if (map[nums[i]] > 1) {
            cout << "true";
            return 0;
        }
    }

    cout << "false";
}   