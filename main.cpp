#include<iostream>
#include<string>

#include<boost/filesystem.hpp>

#include<file.hpp>

int main(int argc,char *argv[]){

    std::cout<<argc<<std::endl<<*argv<<std::endl;
    std::cout<<"filesize is "<< boost::filesystem::file_size(argv[0])<<std::endl;
    std::cout<<"done"<<std::endl;
    return 0;
}