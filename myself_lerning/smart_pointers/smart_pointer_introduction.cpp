#include <memory>
#include <iostream>

struct Player {
    Player()  { std::cout << "created\n"; }
    ~Player() { std::cout << "destroyed\n"; }
    void hello() const { std::cout << "hi\n"; }
};

int main() {
    auto p = std::make_unique<Player>();  // создаём
    p->hello();                           // используем как обычный указатель

    // auto p2 = p;                       // ОШИБКА: копировать нельзя
    auto p2 = std::move(p);               // владение перешло к p2
    // p теперь nullptr

}   // здесь p2 уничтожается и сам вызывает delete