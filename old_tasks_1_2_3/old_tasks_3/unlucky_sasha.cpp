#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    
    int minutes = n * 60;
    
    int translate = minutes - (x + y + z);
    int ant = translate / 5;

    if (ant < 0) {
        cout << 0;
        return 0;
    }
    
    cout << ant;
    
    return 0;
}
