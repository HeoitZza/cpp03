#include <iostream>

class Player {
public:
    void attack() { std::cout << "Player Attack!\n"; }
    void defend() { std::cout << "Player Defend!\n"; }
};

int main() {
    // 멤버 함수 포인터 선언
    void (Player::*actionPtr)();
    
    Player p;
    actionPtr = &Player::attack; // attack 함수 주소 대입
    (p.*actionPtr)();            // .* 연산자로 호출
    
    actionPtr = &Player::defend; // defend 함수 주소 대입
    (p.*actionPtr)();
    
    return 0;
}