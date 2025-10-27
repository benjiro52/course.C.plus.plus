#include <iostream>

using namespace std;

int main()
{
    int n, a, b, ant;
    cin >> n >> a >> b;
    
    ant = (b * n + a) / (a + b);
    if (a * (ant - 1) > b * (n - ant)) {
        ant = ant - 1;
    } else {
        if (a * (ant - 1) < b * (n - ant)) {
            ant = ant + 1;
        }
    }
    cout << ant;

    return 0;
}