#include <iostream>
using namespace std;

int main() 
{
    long long m, x, y, w, h, x_s, x_e, y_s, y_e;  
    cin >> m >> x >> y >> w >> h;

    x_s = x / m;
    x_e= (x + w - 1) / m;

    y_s= y / m;
    y_e = (y + h - 1) / m;

    long long ant = (x_e - x_s + 1) * (y_e - y_s + 1);

    cout << ant;

    return 0;
}