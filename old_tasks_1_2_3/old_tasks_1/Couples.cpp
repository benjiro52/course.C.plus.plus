#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, antwort;
    cin>>a>>b>>c>>d;

    if (a > b){
        swap (a, b);
    }
    if (b > c){
        swap (b, c);
    }
    if (c > d){
        swap (c, d);
    }
    if (a > b){
        swap (a, b);
    }
    if (b > c){
        swap (b, c);
    }
    if (a > b){
        swap (a, b);
    }

    antwort = a * b + c * d;

    cout<<antwort;
}