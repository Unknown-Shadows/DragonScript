#ifndef LEXER_HPP
#define LEXER_HPP

enum TokenType
{
    // Service
    VERSION          = 0x10,
    // Functions
    FUNCTION        = 0x100,
    EXECFUNCTION    = 0x101,
    // Operators
    PLUS            = 0x200,
    MINUS           = 0x201,
    MULTIPLY        = 0x202,
    DIVIDE          = 0x203,
    EQUAL           = 0x204,
    // Types
    NUMBER          = 0x300,
    FLOAT           = 0x301,
    STRING          = 0x302,
    COMMENT         = 0x400
};

#include <vector>
#include <unordered_map>
#include <string>
#include <sstream>

typedef std::vector<std::string> TokenList;
typedef std::unordered_map<std::string, std::unordered_map<TokenType, std::string>> DICTIONARY;

class Parser;

class Lexer
{
    friend Parser;

    bool isDigit(std::string &str);
    void removeSpaces(std::string &str);
    TokenList tokenize(std::string &str, DICTIONARY &lexemes);
public:
    Lexer();
};

#endif // LEXER_HPP
