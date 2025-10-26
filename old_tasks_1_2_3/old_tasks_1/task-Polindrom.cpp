#include <iostream>

using namespace std;

int main()
{
    int number, a, b, c, d;
    cin>>number;
    a = number / 1000;
    b = number / 100 % 10;
    c = number / 10 % 10;
    d = number % 10;
    
    if (a == d && b == c) cout<<"YES";
    else cout<<"NO";
   
    return 0;
}