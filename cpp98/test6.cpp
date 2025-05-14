#include <iostream>
#include <cstring>

class Buffer 
{
    char* data;
public:
    Buffer(const char* input) 
    {
        data = new char[strlen(input) + 1];
        strcpy(data, input);
    }

    void print() 
    {
        std::cout << data << std::endl;
    }

    ~Buffer() 
    {
        delete[] data;
    }
};

void process(Buffer b) 
{
    b.print();
}

int main() 
{
    Buffer b1("Hello, world!");
    process(b1);
    return 0;
}