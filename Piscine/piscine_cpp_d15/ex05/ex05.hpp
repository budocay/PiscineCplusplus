//
// Created by lina_a on 20/01/16.
//

#ifndef EX05_EX05_HPP
#define EX05_EX05_HPP

#include <iostream>
#include <string>

template <typename T>
class array{
public:
    array(unsigned int i){
        _array = new T[i];
    }
    array(){
        _array = new T[0];
    }
    ~array(){
        delete[] _array;
    }
    array(const array &ar){
        _array = getArray();
    }
    array&operator=(array const &ar){

    }

    T getArray(){ return _array;}
private:
    T *_array;
};

#endif //EX05_EX05_HPP