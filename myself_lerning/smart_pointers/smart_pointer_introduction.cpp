#include <memory>
#include <iostream>
using namespace std;

struct Player {
    Player()  { cout << "created\n"; }
    ~Player() { cout << "destroyed\n"; }
    void hello() const { cout << "hi\n"; }
};

int main() {
    auto p = make_unique<Player>();  // создаём
    p->hello();                           // используем как обычный указатель

    // auto p2 = p;                       // ОШИБКА: копировать нельзя
    auto p2 = move(p);                    // владение перешло к p2
    // p теперь nullptr

}   // здесь p2 уничтожается и сам вызывает delete
// это вам не сервера 