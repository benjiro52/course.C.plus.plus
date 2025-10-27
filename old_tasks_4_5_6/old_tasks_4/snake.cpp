#include <iostream>

using namespace std;

int main()
{
    long long snake;
    cin >> snake;

    long long points = (snake + 1) * (snake + 1);
    cout << points - 1;

    return 0;
}