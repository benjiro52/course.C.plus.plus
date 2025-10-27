#include <iostream>

using namespace std;

int main()
{
    long long girls, boys;
    cin >> girls >> boys;

    long long max_teams = min(girls, boys); 
    max_teams = min(max_teams, (girls + boys) / 3);

    cout << max_teams;

    return 0;
}
