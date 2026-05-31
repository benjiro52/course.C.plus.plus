#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k;
    cin >> k;
    vector<int> nums;

    if (k == 0) {
        cout << 10;
        return 0;
    }

    if (k == 1) {
        cout << 1;
        return 0;
    }

    for (int i = 9; i >= 2; i--) {
        while (k % i == 0) {
            k /= i;
            nums.push_back(i);
        }
    } 
    
    if (k > 1) {
        cout << -1;
        return 0;
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
    }
}
