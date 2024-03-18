#include <chrono>
#include <iostream>
#include <thread>

void changeValue(int &var, const int val)
{
  var = val;
}

int main()
{  
  int var = 123;
  int value = 69;
  
  std::cout << value << std::endl;
  //std::thread thread(&changeValue, var, value);
  //thread.join();
  std::cout << value << std::endl;

  return 0;
}