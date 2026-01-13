#include <iostream>

// 함수 템플릿
template <typename T>
T Max(T a, T b) { return (a > b) ? a : b; }

// 클래스 템플릿
template <typename T>
class Wrapper {
    T value;
public:
    Wrapper(T v) : value(v) {}
    T get() { return value; }
};

int main() {
    std::cout << Max(10, 20) << " " << Max(3.14, 1.1) << std::endl;
    Wrapper<int> iVal(100);
    return 0;
}