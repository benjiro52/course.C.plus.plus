#include <iostream>

using namespace std;

int main()
{
    unsigned int a, b, jars, ans1, ans2;
    cin>>a>>b;
    jars = a + b - 1;
    ans1 = jars - a;
    ans2 = jars - b;
    
    cout<<ans1<<" "<<ans2;
}