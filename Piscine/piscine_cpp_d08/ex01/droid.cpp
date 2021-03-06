/*
** droid.cpp /home/lina_a/Projects/piscine_cpp_d08
** 
** Created by lina_a on 13/01/16.
**
*/

#include <iostream>
#include "droid.hh"

Droid::Droid(std::string const ID) : Id(ID),
                                   Energy(50),
                                   Attack(25),
                                   Thoughness(15)
{
    Status = new std::string("Standing by");
    BattleData = new DroidMemory;
    std::cout << "Droid '" << Id << "' Activated" << std::endl;
}

Droid::Droid(Droid const & object) : Id(object.getId()),
                                     Energy(object.getEnergy()),
                                     Attack(object.Attack),
                                     Thoughness(object.Thoughness)

{
    Status = new std::string("Standing by");
    BattleData = new DroidMemory;
    std::cout << "Droid '" << Id << "' Activated," << " Memory Dumped" <<std::endl;
}

Droid& Droid::operator=(Droid const & object)
{
    if (&object != this)
    {
        this->Id = object.Id;
        this->Status = new std::string(*object.Status);
        this->BattleData = new DroidMemory(*object.BattleData);
        this->Energy = object.Energy;
    }
    return *this;
}

Droid::~Droid() {
    std::cout << "Droid '" << Id << "' Destroyed" << std::endl;
    if (Status != 0)
        delete Status;
    if (BattleData != 0)
        delete BattleData;
}

std::size_t Droid::getEnergy() const {
    return Energy;
}

std::string Droid::getId() const {
    return Id;
}

std::string Droid::getStatus() const {
    return *Status;
}

void Droid::setEnergy(std::size_t const energy) {
    Energy = energy;
}

void Droid::setId(std::string const id) {
    Id = id;
}

void Droid::setStatus(std::string *status) {
    if (Status != 0)
        delete Status;
    Status = new std::string;
    Status = status;
}

bool Droid::operator==(Droid const &object) const {
    return (this->Status == object.Status);

}

bool Droid::operator!=(Droid const &object) const {
    return  (this->Status != object.Status);
}

std::size_t Droid::getAttack() const {
    return Attack;
}

std::size_t Droid::getToughness() const {
    return Thoughness;
}

std::ostream& operator<<(std::ostream& os, Droid const & d)
{
    os << "Droid " << "'" << d.getId() << "', " << d.getStatus() << ", " << d.getEnergy();
    return os;
}

Droid& Droid::operator<<(std::size_t &durassel)  {

    if (Energy == 100 || durassel == 0)
        return *this;
    else
    {
        size_t diff = 100 - Energy;
        if (diff > durassel)
            diff = durassel;
        durassel = durassel -diff;
        Energy = Energy + diff;
    }
    return *this;
}

DroidMemory Droid::getBattleData() const {
    return *BattleData;
}

void Droid::setBattleData(DroidMemory *battle) {
    BattleData = battle;
}