#include <bits/stdc++.h>
using namespace std;

int main () {
    int value = 0;
    vector<int> nums(5);
    map<int, int> mp;

    for (int i = 0; i < nums.size(); i++) {
        cin >> nums[i];
        mp[nums[i]] = 1;
    }

    for (auto& p : mp) {
        int i = p.first;
        if (mp.find(i + 1) != mp.end()) {
            value++;
            cout << "number:" << i << endl;
        }
    }
    cout << value;
    return 0;
}