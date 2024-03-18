#include "Database.hpp"
#include <stdexcept>

using namespace TestLib;

void Database::writeData(const std::string &key, const std::string &value) noexcept
{
  mMap[key] = value;
}

void Database::writeData(const std::string &key, std::string &&value) noexcept
{
  mMap[key] = std::move(value);
}

std::string Database::getData(const std::string &key) const
{
  const auto iterator = mMap.find(key);
  if(iterator == mMap.cend()) throw std::logic_error("key doesn't exist");
  return (*iterator).second;
}

void Database::clearDatabase() noexcept
{
  for(const auto &value : mMap)
  {
    mMap.erase(value.first);
  }
}