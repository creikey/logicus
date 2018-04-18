#ifndef HPP_LEXER
#define HPP_LEXER

#include <string>

class TokenCategory {
public:
  virtual std::string getString() = 0;
};

#endif // HPP_LEXER
