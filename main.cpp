#include<iostream>
#include<string>

#include<boost/filesystem.hpp>

#include<file.hpp>

int main(int argc,char *argv[]){
    assert(boost::filesystem::exists(argv[1]));

    boost::filesystem::path root_path{argv[1]};

    for (auto &_path :boost::filesystem::recursive_directory_iterator(root_path))
    {
        std::cout<<"_file is "<<boost::filesystem::absolute(_path.path())<<std::endl;
    }
    std::cout<< "root path is "<<root_path<<std::endl;
    std::cout<<"filesize is "<< boost::filesystem::file_size(argv[0])<<std::endl;
    std::cout<<"done"<<std::endl;
    return 0;
}