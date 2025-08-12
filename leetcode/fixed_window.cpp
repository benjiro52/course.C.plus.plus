#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; 

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int sum = 0;
    int max_sum = 0;

    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }
    max_sum = sum;

    for (int i = k; i < n; i++) {
        sum = sum - nums[i - k] + nums[i]; 
        if (sum > max_sum) {
            max_sum = sum;
        }
    }

    cout << max_sum;

    return 0;
}
