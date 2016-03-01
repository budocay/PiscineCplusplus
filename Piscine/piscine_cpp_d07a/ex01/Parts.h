/*
** Parts.h /home/lina_a/Projects/piscine_cpp_d07a
** 
** Created by lina_a on 12/01/16.
**
*/

#ifndef PISCINE_CPP_D07A_PARTS_H
#define PISCINE_CPP_D07A_PARTS_H

#include <iostream>

class Arms{
public:
    Arms(std::string serial = "A-01", bool functionnal = true);
    ~Arms();
    bool isFuncionnal();
    std::string serial();
    void information();

private:
    std::string _serial;
    bool _functionnal;
};

class Legs{
public:
    Legs(std::string serial = "L-01", bool functionnal = true);
    ~Legs();
    bool isFunctionnal();
    std::string serial();
    void information();

private:
    std::string _serial;
    bool _functionnal;
};

class Head{
public:
    Head(std::string serial = "H-01", bool functionnal = true);
    ~Head();
    bool isFunctionnal();
    std::string serial();
    void information();

private:
    std::string _serial;
    bool _functionnal;
};

#endif //PISCINE_CPP_D07A_PARTS_H
