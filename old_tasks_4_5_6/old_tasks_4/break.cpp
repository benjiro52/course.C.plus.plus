#include <iostream>

using namespace std;

int main()  
{
    int h1, m1, h2, m2, b, start, end, lesson, ant, ant_h, ant_m;
    cin >> h1 >> m1 >> h2 >> m2 >> b;

    start = h1 * 60 + m1;
    end = h2 * 60 + m2;
    lesson = end - start;
    ant = start + (lesson - b) / 2;
    if ((lesson - b) % 2 != 0) {
    ant ++;
    }
    ant_h = ant / 60 ;
    ant_m = ant % 60;
    cout << ant_h << " " << ant_m;

    return 0;
}