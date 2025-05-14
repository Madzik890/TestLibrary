#include <iostream>

class Ghost 
{
public:
    Ghost() {
        std::cout << "Born\n";
    }
    ~Ghost() {
        std::cout << "Gone\n";
    }
};

void spooky() 
{
    Ghost* g1 = new Ghost();
    Ghost g2;
    return;
}

int main() 
{
    spooky();
    std::cout << "Done\n";
    return 0;
}