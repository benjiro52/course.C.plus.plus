#include <iostream>

using namespace std;

int main()
{
    int sh, vi, rad;
    cin>>sh>>vi>>rad;

    if (sh >= 2 * rad && vi >= 2 * rad) cout<<"YES";
    else cout<<"NO";

    return 0;
}