#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums(5);
    for (int i = 0; i < nums.size(); i++) {
        cin >> nums[i];
    }
    
    int target;
    cin >> target;

    for (int i = 0; i < nums.size(); i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[i] + nums[j] == target) {
                cout << i << ", " << j << endl;
                return 0; 
            }
        }
    }

    cout << "Нет пары с такой суммой" << endl;
    return 0;
}
