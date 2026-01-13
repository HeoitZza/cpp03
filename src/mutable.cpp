#include <iostream>
#include <string>

class ScrollView {
private:
    std::string content;
    // const 함수에서도 수정 가능하게 함
    mutable int accessCount; 

public:
    ScrollView(std::string text) : content(text), accessCount(0) {}

    // const 함수: 객체의 주 데이터를 바꾸지 않겠다고 약속함
    void display() const {
        std::cout << "Content: " << content << std::endl;
        
        // 하지만 mutable 변수는 수정 가능!
        accessCount++; 
        std::cout << "Viewed " << accessCount << " times." << std::endl;
    }

    int getCount() const { return accessCount; }
};

int main() {
    const ScrollView myView("Hello World");
    
    // 객체가 const 임에도 불구하고 display() 호출 가능
    myView.display();
    myView.display();

    return 0;
}