#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int cards[number];

    for (int i = 0; i < number; i++) {
        cin >> cards[i];
    }

    sort(cards, cards + number);

    int player = 0, diler = 0;

    for (int i = 0; i < number / 2; i++) {
        diler += cards[i];
    }
    for (int i = number / 2; i < number; i++) {
        player += cards[i];
    }

    cout << player - diler;

    return 0;
}