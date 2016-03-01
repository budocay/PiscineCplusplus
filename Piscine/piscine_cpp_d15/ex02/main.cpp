#include <iostream>
#include "ex02.hpp"

int main() {
    int tab[2] = {3, 0};
    int min = templateMin(tab, 2);
    std::cout << "templatemin(tab,2) = " << min << std::endl;
    min = nonTemplateMin(tab, 2);
    std::cout << "nontemplatemin(tab, 2) = "  << min << std::endl;

}