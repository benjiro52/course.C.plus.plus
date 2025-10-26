#include <iostream>

using namespace std;

int main()
{
    long long a, b, minimum, maximum;
    cin>>a>>b;

    
    if (a == 0 || b == 0){
        cout<<"NO";
    }

    if (b % 2 != 0){
        minimum = b / 2 + 1;
    }
    else {
        minimum = b / 2;
    }
    
    maximum = a;

    cout<<minimum<<" "<<maximum;
}