#include <iostream>
#include <string>

class Shape {
protected: // 자식에게는 허용, 외부에서는 차단
    std::string color;
public:
    Shape(std::string c) : color(c) {}
    virtual void draw() { std::cout << "Drawing a shape color: " << color << std::endl; }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(std::string c, double r) : Shape(c), radius(r) {}
    
    // 부모의 draw를 재정의 (Overriding)
    void draw() { 
        std::cout << "Drawing a " << color << " circle with radius " << radius << std::endl; 
    }
};

int main() {
    Shape* s = new Circle("Red", 5.5);
    s->draw(); // virtual 덕분에 Circle의 draw가 호출됨 (다형성)
    delete s;
    return 0;
}