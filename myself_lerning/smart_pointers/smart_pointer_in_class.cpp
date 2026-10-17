#include <iostream>
#include <memory>
using namespace std;

class Foo {
private:
    unique_ptr<int[]> ar; // создается массив
    int size;
public:
    Foo(unsigned int n) : size(n) {
        ar = make_unique<int[]>(n); // задается размер

        for (int i = 0; i < n; i++) {
            ar[i] = i;
        }
    }

    void print() {
        for (int i = 0; i < size; i++) {
            cout << ar[i] << " ";
        }
    }
};

int main()
{
    Foo f(10);
    f.print();
}