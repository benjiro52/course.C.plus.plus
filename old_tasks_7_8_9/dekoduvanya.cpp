#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            int num = 0;
            while (s[i] >= '0' && s[i] <= '9') {
                num = num * 10 + (s[i] - '0');
                i++;
            }

            for (int j = 0; j < num; j++) {
                cout << s[i];
            }
        }
        else {
            cout << s[i];
        }
    }
    
    return 0;
}
