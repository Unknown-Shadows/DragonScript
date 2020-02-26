#include "lexer.hpp"
#include <cctype>

using namespace std;

bool Lexer::isDigit(string &str)
{
    for (unsigned int i = 0; i < str.length(); i++)
        if (isdigit(str[i]))
            return false;
    return true;
}

void Lexer::removeSpaces(std::string& str)
{
    for (std::string::iterator it = str.begin(); it != str.end(); it++)
    {
        std::string::iterator begin = it;
        while (it != str.end() && ::isspace(*it) )it++;
        if (it - begin > 1)
            it = str.erase(begin + 1, it) - 1;
    }
}
std::unordered_map<string, int> test;
TokenList Lexer::tokenize(string &str, DICTIONARY &lexemes)
{
    removeSpaces(str);

    if (str == "")
        return TokenList();

    TokenList tokens;

    std::stringstream ss(str);
    string item;
    while (std::getline(ss, item, ' ')) {
        if (item.length() > 0) {
            tokens.push_back(item);
        }
    }

    for (unsigned int i = 0; i < tokens.size(); i++)
        for (auto item : lexemes)
            for (auto token : item.second)
                if (tokens[i] == token.second)
                    switch (token.first)
                    {
                    case TokenType::NUMBER:

                        break;
                    case TokenType::FLOAT:

                        break;
                    case TokenType::PLUS:

                        break;
                    case TokenType::EQUAL:

                        break;
                    }

    return tokens;
}

Lexer::Lexer()
{

}
