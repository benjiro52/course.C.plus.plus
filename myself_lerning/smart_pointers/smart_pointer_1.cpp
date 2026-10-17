#include <iostream>
#include <memory>
using namespace std;

int main() {
    unique_ptr<int> ptr1(new int(1));
    unique_ptr<int> ptr2 = make_unique<int>(2);
    unique_ptr<int[]> ar = make_unique<int[]>(10);

    // все это место в памяти
    cout << ptr1 << "\n";
    cout << ptr2 << "\n";
    cout << ar << "\n";
}