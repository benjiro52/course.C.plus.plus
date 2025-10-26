#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int h, r, ant;
    cin >> h >> r;

    h = sqrt((h * h) - (h * h / 2));
    ant = r / h;
    
    cout << ant;

    return 0;
}