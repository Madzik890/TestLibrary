#include <iostream>

class Confuse 
{
public:
    int x;
    Confuse(int x = 0) : x(x) {}
    
    Confuse operator+(Confuse other) {
        Confuse result;
        result.x = this->x - other.x;
        return result;
    }
};

int main() 
{
    Confuse a(10), b(4);
    Confuse c = a + b;
    std::cout << c.x << std::endl;
    return 0;
}