#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n == 1) {
        cout << 1;
        return 0;
    }

    vector<int> nums;

    for (int d = 9; d >= 2; d--) {
        while (n % d == 0) {
            nums.push_back(d);
            n /= d;
        }
    }

    if (n != 1) {
        cout << 0;
        return 0;
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
    }
    
    return 0;
}
