#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 19;
    set<int> st;    
    
    while (n != 1) {
        if (st.count(n)) {
            cout << "false";
            return 0;
        }
        st.insert(n);

        int ans = 0;
        int temp = n;
        
        while (temp > 0) {
            int digit = temp % 10;
            ans += digit * digit;
            temp /= 10;
        }

        n = ans;
    }
    cout << "true";
    
    return 0;
}