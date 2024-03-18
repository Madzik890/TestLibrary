#include <algorithm>
#include <iostream>
#include <Sort.hpp>
#include <stdexcept>
#include <vector>

static constexpr const auto CONTAINERS_SIZE = 100;

template<typename T>
[[deprecated("not implemented")]]void Generate(T &t) 
{
  throw std::runtime_error("Not implemented");
}

int main()
{
  {
    std::cout << "--------------------------------------------" << std::endl;
    std::vector<int> vec1 = {CONTAINERS_SIZE};
    Generate(vec1);

    std::cout << "Vector1 przed sortowaniem:" << std::endl;
    TestLib::printContainer(vec1);

    //posortuj vector 


    std::cout << "Vector1 po sortowaniu: " << std::endl;
    TestLib::printContainer(vec1);
    std::cout << "--------------------------------------------" << std::endl;
  }

  {
    std::cout << "--------------------------------------------" << std::endl;
    std::vector<int> vec2 = {CONTAINERS_SIZE};
    Generate(vec2);

    std::cout << "Vector2 przed sortowaniem:" << std::endl;
    TestLib::printContainer(vec2);

    //posortuj vector w sposób nieblokujący

    std::cout << "Vector2 po sortowaniu: " << std::endl;
    TestLib::printContainer(vec2);
    std::cout << "--------------------------------------------" << std::endl;
  } 

  {
    std::cout << "--------------------------------------------" << std::endl;
    std::vector<int> vec3 = {CONTAINERS_SIZE};
    Generate(vec3);

    std::cout << "Vector3 przed sortowaniem:" << std::endl;
    TestLib::printContainer(vec3);

    //dlaczego nie sortuje?
    auto task = TestLib::delayedSort<std::vector<int>>();
    auto future = task.get_future();
    
    std::cout << "Vector3 po sortowaniu: " << std::endl;
    TestLib::printContainer(vec3);
    std::cout << "--------------------------------------------" << std::endl;
  }

  return 0;
}