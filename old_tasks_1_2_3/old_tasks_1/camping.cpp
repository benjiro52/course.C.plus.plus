#include <iostream>

using namespace std;

int main()
{
    int k, w, a1, a2, a3, b1, b2, b3;
    cin>>k>>w>>a1>>b1>>a2>>b2>>a3>>b3;

    if (a1 == 0 && b1 == 0){
        cout<<"NO";
        return 0;
    }
    if (a2 == 0 && b2 == 0){
        cout<<"NO";
        return 0;
    }
    if(a3 == 0 && b3 == 0){
        cout<<"NO";
        return 0;
    }

    if (a1 <= k && b1 <= w){
        cout<<"YES";
        return 0;
    }
    if (a2 <= k && b2 <= w){
        cout<<"YES";
        return 0;
    }
    if (a3 <= k && b3 <= w){
        cout<<"YES";
        return 0;
    }

    if ((b1 + b2 <= w || b1 + b3 <= w || b2 + b3 <= w || b1 + b2 + b3 <= w) 
    && (a1 + a2 <= k || a1 + a3 <= k || a2 + a3 <= k || a1 + a2 + a3 <= k)){
        cout<<"YES";
    }  
    else{
        cout<<"NO";
    }
}
