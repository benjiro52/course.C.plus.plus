#include <iostream>

using namespace std;

int main()
{
    int a, n, ant;
    cin >> a >> n;

    for (int i = 0; i < n; i++) {
        ant = a * a;
        a = ant % 10 + (ant % 100 - (ant % 10)) + (ant % 1000 - (ant % 100));
        // cout << a << endl;
    }

    cout << a;
}