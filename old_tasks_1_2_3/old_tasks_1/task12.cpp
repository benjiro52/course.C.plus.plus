#include <bits/stdc++.h>
using namespace std;
int main()
{
    int osnova, lopast, kvadrakopter,S, N, C, ans;
    cin>>osnova>>lopast>>C;
    kvadrakopter=osnova+(lopast*N);
    ans=(C-osnova)/lopast;
    
    cout<<ans;
}