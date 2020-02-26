#include "parser.hpp"

using namespace std;

vector<string> Parser::analyzer(string &str)
{
    vector<string> instructions;

    stringstream ss(str);
    string item;
    while (std::getline(ss, item, ';')) {
        if (item.length() > 0) {
            instructions.push_back(item);
        }
    }

    return instructions;
}

Parser::Parser(std::string path)
{
    DICTIONARY lexemes;
    lexemes["IDENTIFIER"][TokenType::FUNCTION]       = "function";
    lexemes["VARIABLES"] [TokenType::NUMBER]         = "int";
    lexemes["VARIABLES"] [TokenType::FLOAT]          = "float";
    lexemes["OPERATORS"] [TokenType::EQUAL]          = "=";
    lexemes["OPERATORS"] [TokenType::PLUS]           = "+";
    lexemes["OPERATORS"] [TokenType::MINUS]          = "-";
    lexemes["OPERATORS"] [TokenType::MULTIPLY]       = "*";
    lexemes["OPERATORS"] [TokenType::DIVIDE]         = "/";

    Lexer lexer;

    ifstream file(path, std::ios::in);

    if (!file.is_open())
        return;

    string line;
    vector<string> instructions;
    vector<string> tree;
    while (getline(file, line))
    {
        instructions = analyzer(line);
        for (auto instruction : instructions) {
            lexer.tokenize(instruction, lexemes);
        }
    }
}
