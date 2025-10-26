#include <iostream>

using namespace std;

int main()
{
    int n, f, V, storona, resh1, resh2, resh3, resh0, for2, formula1, inner;
    cin>>n>>f;

    formula1 = 2 * n + (n - 2) + (n - 2); //(n - 2) * (n - 2)
    storona = n * n;
    V = n * n * n;
    inner = n - 2;
    for2 = formula1 - 4;

    resh1 = (storona - formula1) * 6; 
    resh2 = for2 * 3;
    resh3 = 8;
    resh0 = inner * inner * inner;

    if (f == 1) {
        cout<<resh1;
    }
    if (f == 2) { 
        cout<<resh2;
    }
    if (f == 3) {
        cout<<resh3;
    }
    if (f == 0) {
        cout<<resh0;
    }
   
   return 0;
}