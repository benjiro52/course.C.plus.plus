#include <iostream>

using namespace std;

int main()
{
    int white, black;
    cin>>white>>black;

    if (white % 2 == 0) {
        cout<<"black";
        return 0;
    }
    else {
        cout<<"white";
    }

    return 0;
}