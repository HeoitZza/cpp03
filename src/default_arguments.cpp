#include <iostream>

// 오른쪽 매개변수부터 채워야 함
void displayLog(const char* message, int level = 1, const char* prefix = "LOG") {
    std::cout << "[" << prefix << " - Level " << level << "] " << message << std::endl;
}

int main() {
    displayLog("System started");                 // level=1, prefix="LOG" 사용
    displayLog("Connection lost", 3);             // prefix="LOG" 사용
    displayLog("Disk full", 5, "CRITICAL");       // 모든 인자 직접 전달
    
    return 0;
}