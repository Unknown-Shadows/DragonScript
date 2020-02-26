#ifndef PARSER_HPP
#define PARSER_HPP

#include <string>
#include <fstream>

#include "lexer.hpp"

class Parser
{
    std::vector<std::string> analyzer(std::string &str);
public:
    Parser(std::string path);
};

#endif // PARSER_HPP
