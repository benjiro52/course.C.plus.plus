#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, s1 = "";
    getline(cin, s);
    for(int i=0; i<s.size(); i++) {
        if((s[i]>=97 && s[i]<=122) || (s[i]>=65 && s[i]<=90)) {
            s1+=s[i]; s1+=s[i];
        } else s1+=s[i];

    }
    cout << s1;
}
