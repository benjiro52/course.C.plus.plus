#include <iostream>

using namespace std;

int main()
{
    int bro1, bro2, s1, s2;
    cin >> bro1 >> s1 >> bro2 >> s2;

    cout << max(bro1, bro2) << " " << max(s1, s2);

    return 0;
}