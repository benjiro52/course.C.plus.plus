#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int d, e, f;
    
    cin >> a >> b >> c >> d >> e >> f; 

    int sec1 = a * 3600 + b * 60 + c;
    int sec2 = d * 3600 + e * 60 + f;
    
    int sec3 = sec2 - sec1;

    int hour = sec3 / 3600;
    sec3 = sec3 % 3600;
    int min = sec3 / 60;
    int sec4 = sec3 % 60;

    cout << hour << " " << min << " " << sec4;
    
    return 0;
}
