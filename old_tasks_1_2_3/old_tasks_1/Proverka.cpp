#include <iostream>

using namespace std;

int main()
{
    int A, B, proverka;
    cin>>A>>B;

    if ( B != 0 && A % B == 0) cout<<"YES";
    else cout<<"NO";

    return 0;
    
}