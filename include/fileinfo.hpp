#ifndef Fileinfo_HPP
#include <sys/types.h>
#include <string>
namespace askr
{
  class Fileinfo
  {
  public:
    Fileinfo() {}
    using filetypesize = off_t;

    enum class duptype : char{
      DUPTYPE_UNKNOWN,
      DUPTYPE_FIRST_OCCURRENCE,
      DUPTYPE_WITHIN_SAME_TREE,
      DUPTYPE_OUTSIDE_TREE,
    };
    
  private:
    struct Fileinfostat
    {
      filetypesize size_t;
      unsigned long stat_ino;
      unsigned long stat_dev;
      bool is_file;
      bool is_directory;
      Fileinfostat();
    };
    Fileinfostat m_stat;
    int m_depth = -1;
    std::string m_filename;
    bool m_delete;
    enum Bytesize : int
    {
      SomeByteSize = 64
    };
  }

} // end namespace askr
#endif // !Fileinfo_HPP
