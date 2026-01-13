#include <iostream>

namespace Graphic {
    void draw() { std::cout << "Graphic draw\n"; }
}

namespace Physics {
    void draw() { std::cout << "Physics draw\n"; }
}

int main() {
    using namespace Graphic;
    draw(); // Graphic::draw 호출
    Physics::draw(); // 명시적 호출
    return 0;
}