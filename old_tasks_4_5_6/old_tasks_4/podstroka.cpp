#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    int a, b;
    cin >> text >> a >> b;

    a--;
    b--;
    text = text.substr(a, b - a + 1);
    cout << text.size() + 1 << endl;

    for (int i = 1; i < text.size(); i++) {
        cout << text.substr(i) << endl;
    }
    
    return 0;
}