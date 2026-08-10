#include <iostream> 
#include <string>
using namespace std;

int main()
{   
    string p,t;
    int k;
    cin>>p>>t>>k;
    int res=0;
    for(int i=k-1;i<=k-1+p.size();i++)
    {

        if(p[res]==t[i]) res++;
            else {if(res!=p.size()) {cout<<"NO"<<endl<<res+1;
            return 0;}
                else cout<<"YES"<<endl<<p.size();
                return 0;}
    }

    cout << "YES";

    cout << endl << p.size();

    return 0;
}
