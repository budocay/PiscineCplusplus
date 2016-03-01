#include <iostream>
#include <string>
#include "Fruit.h"
#include "Banana.h"
#include "Lemon.h"
#include "FruitNode.h"
#include "FruitBox.h"

int main() {
    Lemon l;
    Banana b;

    std::cout << l.getVitamins() << std::endl;
    std::cout << b.getVitamins() << std::endl;
    std::cout << l.getName() << std::endl;
    std::cout << b.getName() << std::endl;
    Fruit& f = l;
    FruitBox fruit(3);
    fruit.putFruit(&f);
    fruit.head();
    std::cout << f.getVitamins() << std::endl;
    std::cout << f.getName() << std::endl;
    return 0;
}