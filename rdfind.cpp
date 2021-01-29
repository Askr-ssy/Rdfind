#include <iostream>
#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <filesystem>
#include <cassert>
#include <unistd.h>

#include "find.hpp"
#include "md5.hpp"

int main(int argc, char *argv[])
{
  getopt(argc,argv)
      assert(std::filesystem::is_directory(argv[1]) && "the path is not directory");

  askr::find find{argv[1]};
  std::cout << "root path is " << find.c_str() << std::endl;
  find.init();
  for (auto &var : find.summary)
  {
    std::cout << var.second << " " << var.first << std::endl;
  }

  std::cout << "done" << std::endl;
  return 0;
}