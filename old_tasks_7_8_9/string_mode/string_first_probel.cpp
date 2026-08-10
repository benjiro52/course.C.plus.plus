#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string a;
    getline(cin, a);

    for (int i = 0; i < a.size(); i ++) {
        if (a[i] == ' ') {
            cout << i + 1;
            return 0;
        }
    }
}