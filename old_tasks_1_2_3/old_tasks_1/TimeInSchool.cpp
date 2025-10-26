#include <iostream>

using namespace std;

int main()
{
    int lessonQuantity, lessonTime, pauseTime, pause, ant;
    cin>>lessonQuantity>>lessonTime>>pauseTime;

    pause = lessonQuantity - 2;

    ant = lessonQuantity * lessonTime + pause * pauseTime + 30;

    cout<<ant;

    return 0;
}