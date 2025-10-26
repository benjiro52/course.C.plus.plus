#include <iostream>

using namespace std;

int main()
{
    int n, k0 = 0, k1 = 0, i = 1, x;
    cin >> n;

    while (i <= n) {
        cin >> x;
        if (x == 0) 
            k0 ++;
        
        else 
            k1 ++;
        
        i ++;
    } 
    cout << min(k0, k1);
}