#include <iostream>

// inline 키워드: 호출 지점에 코드를 직접 박아넣음
inline int square(int x) {
    return x * x;
}

int main() {
    int a = 5;
    int result = square(a); // 함수 호출(call) 대신 'a * a' 로직이 직접 들어감
    std::cout << result << std::endl;
    return 0;
}