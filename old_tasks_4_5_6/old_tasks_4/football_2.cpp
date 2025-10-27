#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int x, n, a = 0, b = 0, c = 0;
    set<ll> s,t;
    typedef long long ll;

    for(int i=1;i<=11;i++){
        cin>>x;
        s.insert(x);
    }
    for(int i=1;i<=11;i++){
        cin>>x;
        t.insert(x);
    }
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        if(s.count(x) && t.count(x)) c++;
        else if(s.count(x)) a++;
        else b++;
    }
    cout<<c+1<<"\n";
    for(int i=0;i<=c;i++) cout<<a+i<<":"<<b+c-i<<"\n";


    return 0;
}
