#include <iostream>

using namespace std;

int main()
{
    int Masha, Misha, eated, ans;
    cin>>Masha>>Misha>>eated;
    ans = Misha + Masha - eated;
    
    if ( eated > Masha + Misha) cout<<"Impossible";
    else cout<<ans;

    return 0;
}
