#include <iostream>

class Base 
{
public:
    void print() 
    {
        std::cout << "Base\n";
    }
};

class Derived : public Base 
{
public:
    void print() 
    {
        std::cout << "Derived\n";
    }
};

void call(Base* b) 
{
    b->print();
}

int main() 
{
    Derived d;
    call(&d);
    return 0;
}