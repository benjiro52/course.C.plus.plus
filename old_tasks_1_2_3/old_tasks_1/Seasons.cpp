#include <iostream>

using namespace std;

int main()
{
    int month;
    cin>>month;

    if ( month > 12) cout<<"Error";
    if ( month == 12 || month == 1 || month ==2 ) cout<<"Winter";
    if ( month == 3 || month == 4 || month == 5) cout<<"Spring";
    if ( month == 6 || month == 7 || month == 8) cout<<"Summer";
    if ( month == 9 || month == 10 || month == 11) cout<<"Autumn";
    
}