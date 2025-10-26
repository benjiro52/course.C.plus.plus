#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin>>a>>b>>c;

    if (a > b && a < c){
        cout<<a;
    }
    if (a > c && a < b){
        cout<<a;
    }

    if(b > a && b < c){
        cout<<b;
    }
    if (b > c && b < a){
        cout<<b;
    }

    if (c > b && c < a){
        cout<<c;
    }
    if (c > a && c < b){
        cout<<c;
    }
}