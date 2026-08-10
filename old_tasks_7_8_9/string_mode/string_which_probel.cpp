#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    int j = 0;
    int probel;

    getline(cin, text);
    cin >> probel;

    for (int i = 0; i < text.size(); i++) {
        if (text[i] == ' ') {
            j++;
        }
        if (j == probel) {
            cout << i + 1;
            return 0;
        }
    }

    cout << "0";
}