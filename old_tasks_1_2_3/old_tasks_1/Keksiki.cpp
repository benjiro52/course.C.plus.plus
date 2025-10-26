#include <iostream>

using namespace std;

int main ()
{
    int keksiki, kolichestvo, min;
    cin>>keksiki>>kolichestvo;
    
    if (kolichestvo + 1 == keksiki){
        cout<<kolichestvo;
    }
    if (kolichestvo * 2 == keksiki){
        cout<<kolichestvo;
    }
    if (kolichestvo == 1){
        cout<<kolichestvo + 1;
    }
    if (kolichestvo == keksik){
        cout<<"2";
    }
    
}