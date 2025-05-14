#include <iostream>

class Animal 
{
public:
    Animal() {}
    ~Animal() {
        std::cout << "Animal destroyed\n";
    }
};

class Dog : public Animal 
{
public:
    Dog() {}
    ~Dog() {
        std::cout << "Dog destroyed\n";
    }
};

void destroy(Animal* a) 
{
    delete a;
}

int main() 
{
    Animal* a = new Dog();
    destroy(a);
    return 0;
}