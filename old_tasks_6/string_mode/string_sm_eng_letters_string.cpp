#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    int j = 0, a = 0, b = 0;
    getline(cin, text);

    for (int i = 0; i < text.size(); i++) {
        if (text[i] >= 97 && text[i] <= 122) {
            j++;
            a++;
            if (a > b) {
                b = a;
            }
            text.erase(i, 1);
            i--;
        } else {
            a = 0;
        }
    }

    cout << j << endl;
    cout << text << endl;
    cout << b;

    return 0;
}