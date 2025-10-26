#include <iostream>

using namespace std;

int main()
{
    int chocolate, p, prozent, suma, ans, posle, kopeika, kopeika2;
    cin>>chocolate>>p>>suma;

    kopeika = chocolate * 100;
    kopeika2 = suma * 100;

    prozent = kopeika / 100 * p;
    posle = kopeika + prozent;
    ans = kopeika2 / posle;

    cout<<ans;
}