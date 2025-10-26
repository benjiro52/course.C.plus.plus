#include <iostream>

using namespace std;

int main()
{
    short a, b, c;
    cin >> a >> b >> c;

    if (c > b && b > a){
        cout << "Up";
        return 0;
    }
    if (c < b && a > b){
        cout << "Down";
        return 0;
    }

    cout <<"Not understand";

    return 0;
}
