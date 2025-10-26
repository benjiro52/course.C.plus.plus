#include <iostream>

using namespace std;

int main()
{
    int stotis, destis, tis, sot, des, od, ticket;
    cin>>ticket;

    stotis = ticket / 100000;
    destis = ticket / 10000 % 10; 
    tis = ticket / 1000 % 100 % 10;
    sot = ticket / 100 % 1000 % 100 % 10;
    des = ticket / 10 % 10000 % 1000 % 100 % 10;
    od = ticket / 1 % 10000 % 1000 % 100 % 10;

    if ( stotis + destis + tis == sot + des + od) cout<<"YES";
    else cout<<"NO";

    return 0; 
    
}