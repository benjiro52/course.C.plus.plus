#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;


    int sum = 0;
    int sum2 = 0;

    for (int i = num; i >= 1; i--) {
        sum2 += i;
    }

    for (int i = 1; i <= num; i++) {
        sum += i;
        if (sum == sum2) {
            cout << i;
            return 0;
        } 
        sum2 -= i;
    }
    
    cout << "-1";
    return 0;
}