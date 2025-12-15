#include <iostream>
#include <vector>

using namespace std;

int main() {
    //варианты записи
    vector<int> fuel1;
    vector<int> fuel2 (4);
    vector<int> fuel3 (4, 0);
    vector<int> fuel4 = {92, 95, 98, 100};
    // варианты вывода
    cout << fuel4[3] << endl << endl;
    cout << fuel4.at(3) << endl << endl;

    //варианты прохода вектора 
    for (int i = 0; i != fuel4.size(); i++) {
        cout << fuel4[i] << endl;
    }

    cout << endl;
    
    for (auto n : fuel4) {
        cout << n << endl; 
    }

    cout << endl;

    //добавления значения
    fuel4.push_back(105);
    for (auto n : fuel4) {
        cout << n << endl; 
    }

    cout << endl;
    
    //убрать значение
    fuel4.pop_back();
    for (auto n : fuel4) {
        cout << n << endl; 
    }

    return 0;
}