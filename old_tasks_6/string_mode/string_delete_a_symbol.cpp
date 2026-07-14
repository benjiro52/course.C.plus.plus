#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    int n, m;

    getline(cin, text);
    cin >> n >> m;

    text.erase(n - 1, m - n + 1);

    cout << text << endl;

    return 0;
}