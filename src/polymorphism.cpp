#include <iostream>
#include <typeinfo> // typeid 사용을 위해 필요

class Base {
public:
    virtual void speak() { std::cout << "Base\n"; } // virtual: 동적 바인딩
    virtual ~Base() {}
};

class Dog : public Base {
public:
    void speak() override { std::cout << "Woof!\n"; }
};

int main() {
    Base* ptr = new Dog(); // Class 상속 + New

    // typeid: 런타임에 실제 객체의 타입을 식별
    if (typeid(*ptr) == typeid(Dog)) {
        std::cout << "이 객체는 Dog 타입입니다.\n";
    }

    ptr->speak(); // virtual 덕분에 Dog::speak 호출
    delete ptr;
    return 0;
}