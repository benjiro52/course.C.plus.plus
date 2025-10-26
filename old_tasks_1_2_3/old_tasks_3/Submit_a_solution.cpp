#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (b == 0) b ++;
    if (a == 0) a ++;
    if (c == 0) c ++;

    vector<int> example (16);

    example[0] = a + b + c;
    example[1] = a + b - c;
    example[2] = a + b * c;
    example[3] = a + b / c;

    example[4] = a - b + c;
    example[5] = a - b - c;
    example[6] = a - b * c;
    example[7] = a - b / c;

    example[8] = a * b + c;
    example[9] = a * b - c;
    example[10] = a * b * c;
    example[11] = a * b / c;

    example[12] = a / b + c;
    example[13] = a / b - c;
    example[14] = a / b * c;
    example[15] = a / b / c;

    int ant = 0;

    for (int i = 0; i != example.size(); i++) {
        cout << example[i] << endl;
        ant ++;
    } 


    cout << ant;
    
    return 0;
}