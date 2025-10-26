#include <iostream>

using namespace std;

int main()
{
    long pig;
    cin >> pig;

    if (pig == 0) {
        cout << "0";
        return 0;
    }

    unsigned long long ant = pig * 2 - 1;

    cout << ant;

    return 0;
}