#include <iostream>

int main() {
    bool isReady = true;    // 1바이트 할당 (값: 1)
    bool isFinished = false; // 1바이트 할당 (값: 0)

    if (isReady) {
        std::cout << "준비 완료" << std::endl;
    }
    return 0;
}