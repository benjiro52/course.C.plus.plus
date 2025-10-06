#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    int n;
    cin >> n;

    vector<int> value;
    map<int,int> map;

    vector<int> nums(n);
    for (int i = 0; i < nums.size(); i++) {
        cin >> nums[i];
    }
    cin >> k;

    for (int i = 0; i < nums.size(); i++) {
        map[nums[i]]++;
        if (map[nums[i]] > 1) {
            value.push_back(nums[i]);
        }
    }

    if (value.size() > 1) {
        for (int i = 0; i < k; i++) {
            
        }
    }

    for (int i = 0; i != value.size(); i++) {
        cout << value[i] << " ";
    }

}