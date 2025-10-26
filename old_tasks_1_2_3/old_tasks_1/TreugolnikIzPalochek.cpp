#include <iostream>

using namespace std;

int main()
{
    long long  a, b, c, ans, big, ostacha, suma;
    cin>>a>>b>>c;

  if (b > c)
    swap (b, c);
  if (a > b)
    swap (a, b);
  if (b > c)
    swap (b, c);

  cout << a - (c - b);

    return 0;
}


