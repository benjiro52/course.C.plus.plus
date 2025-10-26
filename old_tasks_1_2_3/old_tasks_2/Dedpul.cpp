#include <iostream>

using namespace std;

int main()
{
    long long n,m;
    cin >> n >> m;
    int i=n,ans=1;
    int a=n,a1=1;
    while (a!=0){
        a/=10;
        a1*=10;
    }
    while (i<=m){

        i+=a1;
        if (i<=m) ans++;
    }
    cout << ans;

    return 0;
}
