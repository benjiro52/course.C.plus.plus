#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    int j = 0;
    getline(cin, text);

    for (int i = 0; i < text.size(); i++) {
        if (!(text[i] >= 97 && text[i] <= 122 || text[i] >= 65 && text[i] <= 90)) {
            j++;
            if (text[i + 1] == ' ') {
                j--;
            }
        }
    }

    cout << j + 1;
}