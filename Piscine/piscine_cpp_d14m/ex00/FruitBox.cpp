//
// Created by lina_a on 19/01/16.
//

#include "FruitBox.h"

FruitBox::FruitBox(int size)
{
   _size = size;
    _nd = new FruitNode;
    _nbelem = 0;
}

int FruitBox::nbFruits() const {
    return _nbelem;
}

bool FruitBox::putFruit(Fruit *f) {
        while (true)
        {
            if (_nd->node == f || _nbelem == _size)
                return false;
            if (_nd->next == NULL)
            {
                _nd->node = f;
                break;
            }
        }
    _nbelem = _nbelem + 1;
    return true;
}

Fruit const * FruitBox::pickFruit() {
    if (!_nd->node)
        return 0;
    FruitNode *tmp;
    Fruit const *fr = _nd->node;
    tmp = _nd;
    _nd = _nd->next;
    delete(tmp);
    return fr;
}

FruitNode *FruitBox::head() const {
    if (_nd != NULL)
        return _nd;
    else
        return 0;
}

FruitBox::~FruitBox() {
    delete(_nd);
}

FruitBox::FruitBox(const FruitBox &box) {
    (void)box;
}

FruitBox &FruitBox::operator=(FruitBox &box) {
    (void)box;
    return *this;
}
