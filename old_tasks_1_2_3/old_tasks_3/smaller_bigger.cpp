#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, s1, s2, s3;
    cin >> a >> b >> c >> d;

    s1 = a * b + c * d;
    s2 = a * d + b * c;
    s3 = a * c + b * d;

    cout <<max(s1, max(s2,s3));

    return 0;
}