#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    vector<long long> ans;
    long long sum = 0;
    long long a = 1;
    
    while (sum + a <= n) {
        ans.push_back(a);
        sum += a;
        a *= 2;
    }
    
    if (sum < n) {
        ans.push_back(n - sum);
    }
    
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}