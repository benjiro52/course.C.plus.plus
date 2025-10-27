#include <iostream>

using namespace std;

int main()
{
    int n, k, m, a, b, ant = 0, distance = 0; 
    cin >> n >> k >> m >> a >> b;  

    while (distance < n)
    {
        int benzin = min(k, n - distance);
        if (distance % m == 0) 
        {
            ant += benzin * b; 
        }
        else {
            ant += benzin * a; 
        }
        distance += k; 
    }
    cout << ant;

    return 0;
}
