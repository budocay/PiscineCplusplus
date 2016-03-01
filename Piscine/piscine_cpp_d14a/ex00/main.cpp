#include <iostream>
#include "Errors.hpp"

int main()
{
    CommunicationError err("putain");
    std::string res = err.getComponent();
    std::cout << res << std::endl;

    return 0;
}