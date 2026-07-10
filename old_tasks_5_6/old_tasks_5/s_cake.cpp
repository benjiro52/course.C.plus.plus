#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int all = a + b;
    int с = sqrt(all);

    if (all % 2 != 0) {
        cout << "-1";
        return 0;
    }
    
    if (с * с == all) {
        cout << с << " " << с;
    } else {
        cout << с << " " << с + 1;
    }      
    return 0;
}
