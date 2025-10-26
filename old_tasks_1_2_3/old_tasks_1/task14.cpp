#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, ans, test;
    cin>>n>>k;
    test=n/k;
    
    ans=(2*n)*(n/k-1);
    
    if (test==1) {
        cout<<0;
        return 0;
    }
    
    cout<<ans;
    return 0;
}

