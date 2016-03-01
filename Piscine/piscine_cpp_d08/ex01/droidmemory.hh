/*
** droidmemory.hh /home/lina_a/Projects/piscine_cpp_d08
** 
** Created by lina_a on 13/01/16.
**
*/

#ifndef PISCINE_CPP_D08_DROIDMEMORY_HH
#define PISCINE_CPP_D08_DROIDMEMORY_HH

#include <iostream>

class DroidMemory{
public:
    DroidMemory();
    DroidMemory(DroidMemory const &);
    DroidMemory& operator=(DroidMemory const &);
    ~DroidMemory();
    std::size_t getFingerPrint() const;
    std::size_t getExp() const;
    void setFingerPrint(std::size_t const);
    void setExp(std::size_t const);
    DroidMemory& operator>>(DroidMemory &);
    DroidMemory& operator<<(DroidMemory const &);
    DroidMemory& operator+=(DroidMemory const &);
    DroidMemory& operator+=(std::size_t const &);
    DroidMemory& operator+(DroidMemory const &) const ;
    DroidMemory& operator+(std::size_t &) const ;

private:
    std::size_t FingerPrint;
    std::size_t Exp;
};

std::ostream& operator<<(std::ostream &, DroidMemory const &);

#endif //PISCINE_CPP_D08_DROIDMEMORY_HH
