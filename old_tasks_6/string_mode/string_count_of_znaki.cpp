#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    char a = '.', b = ',', c = '!', d = ':', e = ';';
    int count = 0;
    getline(cin, text);

    for (int i = 0; i < text.size(); i++) {
        if (text[i] == a || text[i] == b || text[i] == c || text[i] == d || text[i] == e) {
            count++;
        }
    }

    cout << count;
}