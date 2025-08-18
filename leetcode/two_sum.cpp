#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, target, sum = 0, point = 2, zero = 0;
    cin >> n;

    vector<int> nums(5);
    for (int i = 0; i < nums.size(); i++) {
        cin >> nums[i];
    }
    cin >> target;

    for (int i = zero; i < point; i++) {
        sum += nums[i];
        if  (sum < target || sum > target) {
            zero++;
            point++;
            sum = 0;
            continue;
        }
        if (sum == target) {
            cout << nums[i - 1] << " " << nums[i];
            break;
        }
    }
}