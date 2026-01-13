#include <iostream>

class Animal {
public:
    int age;
    Animal() : age(0) {}
    void eat() { std::cout << "Animal eats" << std::endl; }
};

// virtual 키워드를 사용하여 Animal을 공유함
class Herbivore : public virtual Animal {
public:
    void graze() { std::cout << "Eats grass" << std::endl; }
};

class Mammal : public virtual Animal {
public:
    void breathe() { std::cout << "Breathes air" << std::endl; }
};

// 가상 상속 덕분에 Cow 내부에는 Animal 객체가 하나만 존재함
class Cow : public Herbivore, public Mammal {
public:
    void info() {
        // 가상 상속이 아니었다면 age가 Herbivore::age인지 Mammal::age인지 모호함(Ambiguous)
        age = 5; 
        std::cout << "Cow age: " << age << std::endl;
    }
};

int main() {
    Cow c;
    c.eat(); // Animal의 멤버에 직접 접근 가능
    c.info();
    return 0;
}