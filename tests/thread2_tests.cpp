#include <iostream>
#include <thread>

static constexpr const auto LOOP = 100;

static int value = 0;

void read()
{
  for(int i = 0; i < LOOP; i++)
  {
    std::cout << i << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
}

void write()
{
  for(int i = 0; i < LOOP; i++)
  {
    value++;
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
}


int main()
{
  std::thread readThread(&read);
  std::thread write1Thread(&write);
  std::thread write2Thread(&write);
  std::thread write3Thread(&write);

  readThread.join();
  write1Thread.join();
  write2Thread.join();
  write3Thread.join();
  return 0;
}