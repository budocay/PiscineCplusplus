//
// Created by lina_a on 19/01/16.
//

#ifndef EX00_FRUITBOX_H
#define EX00_FRUITBOX_H

#include <iostream>
#include <string>
#include "FruitNode.h"
#include "Fruit.h"

class FruitBox{
public:
    FruitBox(int size);
    ~FruitBox();
    int nbFruits() const ;
    bool putFruit(Fruit *f);
    Fruit const * pickFruit();
    FruitNode* head() const;

private:
    FruitBox(const FruitBox &);
    FruitBox&operator=(FruitBox &);
protected:
    int _size;
    int _nbelem;
    FruitNode *_nd;
};


#endif //EX00_FRUITBOX_H
