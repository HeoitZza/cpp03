#include <iostream>

class Animal {
public:
    virtual ~Animal() {}
    virtual Animal* clone() const {
        return new Animal(*this);
    }
    virtual void speak() const { std::cout << "알 수 없는 소리" << std::endl; }
};

class Dog : public Animal {
public:
    // override 키워드를 삭제했습니다. C++03에서도 작동합니다.
    Dog* clone() const { 
        return new Dog(*this);
    }
    void speak() const { std::cout << "멍멍!" << std::endl; }
    void wagTail() const { std::cout << "꼬리 흔들기" << std::endl; }
};

int main() {
    Dog* myDog = new Dog();
    
    // C++03에서도 공변 반환 덕분에 Dog*로 바로 받을 수 있습니다.
    Dog* clonedDog = myDog->clone(); 
    
    clonedDog->speak();
    clonedDog->wagTail();

    delete myDog;
    delete clonedDog;
    return 0;
}