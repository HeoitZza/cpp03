#include <iostream>

// 참조자를 통한 인자 전달 (포인터와 유사함)
void increment(int& ref) {
    ref = ref + 1;
}

int main() {
    int value = 10;
    increment(value); // 주소를 넘기는 문법(&value) 없이도 주소가 전달됨
    std::cout << value << std::endl;
    return 0;
}