#include <bits/stdc++.h>
using namespace std;
int main()
{
   int g, h, s, g2, h2, c2, perevod1;
   cin>>g>>h>>s;
   perevod1=(g*3600)+(h*60)+s+1;
   g2=perevod1/3600%24;
   h2=perevod1%3600/60;
   c2=perevod1%60;
   
   cout<<g2<<" "<<h2<<" "<<c2;
}