#include <iostream>

using namespace std;

int main()
{
    int prime_number, times, ant = 0;
    cin >> prime_number >> times;

    for (int i = 0; i < times; i ++) {
        prime_number *= prime_number;
        //cout << prime_number << endl;
        prime_number %= 1000;
        //cout << prime_number << endl;
    }   
    cout << prime_number;
}