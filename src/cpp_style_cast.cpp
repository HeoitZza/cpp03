#include <iostream>

class Base { public: virtual ~Base() {} };
class Derived : public Base { public: void ghost() {} };

int main() {
    // 1. static_cast: 논리적으로 변환 가능한 타입 (가장 많이 쓰임)
    double d = 3.14;
    int i = static_cast<int>(d);

    // 2. const_cast: const 성분을 일시적으로 제거
    const int readOnly = 10;
    int* writable = const_cast<int*>(&readOnly);

    // 3. dynamic_cast: 상속 관계에서 안전한 다운캐스팅 (실패 시 NULL 반환)
    Base* b = new Derived();
    Derived* dr = dynamic_cast<Derived*>(b);
    if (dr) std::cout << "Downcast success!" << std::endl;

    // 4. reinterpret_cast: 포인터간의 강제 비트 변환 (위험함)
    long addr = reinterpret_cast<long>(b);

    delete b;
    return 0;
}