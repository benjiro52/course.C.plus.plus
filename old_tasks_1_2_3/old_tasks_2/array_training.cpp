#include <iostream>

using namespace std;
 
int main()
{
    int students[] = {73, 85, 84, 44, 78};
    const int numStudents = sizeof(students) / sizeof(students[0]);

    cout << sizeof(students);

}