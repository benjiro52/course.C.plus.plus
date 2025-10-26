#include <iostream>

using namespace std;

int main()
{
    long long soldaten, walls, soldaten2, walls2, antwort, antwort2;
    cin>>soldaten>>walls>>soldaten2>>walls2;

    antwort = soldaten * 2 / walls;
    antwort2 = soldaten2 * 2 / walls2;



    cout<<antwort<<endl<<antwort2;

    return 0;
}