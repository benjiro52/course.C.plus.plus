#include <iostream>

using namespace std;

int main()
{
    char h1, h2, h3, h4, h5;
    int f1, f2, f3, f4, f5;

    cin >> h1 >> f1 >> h2 >> f2 >> h3 >> f3 >> h4 >> f4 >> h5 >> f5;

    int max_height = f1;
    char tallest_name = h1; 

    if (f2 >= max_height) {
        max_height = f2;
        tallest_name = h2;
    }
    if (f3 >= max_height) { 
        max_height = f3; 
        tallest_name = h3; 
    }
    if (f4 >= max_height) { 
        max_height = f4; 
        tallest_name = h4; 
    }
    if (f5 >= max_height) { 
        max_height = f5; 
        tallest_name = h5; 
    }

    cout << tallest_name;

    return 0;
}
