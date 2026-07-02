#include <bits/stdc++.h>
using namespace std;

bool isEven(int n) {
    if (n % 2 == 0) {
        return true;
    } else return false;
}

int main() {
    int ans;
    cin >> ans;
    cout << isEven(ans);

    return 0;
}