#include <iostream>

// 1. 매개변수의 개수가 다른 경우
void printInfo(int age) {
    std::cout << "나이: " << age << std::endl;
}

void printInfo(int age, double height) {
    std::cout << "나이: " << age << ", 키: " << height << std::endl;
}

// 2. 매개변수의 타입이 다른 경우
void display(int i) {
    std::cout << "정수 출력: " << i << std::endl;
}

void display(const char* s) {
    std::cout << "문자열 출력: " << s << std::endl;
}

int main() {
    printInfo(25);              // 첫 번째 printInfo 호출
    printInfo(25, 175.5);       // 두 번째 printInfo 호출

    display(100);               // display(int) 호출
    display("Hello C++");       // display(const char*) 호출

    return 0;
}