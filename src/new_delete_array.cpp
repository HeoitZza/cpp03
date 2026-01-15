#include <iostream>

class SimpleItem {
public:
    SimpleItem() { }  // 생성자: 배열 할당 시 반복 호출됨
    ~SimpleItem() { } // 소멸자: 배열 해제 시 반복 호출됨
};

int main() {
    // 1. New[]: (객체크기 * 5) + Cookie(8바이트) 만큼 할당
    SimpleItem* items = new SimpleItem[5]; 

    // 2. Delete[]: 메모리 앞의 Cookie를 읽어 5번 반복하며 소멸자 호출
    delete[] items; 
    return 0;
}