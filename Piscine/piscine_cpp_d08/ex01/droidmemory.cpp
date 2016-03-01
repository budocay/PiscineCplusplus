/*
** droidmemory.cpp /home/lina_a/Projects/piscine_cpp_d08
** 
** Created by lina_a on 13/01/16.
**
*/

#include <iostream>
#include <cstdlib>
#include "droidmemory.hh"

DroidMemory::DroidMemory() : FingerPrint(random()), Exp(0)
{

}

DroidMemory::DroidMemory(DroidMemory const &object) : FingerPrint(object.getFingerPrint()),
                                                      Exp(object.getExp())
{
}

std::size_t DroidMemory::getExp() const {
    return Exp;
}
std::size_t DroidMemory::getFingerPrint() const {
    return FingerPrint;
}

void DroidMemory::setExp(std::size_t const exp) {
    Exp = exp;
}

void DroidMemory::setFingerPrint(std::size_t const fingerPrint) {
    FingerPrint = fingerPrint;
}

DroidMemory::~DroidMemory() {

}

DroidMemory& DroidMemory::operator=(DroidMemory const & mem) {
    if (&mem != this)
    {
        this->Exp = mem.Exp;
        this->FingerPrint = mem.FingerPrint;
    }
    return *this;
}

DroidMemory& DroidMemory::operator>>(DroidMemory &dr) {

    dr.setExp(dr.getExp() + this->Exp);
    dr.setFingerPrint(dr.getFingerPrint() ^ this->getFingerPrint());
    return *this;
}

DroidMemory& DroidMemory::operator<<(DroidMemory const &dr)
{
    this->setExp(this->getExp() + dr.getExp());
    this->setFingerPrint(this->FingerPrint ^ dr.getFingerPrint());
    return *this;
}

DroidMemory& DroidMemory::operator+=(DroidMemory const &dr)
{
    this->Exp = this->Exp + dr.getExp();
    this->setFingerPrint(this->FingerPrint ^ dr.getFingerPrint());
    return *this;
}

DroidMemory& DroidMemory::operator+=(std::size_t const &sz)
{
    this->Exp = static_cast<int>(sz);
    this->FingerPrint ^= sz;
    return *this;
}

DroidMemory& DroidMemory::operator+(DroidMemory const &dr) const {
    DroidMemory *droidMemory = new DroidMemory();
    droidMemory->Exp = this->Exp + dr.getExp();
    droidMemory->setFingerPrint(this->FingerPrint ^ dr.getFingerPrint());
    return *droidMemory;
}

DroidMemory& DroidMemory::operator+(std::size_t &sz) const {
    DroidMemory *droidMemory = new DroidMemory();
    droidMemory->Exp = static_cast<int>(sz);
    droidMemory->FingerPrint = sz;
    return *droidMemory;
}

std::ostream& operator<<(std::ostream & os, DroidMemory const & dr)
{
    os << " DroidMemory '" << dr.getFingerPrint() << "', " << dr.getExp();
    return os;
}