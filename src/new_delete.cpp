#include <iostream>

class Target {
public:
    Target() { std::cout << "생성자 호출\n"; }
    ~Target() { std::cout << "소멸자 호출\n"; }
};

int main() {
    Target* ptr = new Target(); // 메모리 할당 + 생성자
    delete ptr;                // 소멸자 + 메모리 해제
    return 0;
}