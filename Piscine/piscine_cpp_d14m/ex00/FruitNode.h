//
// Created by lina_a on 19/01/16.
//

#ifndef EX00_FRUITNODE_H
#define EX00_FRUITNODE_H

#include <iostream>
#include <string>
#include "Fruit.h"

    struct FruitNode
    {
        Fruit const *node = NULL;
        FruitNode *next = NULL;
    };

#endif //EX00_FRUITNODE_H
