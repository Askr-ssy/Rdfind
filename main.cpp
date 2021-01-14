#include <iostream>
#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <boost/filesystem.hpp>

#include <find.hpp>
#include "md5.hpp"

int main(int argc, char *argv[])
{
  assert(boost::filesystem::is_directory(argv[1]) && "the path is not directory");

  askr::find find{argv[1]};
  std::cout << "root path is " << find.c_str() << std::endl;
  // askr::find find = new find(argv[1]);
  u_int32_t num = 0;
  for (auto &_path : boost::filesystem::recursive_directory_iterator(find))
  {
    ++num;
    if (boost::filesystem::is_directory(_path))
      continue;
    else
    {
      askr::hash phash;

      std::cout << "file is " << _path.path() << std::endl;
      std::cout<<"md5 is " << phash.get_md5hash(_path.path().native())<<std::endl;

      std::cout << "_filesize is " << boost::filesystem::file_size(_path.path()) << std::endl;
    }
  }
  // std::cout << "filesize is " << boost::filesystem::file_size(argv[0]) << std::endl;
  std::cout << "num is " << num << std::endl;
  std::cout << "done" << std::endl;
  return 0;
}

// using boost::uuids::detail::md5;

// std::string toString(const md5::digest_type &digest)
// {
//     const auto charDigest = reinterpret_cast<const char *>(&digest);
//     std::string result;
//     boost::algorithm::hex(charDigest, charDigest + sizeof(md5::digest_type), std::back_inserter(result));
//     return result;
// }

// int main ()
// {
//     std::string s;

//     while(std::getline(std::cin, s)) {
//         md5 hash;
//         md5::digest_type digest;

//         hash.process_bytes(s.data(), s.size());
//         hash.get_digest(digest);

//         std::cout << "md5(" << s << ") = " << toString(digest) << '\n';
//     }

//     return 0;
// }