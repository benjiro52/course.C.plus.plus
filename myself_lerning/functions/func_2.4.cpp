#include <bits/stdc++.h>
using namespace std;

int maxOfThree(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int ans1, ans2, ans3;
    cin >> ans1 >> ans2 >> ans3;
    
    cout << maxOfThree(ans1, ans2, ans3);
    return 0;
}