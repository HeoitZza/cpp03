#include <iostream>

class Point {
private:
    int x, y;

public:
    Point(int x = 0, int y = 0) : x(x), y(y) {}

    // + 연산자 오버로딩
    Point operator+(const Point& other) const {
        return Point(this->x + other.x, this->y + other.y);
    }

    // << 연산자 오버로딩 (전역 함수 형태)
    friend std::ostream& operator<<(std::ostream& os, const Point& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }

    void print() const {
        std::cout << x << ", " << y << std::endl;
    }
};

int main() {
    Point p1(1, 2);
    Point p2(3, 4);

    // 내부적으로는 p1.operator+(p2) 로 호출됨
    Point p3 = p1 + p2; 

    std::cout << "Result: " << p3 << std::endl;
    return 0;
}