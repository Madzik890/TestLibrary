#include <iostream>

class Base 
{
public:
    Base() 
    {
        speak();
    }
    virtual void speak() 
    {
        std::cout << "Base speaking\n";
    }
};

class Derived : public Base 
{
public:
    void speak() 
    {
        std::cout << "Derived speaking\n";
    }
};

int main() 
{
    Derived d;
    return 0;
}