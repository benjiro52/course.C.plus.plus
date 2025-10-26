#include <bits/stdc++.h>

using namespace std;

int main()
{
    for (int i = 1000;i <= 9999;i ++)
    {
        int a = i / 1000 % 10;
        int d = i % 10;
        int b = i / 100  % 10;
        int c = i / 10 % 10;
        
        if (a == d && b == c){
            cout << i << " ";
        }
    }
    return 0;
}