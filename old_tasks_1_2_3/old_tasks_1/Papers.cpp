#include <iostream>

using namespace std;

int main()
{
    int n, m, k, b, a;
    cin >> n >> m >> k;

    a = k / n;

    if ((m % a) == 0){
        b = m / a;
    }
        else b = (m / a) + 1;

    cout << b << endl;
    
    return 0;
}