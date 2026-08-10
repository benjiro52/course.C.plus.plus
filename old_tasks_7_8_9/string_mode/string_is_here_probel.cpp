#include <iostream>
#include <string>

using namespace std;

int main()
{   
    int j = 0;
    string a;
    getline(cin, a);

    for (int i = 0; i < a.size(); i++) {
        int b = a[i];
        if (b == ' '){
            j++;
        }
    }
    cout << j;
}