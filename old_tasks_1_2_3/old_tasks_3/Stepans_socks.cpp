#include <iostream>

using namespace std;

int main() 
{
    int k, s, ant = 0;
    cin >> k >> s; 
    int socks[s];  

    for (int i = 0; i < s; i++) {
        cin >> socks[i];
    }

    for (int i = 0; i < s; i++) {
        if (socks[i] < k) {
            ant = ant + socks[i];
        } else {
            ant = ant + k - 1 ;
        }
    }
    ant ++;
    cout << ant;
    return 0;
}
