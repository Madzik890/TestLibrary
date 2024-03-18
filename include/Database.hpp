#ifndef DATABASE_HPP
#define DATABASE_HPP

#include "IDatabase.hpp"
#include <map>

namespace TestLib
{
  class Database final : public IDatabase
  {
    public:
      Database() = default;

    public:
      void writeData(const std::string &key, const std::string &value) noexcept override;
      void writeData(const std::string &key, std::string &&value) noexcept override;
      std::string getData(const std::string &key) const override;
      void clearDatabase() noexcept override;

    private:
      std::map<std::string, std::string> mMap;
  };
}

#endif