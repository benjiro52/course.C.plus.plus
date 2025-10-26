#include <iostream>

using namespace std;

int main()
{
    int d1, d2, d3, way1, way2, way3, way4;
    cin>>d1>>d2>>d3;

    way1 = d1 + d1 + d2 + d2;
    way2 = d1 + d1 + d3 + d3;
    way3 = d2 + d2 + d3 + d3;
    way4 = d1 + d2 + d3;

    if (way1 <= way2 && way1 <= way3 && way1 <= way4){
        cout<<way1;
        return 0;
    }
    if(way2 <= way1 && way2 <= way3 && way2 <= way4){
        cout<<way2;
        return 0;
    }
    if(way3 <= way1 && way3 <= way2 && way3 <= way4){
        cout<<way3;
        return 0;
    }
    if(way4 <= way1 && way4 <= way2 && way4 <= way3){
        cout<<way4;
        return 0;
    }

    return 0;
}