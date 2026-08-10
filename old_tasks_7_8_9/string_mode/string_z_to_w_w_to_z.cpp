#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    getline (cin, text);

    for (int i = 0; i < text.size(); i++) {
        if (text[i] == 'w') {
            text[i] = 'z';
        } else if (text[i] == 'z') {
            text[i] = 'w';
        }
        
    }
    cout << text;


    return 0;
}