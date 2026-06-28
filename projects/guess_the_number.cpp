#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    
    int x = rand() % 100 + 1;
    int ant;
    int att;

    cout << "GUESS THE NUMBER\n";

    do {
        cin >> ant;
        att++;

        if (ant > x) {
            cout << "to much\n";
        }

        if (ant < x) {
            cout << "to little\n";
        }
        
        if (ant == x) {
            cout << "you are right!!!!!\n";
        }
    } while (ant != x);

    cout << "attempts - " << att << endl;
    return 0;
}   