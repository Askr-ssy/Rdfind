#ifndef _RDF_MD5_H_
#define _RDF_MD5_H_

#include <openssl/md5.h>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <iostream>
#include <filesystem>
#define BUFFSIZE 65535

namespace askr
{
  class hash
  {
  public:
    std::string get_md5hash(const std::string &fname);
  };
} // namespace askr
#endif // !_RDF_MD5_H_
