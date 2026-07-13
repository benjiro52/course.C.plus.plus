#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, ans;
    string s;
    cin >> n >> k;
    cin >> s;
    ans = 0;
    if(k>2) {
        for(int i=1;i<n;i++) {
            if(s[i]==s[i-1]) {
                ans++;
                s[i] = '*';
            }
        }
    }
    else {
        int res1 = 0,res2 = 0;
        for(int i=0;i<n;i++) {
            if((i&1 && s[i]=='0') || (i%2==0 && s[i]=='1')) res1++;
            else res2++;
        }
        ans = min(res1,res2);
    }
    cout << ans << endl;
}