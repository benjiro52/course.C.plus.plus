#include <iostream>

using namespace std;

int main()
{
    int a, b, n;
    char text[101];
    cin >> text >> a >> b;

    if (a > b) {
        cout << "0";
        return 0;
    }

    a--;
    b--;
    n = b - a + 1;
    cout << n << endl;
    for (int i = a; i <= b; i++) {
        cout << text[i];
    }
    return 0;
}