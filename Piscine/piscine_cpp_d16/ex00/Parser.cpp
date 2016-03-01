//
// Created by lina_a on 21/01/16.
//

#include <stack>
#include "Parser.h"

Parser::Parser() {

}

Parser::~Parser() {

}

void Parser::feed(const std::string &string) {

    int i = 0;
    for (i = 0; string[i] != NULL; i++)
    {
        if (string[i] == '+')
            _operator.push(string[i]);
        if ()

    }
}

int Parser::result() const {

}

void Parser::reset() {
    _res = 0;
    while(!_operand.empty())
        _operand.pop();
    while (!_operator.empty())
        _operator.pop();
}
