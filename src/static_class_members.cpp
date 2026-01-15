#include <iostream>

class GlobalCounter {
public:
    static int count;          // 정적 변수: 특정 객체가 아닌 메모리 고정 위치에 존재
    static void addCount() {   // 정적 함수: this 포인터(RDI)를 인자로 받지 않음
        count++;
    }
};

int GlobalCounter::count = 0;  // 외부 정의 (바이너리상에서 초기값 0으로 설정됨)

int main() {
    GlobalCounter::addCount(); // 객체 생성 없이 클래스 이름으로 직접 호출
    return 0;
}