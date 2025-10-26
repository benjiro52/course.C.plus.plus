#include <iostream>

using namespace std;

int main()
{
    int a, p;
    int side_1, ant, side_2;
    cin >> a >> p;

    side_1 = (p - a - a) / 4;
    side_2 = side_1 + a;
    ant = side_1 * side_2;

    cout << ant;
}