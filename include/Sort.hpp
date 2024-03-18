#ifndef TEST_LIBRARY_SORT_HPP
#define TEST_LIBRARY_SORT_HPP

#include <future>
#include <algorithm>
#include <iostream>

namespace TestLib
{  
  template<typename T>
  inline void sort(T &t) { std::sort(t.begin(), t.end()); }

  template<typename T>
  inline std::future<void> nonBlockingSort(T &t) { return std::async([&t](){ TestLib::sort(t); }); }

  template<typename T>
  inline std::packaged_task<void(T &t)> delayedSort() { return std::packaged_task<void(T &t)>([](T &t){ TestLib::sort(t); } ); }

  template<typename T>
  inline void printContainer(const T &t) { std::for_each(t.cbegin(), t.cend(), [](const auto &value){ std::cout << value << std::endl; }); };

}

#endif