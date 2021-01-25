#include <filesystem>
#include <string>
#include <iostream>
#include <unordered_map>
#include <map>
#include "md5.hpp"
namespace askr
{
  class find : public std::filesystem::path
  {
  public:
    // find();
    find(const std::basic_string<value_type> &s) : std::filesystem::path(s){};

    bool init()
    {
      for (auto &_path : std::filesystem::recursive_directory_iterator(this->native()))
      {
        if (std::filesystem::is_directory(_path))
          continue;
        else
        {
          askr::hash phash;
          // std::cout<<phash.get_md5hash(_path.path().native())<<std::endl;
          summary[_path.path().native()] = phash.get_md5hash(_path.path().native());
        }
      }
      return true;
    }

  public:
    std::map<std::string, std::string> summary;
  };

} // end namespace askr