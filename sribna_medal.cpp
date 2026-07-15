#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    set<int> s;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    
    int count = 0;
    int silver = 0;
    for (auto i = s.begin(); i != s.end(); i++) {
        count++;
        if (count == s.size() - 1) {
            silver = *i;
        }
    }
    
    cout << silver;
    return 0;
}