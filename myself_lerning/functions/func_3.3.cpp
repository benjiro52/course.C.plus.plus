#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(vector<int> v) {
    unordered_set<int> seen;
    vector<int> res;

    for (int x : v) {
        if (!seen.count(x)) {
            seen.insert(x);
            res.push_back(x);
        }
    }

    return res;
}

int main() {
    vector<int> nums = {1, 2, 2, 3, 4, 5, 4, 1};

    nums = removeDuplicates(nums);

    for (int i : nums) {
        cout << i << " ";
    }
}