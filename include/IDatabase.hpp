#ifndef IDATABASE_HPP
#define IDATABASE_HPP

#include <string>

namespace TestLib 
{
  class IDatabase 
  {
    public:
      IDatabase() = default;
      virtual ~IDatabase() = default;

    public:
      virtual void writeData(const std::string &key, const std::string &value) noexcept = 0;
      virtual void writeData(const std::string &key, std::string &&value) noexcept = 0;
      virtual std::string getData(const std::string &key) const = 0;
      virtual void clearDatabase() noexcept = 0;
  };
}

#endif