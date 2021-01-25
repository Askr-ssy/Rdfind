#include <iostream>
#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>
#include<filesystem>
#include <cassert>

#include "find.hpp"
#include "md5.hpp"

int main(int argc, char *argv[])
{
  assert(std::filesystem::is_directory(argv[1]) && "the path is not directory");

  askr::find find{argv[1]};
  std::cout << "root path is " << find.c_str() << std::endl;
  find.init();
  for(auto &var : find.summary)
  {
    std::cout<<var.second <<" "<<var.first<<std::endl; 
  }

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