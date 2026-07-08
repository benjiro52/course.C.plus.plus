#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    cout << "How many numbers do u want to have?" << endl;
    cin >> n;

    vector<int> nums(n);
    vector<char> signs(n - 1);

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums[i] = num;

       if (i < n - 1) {
            char sign;
            cin >> sign;
            signs[i] = sign;
        }
    }
    ans = nums[0];
    for (int i = 1; i < n; i++) {
        if (signs[i - 1] == '+') ans += nums[i];
        else if (signs[i - 1] == '-') ans -= nums[i];
        else if (signs[i - 1] == '*') ans *= nums[i];
        else if (signs[i - 1] == '/') ans /= nums[i];
    }

    cout << "Answer: " << ans;
}
