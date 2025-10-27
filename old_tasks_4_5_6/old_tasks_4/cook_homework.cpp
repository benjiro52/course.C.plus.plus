#include <iostream>

using namespace std;

int main()
{
    int start, homework_time, homework_before;
    cin >> start >> homework_time >> homework_before;

    if (homework_time - homework_before > start) {
        cout << "NO";
    } else {
        cout << "YES";
    }

    return 0;
}