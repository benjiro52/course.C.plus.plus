#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int a = number / 1000;
    int b = number / 100 % 10;
    int c = number / 10 % 10 ;
    int d = number % 10;

    int ans[24];
    ans[0] = a * 1000 + b * 100 + c * 10 + d;
    ans[1] = a * 1000 + b * 100 + d * 10 + c;
    ans[2] = a * 1000 + c * 100 + b * 10 + d;
    ans[3] = a * 1000 + c * 100 + d * 10 + b;
    ans[4] = a * 1000 + d * 100 + b * 10 + c;
    ans[5] = a * 1000 + d * 100 + c * 10 + d;

    ans[6] = b * 1000 + a * 100 + c * 10 + d;
    ans[7] = b * 1000 + a * 100 + d * 10 + c;
    ans[8] = b * 1000 + b * 100 + a * 10 + d;
    ans[9] = b * 1000 + b * 100 + d * 10 + b;
    ans[10] = b * 1000 + d * 100 + a * 10 + c;
    ans[11] = b * 1000 + d * 100 + c * 10 + d;

    ans[12] = c * 1000 + a * 100 + b * 10 + d;
    ans[13] = c * 1000 + a * 100 + d * 10 + c;
    ans[14] = c * 1000 + b * 100 + a * 10 + d;
    ans[15] = c * 1000 + b * 100 + d * 10 + a;
    ans[16] = c * 1000 + d * 100 + a * 10 + b;
    ans[17] = c * 1000 + d * 100 + b * 10 + a;

    ans[18] = d * 1000 + a * 100 + b * 10 + c;
    ans[19] = d * 1000 + a * 100 + c * 10 + b;
    ans[20] = d * 1000 + b * 100 + a * 10 + c;
    ans[21] = d * 1000 + b * 100 + c * 10 + a;
    ans[22] = d * 1000 + c * 100 + a * 10 + b;
    ans[23] = d * 1000 + c * 100 + b * 10 + a;

    for (int i=0; i<24; i++)
     cout<<ans[i]<<" ";

    return 0;
}