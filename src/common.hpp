#ifndef HPP_COMMON
#define HPP_COMMON

#include <string>

namespace cmn {

class pos {
public:
  int column;
  int line;
  pos() : column(0), line(0){};
  pos(int c, int l) : column(c), line(l){};
  std::string toString() {
    return "(" + std::to_string(column) + "," + std::to_string(line) + ")";
  }
};
}

#endif // HPP_COMMON
