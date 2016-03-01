/*
** KreogCom.h /home/lina_a/Projects/piscine_cpp_d07a
** 
** Created by lina_a on 12/01/16.
**
*/

#ifndef PISCINE_CPP_D07A_KREOGCOM_H
#define PISCINE_CPP_D07A_KREOGCOM_H

#include <iostream>

class KreogCom
{
public:
    KreogCom(int x, int y, int serial);
    ~KreogCom();

public:
    void addCom(int x, int y, int serial);
    KreogCom    *getCom();
    void removeCom();

public:
    void ping();
    void locateSquad();

private:
    int _x;
    int _y;
    int _serial;
private:
    int _posx;
    int _posy;
private:
    const int m_serial;
};

#endif //PISCINE_CPP_D07A_KREOGCOM_H
