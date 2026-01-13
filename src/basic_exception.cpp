#include <iostream>

double divide(double a, double b) {
    if (b == 0) throw "0으로 나눌 수 없습니다!"; // 예외 던지기
    return a / b;
}

int main() {
    try {
        std::cout << divide(10, 0) << std::endl;
    } catch (const char* msg) { // 예외 잡기
        std::cerr << "에러 발생: " << msg << std::endl;
    }
    return 0;
}