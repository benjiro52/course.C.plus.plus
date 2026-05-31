#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int k = max(n, a[0]);
    cout << k << endl;

    for (int i = 0; i < n; i++) {
        cout << i + 1 << " " << a[i] << endl;
    }   
    
    for (int i = n; i < k; i++) {
        cout << 1 << " " << a[0] - (i - n) << endl;
    } 
}