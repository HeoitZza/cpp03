#include <iostream>

class SystemInitializer {
public:
    SystemInitializer() { std::cout << "[Step 1] 시스템 사전 초기화 (Global)\n"; }
    ~SystemInitializer() { std::cout << "[Step 4] 시스템 자원 해제 (Global)\n"; }
};

SystemInitializer global_init; // main 이전에 실행됨

int main() {
    std::cout << "[Step 2] Main 함수 시작\n";
    std::cout << "[Step 3] Main 함수 종료\n";
    return 0;
}