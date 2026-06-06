#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {1,2,3,4,9,6,7,8,9};
    vector<int> count(nums.size() + 1, 0);

    int rep = 0;
    int mis = 0;

    for (int i = 0; i < nums.size(); i++) {
        count[nums[i]]++;
        cout << count[nums[i]] << " "; 
    }

    cout << endl;

    for (int i = 0; i < count.size(); i++) {
        if (count[i] >= 2) {
            rep = i;
        }
        if (count[i] == 0) {
            mis = i;
        }
    }

    cout << rep << " " << mis;
    return 0;
}