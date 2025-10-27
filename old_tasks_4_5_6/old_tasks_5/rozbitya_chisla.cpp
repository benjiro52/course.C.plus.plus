#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string n;
    cin >> n;

    string ant = "";
    int a = 0;

    for (int i = n.size() - 1; i >= 0; i--) {
        ant = n[i] + ant; 
        a++;
        if (a % 3 == 0 && i != 0) {
            ant = "," + ant;
        }
    }

    cout << ant;

    return 0;
}