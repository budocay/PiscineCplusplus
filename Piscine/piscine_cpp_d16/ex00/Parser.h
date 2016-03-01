//
// Created by lina_a on 21/01/16.
//

#ifndef EX00_PARSER_H
#define EX00_PARSER_H

#include <stack>
#include <iostream>
#include <string>

class Parser{
public:
    Parser();
    ~Parser();
    void feed(const std::string &);
    int result() const;
    void reset();

protected:
    int _res;
    std::stack <char> _operator;
    std::stack <int> _operand;
};

#endif //EX00_PARSER_H
