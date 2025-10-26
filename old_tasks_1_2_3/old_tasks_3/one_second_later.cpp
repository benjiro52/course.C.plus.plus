#include <iostream>

using namespace std;

int main() 
{
    int g, h, s;
    cin >> g >> h >> s;

    int all_sec = g * 3600 + h * 60 + s;

    all_sec++;

    g = all_sec / 3600;
    h = all_sec % 3600 / 60;
    s = all_sec % 60;

    if (g == 24) {
        g = 0;
    }
        
    cout << g << " " << h << " " << s;

    return 0;
}
