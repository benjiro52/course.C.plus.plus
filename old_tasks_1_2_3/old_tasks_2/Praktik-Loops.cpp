#include <iostream>

using namespace std;

int main()
{
    int number = 1000;

    while (number <= 9999) 
    {
        int a = number / 1000; 
        int b = number % 1000 / 100;
        int c = number % 1000 % 100 / 10;
        int d = number % 10;
        if (b == 0 || c == 0 || d == 0){
            number ++;
        }
        else if (number % a == 0 && number % b == 0 && number % c == 0 && number % d == 0){
            cout << number << " ";
            number ++;
        }
        else {
            number ++;
        }
    }
    return 0;
}