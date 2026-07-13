#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, p, m, g;
    cin >> a >> b >> c >> d >> p >> m >> g;

    int postman = 0;
    if (p % (a + b) <= a && p % (a + b) != 0) postman++;
    if (p % (c + d) <= c && p % (c + d) != 0) postman++;

    int milkman = 0;
    if (m % (a + b) <= a && m % (a + b) != 0) milkman++;
    if (m % (c + d) <= c && m % (c + d) != 0) milkman++;

    int garbage = 0;
    if (g % (a + b) <= a && g % (a + b) != 0) garbage++;
    if (g % (c + d) <= c && g % (c + d) != 0) garbage++;

    cout << postman << endl;
    cout << milkman << endl;
    cout << garbage;

    return 0;
}