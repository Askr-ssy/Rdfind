#include <iostream>
#include <string>

#include <boost/filesystem.hpp>

#include <find.hpp>

int main(int argc, char *argv[])
{
  assert(boost::filesystem::is_directory(argv[1]) && "the path is not directory");

  askr::find find{argv[1]};
  std::cout<<"root path is "<< find.root_path()<<std::endl;
  // askr::find find = new find(argv[1]);
  u_int32_t num = 0;
  for (auto &_path : boost::filesystem::recursive_directory_iterator(find))
  {
    ++num;
    // std::cout<<"_file is "<<boost::filesystem::absolute(_path.path())<<std::endl;
  }
  std::cout << "root path is " << find << std::endl;
  std::cout << "filesize is " << boost::filesystem::file_size(argv[0]) << std::endl;
  std::cout << "num is " << num << std::endl;
  std::cout << "done" << std::endl;
  return 0;
}