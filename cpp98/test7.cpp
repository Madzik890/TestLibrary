#include <iostream>

class Animal 
{
public:
    virtual void speak() const { std::cout << "Animal\n"; }
};

class Cat : public Animal 
{
public:
    void speak() const { std::cout << "Meow\n"; }
};

void saySomething(Animal a) 
{
    a.speak();
}

int main() 
{
    Cat c;
    saySomething(c);
    return 0;
}