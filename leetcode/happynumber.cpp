#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 19;
    int ans = 0;
    set<int> st;

    while (n != 1) {
        if (st.count(n)) {
            cout << "false";
            return 0;
        }
        st.insert(n);

        int sum = 0;
        int ans = n;
        while (ans > 0) {
            int digit = ans % 10;
            sum += digit * digit;
            ans /= 10;
        }  

        n = sum;
    }

    cout << "false";
    return 0;
}