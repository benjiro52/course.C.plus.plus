#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, m;
    cin >> h >> m;
    
    int ant = h * 60 + m - 45;
    
    if (ant < 0) {
        ant += 24 * 60;
    }
    
    cout << ant / 60 << " " << ant % 60;
    
    return 0;
}