#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    Point(int x, int y) : x(x), y(y) {}

    // 전역 함수인 operator<< 가 Point의 private 멤버에 접근할 수 있도록 허용
    friend std::ostream& operator<<(std::ostream& os, const Point& p);
};

// 외부 함수 정의
std::ostream& operator<<(std::ostream& os, const Point& p) {
    // friend가 없다면 p.x, p.y 접근 시 컴파일 에러 발생
    os << "(" << p.x << ", " << p.y << ")";
    return os;
}

int main() {
    Point pt(10, 20);
    std::cout << "좌표 출력: " << pt << std::endl; 
    return 0;
}