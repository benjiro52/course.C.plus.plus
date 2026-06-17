#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> g = {1, 2, 3}; 
    vector<int> s = {1, 1};    

    sort(g.begin(), g.end());
    sort(s.begin(), s.end());

    int ans = 0;      
    int i = 0;        
    int j = 0;        

    while (i < g.size() && j < s.size()) {
        if (s[j] >= g[i]) { 
            ans++;
            i++;            
        }
        j++;                
    }

    cout << ans << endl;

    return 0;
}
