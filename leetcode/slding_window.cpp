#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> table;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int sum = 0, max_sum = 0;
    int start = 0;
    int value = 0;  

    for (int end = 0; end < n; end++) {
        value = nums[end];
        sum += nums[end];
        table[value]++;

        while (table[value] > 1) {
            sum -= nums[start];
            table[nums[start]]--;
            start++;
        }

        max_sum = sum;
    }

    cout << max_sum;

}