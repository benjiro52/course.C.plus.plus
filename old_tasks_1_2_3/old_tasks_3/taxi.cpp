#include <iostream>

using namespace std;

int main()
{
    int taxi1, taxi2, taxi3, ant;
    cin >> taxi1 >> taxi2 >> taxi3;

    int all_people = taxi1 + taxi2 + taxi3;

    if (all_people % 3 != 0) {
        cout << "IMPOSSIBLE";
    } else {
        int new_people = all_people / 3;
        // int a =max(0, taxi1 - new_people), b =max(0, taxi2 - new_people), c =max(0, taxi3 - new_people);
        // if (a < 0) a ++;
        // if (b < 0) b ++;
        // if (c < 0) c ++;
        ant = (abs(taxi1 - new_people) + abs(taxi2 - new_people) + abs(taxi3 - new_people)) / 2;
        cout << ant;
    }

    return 0;
}