#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int number, suma = 0;
    cin >> number;

    while (number > 0) {
        suma += number % 10;  
        number /= 10;        
    }

    cout << suma; 

    return 0;
}