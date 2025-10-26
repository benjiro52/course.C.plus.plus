#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (c > b && b > a) {
        cout << "Up";
        return 0;
    } else {
        if (a > b && b > c) {
            cout << "Down";
            return 0;
        } else {
        cout << "Not understand";
        return 0;
        }
    }
    

}