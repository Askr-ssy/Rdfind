#ifndef RDFIND_CMDLINEPARSER_H
#define RDFIND_CMDLINEPARSER_H
#include<string>
#include<vector>
namespace askr{
  class Paser{
    public:
      Paser(int argc,const char *argv[]):
        _argc(argc),
        _argv(argv),
        _index(1)
        {}
      bool try_parse();


    private:
      const char **_argv;
      const int _argc;
      const int _index;
  };
}

#endif // !RDFIND_CMDLINEPARSER_H