#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ans;
    cin>>n;
    ans = n-n/2-n/3-n/5+n/6+n/10+n/15-n/30;
    
    cout<<ans;
    
}
