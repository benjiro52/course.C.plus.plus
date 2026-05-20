#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    map<int, int> time;
    
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        time[x] += y;
    }
    
    int best_game = -1, best_time = -1;
    for (auto it = time.begin(); it != time.end(); it++) {
        if (it->second > best_time) {
            best_time = it->second;
            best_game = it->first;
        }
    }
    cout << best_game;
    return 0;
}   