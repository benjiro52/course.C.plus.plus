#include <iostream>

using namespace std;

int main()
{
    int children;
    cin >> children;

    int three_room = children / 3;        
    int ost = children % 3;        

    if (ost == 1) {
        three_room -= 1;
        ost += 3;
    }

    int two_room = ost / 2;

    cout << two_room << " " << three_room;
    
    return 0;
}
