#include <iostream>
#include <string>
using namespace std;

int main() {
    long long res=0;
    string s;
    getline(cin, s);
    s=" "+s;
    s+=" ";
    for (int i=0; i<s.size()-1; i++) {
        if (s[i]==' ' && s[i+1]!=' ') {
            int j;
            for (j=i+1; j<s.size(); j++) {
                if (s[j]==' ') break;
            }
            long long k=0, ii=i, jj=j;
            for (ii=i, jj=j; ii<=jj; ii++, jj--) {
                if (s[ii]!=s[jj]) {k++; break;}
            }
            if (k==0) res++;
        }
    }
    cout<<res;
}