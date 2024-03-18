#include <iostream>

#include "Database.hpp"

int main()
{
  TestLib::Database* database = new TestLib::Database;

  std::string a = "jeden";
  std::string b = "dwa";  

  {//zapisz dane do bazy a:123, b:321, c:hsdf
    std::string c = "trzy";
  }

  std::cout << "Klucz a = " << a << std::endl;
  std::cout << "Klucz b = " << b << std::endl;

  {//odczytaj i wyświetl dane dla klucza a, b, c, d    
  } 

  database->clearDatabase();

  return 0;
}