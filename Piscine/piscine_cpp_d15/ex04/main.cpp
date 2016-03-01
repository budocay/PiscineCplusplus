#include <iostream>
#include "ex04.hpp"

int main() {
    std::cout << "1 == 0 ? " << equal(1, 0) << std::endl;
    std::cout << "1 == 1 ? " << equal(1, 1) << std::endl;
    Tester<std::string> iT;
    std::cout << "41 == 42 ? " << iT.equal("aa", "aze") << std::endl;
    std::cout << "42 == 42 ? " << iT.equal("aa", "aa") << std::endl;
    return 0;
}