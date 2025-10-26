#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, suma, mx, mn, ans;
    cin>>a>>b>>c;
    suma=a+b+c;
    if (a>b && a>c) mx=a;
    if (b>a && b>c) mx=b;
    if (c>a && c>b) mx=c;
    if (a<b && a<c) mn=a;
    if (b<a && b<c) mn=b;
    if (c<a && c<b) mn=c;
    ans=suma-mx-mn;
   
   cout<<ans;
    return 0;
}