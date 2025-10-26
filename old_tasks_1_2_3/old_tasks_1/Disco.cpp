#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, antwort, minimum = 0;
    cin >> a >> b >> c;

    minimum = min({a, b / 2, c});

    a = a - minimum;
    b = b - minimum * 2;
    c = c - minimum;

   if (a == 0) {
      cout << minimum * 4;
      return 0;
    } else if (b == 0) {
     cout << minimum * 4 + 1;
     return 0;
    } else if (c == 0) {
        cout << minimum * 4 + 2;
        return 0;
    } else {
     cout << minimum * 4 + 3;
     return 0;
    }
}