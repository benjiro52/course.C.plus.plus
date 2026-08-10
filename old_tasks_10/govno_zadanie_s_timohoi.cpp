#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 3974;
    int ans = 0;   

    while (num != 0) {
        int digit = num % 10; 
        if (digit > ans) {
            ans = digit;   
        }
        num /= 10;
    }

    cout << "ans: " << ans;
}