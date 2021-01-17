#include <boost/filesystem.hpp>
#include <string>
#include <iostream>
namespace askr
{   
    class find : public boost::filesystem::path
    {
    public:
        // find();
        find(const std::basic_string<value_type> &s):boost::filesystem::path(s){};
    };

    class ping
    {
    public:
        ping()
        {
            std::cout << "pong" << std::endl;
        };
        ~ping();
    };

} // end namespace askr