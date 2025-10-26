#include <iostream>

using namespace std;

int main() 
{
    long long S; 
    int N; 
    cin >> S >> N;

    long long weight_rucksack = 0; 
    long long weight_suitcase = 0; 

    for (int i = 0; i < N; ++i) {
        long long item_weight;
        cin >> item_weight;

        if (weight_rucksack + item_weight <= S) {
            weight_rucksack += item_weight;
        } else {
            weight_suitcase += item_weight;
        }
    }

    cout << weight_rucksack << " " << weight_suitcase << endl;

    return 0;
}