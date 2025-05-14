#include <iostream>

class Silent 
{
public:
    ~Silent() 
    {
        std::cout << "Destructor called\n";
    }
};

void func() 
{
    Silent s;
    throw 42;
}

int main() 
{
    try 
    {
        func();
    } 
    catch (...) 
    {
        std::cout << "Caught exception\n";
    }
    return 0;
}