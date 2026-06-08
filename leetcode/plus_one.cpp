#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> digits = {9};

    for (int i = digits.size() - 1; i >= 0; i--) {
        if (i == digits.size() - 1) digits[i] += 1;

        if (digits[i] >= 10) {
            digits[i] = 0;
            // cout << "#";
            if (digits[i] == 0) {
                digits.insert(digits.begin(), 1);
            } else {
                digits[i - 1]++;
            }
        } 
        
    }

    for (int i = 0; i < digits.size(); i++) {
        cout << digits[i] << " ";
    }
}