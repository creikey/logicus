#ifndef HPP_LEXER
#define HPP_LEXER

#include "common.hpp"
#include <string>

enum class Category { noun, verb, unknown };

class TokenCategory {
public:
  virtual std::string getString() = 0;
  virtual Category getCategory() = 0;
  virtual cmn::pos getPosition() = 0;
};

#endif // HPP_LEXER
