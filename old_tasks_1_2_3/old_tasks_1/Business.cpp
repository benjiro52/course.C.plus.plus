#include <iostream>

using namespace std;

int main()
{
    int dlina, shirina, visota, ans, A;
    cin>>dlina>>shirina>>visota;
    A = 16;

   ans = 2 * (visota * shirina + dlina * visota) ;
   if ( ans == 0 ) {
       cout<<"1";
       
       return 0;
   }
   
   if (ans % A == 0) {
       cout<<ans / A;
   }
   else {
       cout<<ans / A + 1;
   }
   
   return 0;
}