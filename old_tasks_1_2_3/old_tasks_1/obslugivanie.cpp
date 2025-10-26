#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
    ll a,b,c=0,d;
    cin>>a>>b;
    if(((b/a)%2==1 && b%a!=0) ||((b/a)%2==0 && b%a==0 ))b-=a;
    if(a==b)cout<<a;
       else cout<<b-(b/(a*2))*(a+a)+(b/(a*2))*a;
       
}