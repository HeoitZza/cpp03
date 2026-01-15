#include <iostream>

class Outer {
private:
    int outerData;
public:
    Outer() : outerData(10) {}

    // Nested Class: Outer 내부에서만 의미를 가짐
    class Inner {
    public:
        void display() {
            std::cout << "이것은 중첩 클래스의 함수입니다.\n";
        }
    };
};

int main() {
    Outer::Inner innerObj; // 계층 구조를 통한 접근
    innerObj.display();
    return 0;
}