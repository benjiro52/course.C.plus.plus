#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    vector<int> pos1(n+1);
    vector<int> pos2(n+1);
    for (int i = 0; i < n; i++) {
        int v; 
        cin >> v;
        pos1[v] = i;
    }
    for (int i = 0; i < n; i++) {
        int v; 
        cin >> v;
        pos2[v] = i;
    }
    
    vector<int> freq(n, 0);
    for (int i = 1; i <= n; i++) {
        int delta = ((pos2[i] - pos1[i]) % n + n) % n;
        freq[delta]++;
    }
    
    int ant = *max_element(freq.begin(), freq.end());
    cout << ant;

    return 0;
}