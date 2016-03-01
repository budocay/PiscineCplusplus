/*
** droid.hh /home/lina_a/Projects/piscine_cpp_d08
** 
** Created by lina_a on 13/01/16.
**
*/

#ifndef PISCINE_CPP_D08_DROID_HH
#define PISCINE_CPP_D08_DROID_HH

#include <iostream>
#include "droidmemory.hh"

class Droid
{
public:
    Droid(std::string const ID);
    Droid(Droid const &);
    Droid& operator=(const Droid &);
    bool operator==(const Droid &) const ;
    bool operator!=(const Droid &) const ;
    std::string getId() const ;
    std::size_t getEnergy() const ;
    std::string getStatus() const ;
    std::size_t getAttack() const;
    std::size_t getToughness() const;
    DroidMemory getBattleData() const;
    void setId(std::string const);
    void setBattleData(DroidMemory *battle);
    void setEnergy(std::size_t const);
    void setStatus(std::string *status);
    Droid& operator<<(std::size_t &durassel);
    ~Droid();

private:
    std::string Id;
    std::size_t Energy;
    std::size_t const Attack;
    std::size_t const Thoughness;
    std::string* Status;
    DroidMemory *BattleData;
};

std::ostream& operator<<(std::ostream&, Droid const &);


#endif //PISCINE_CPP_D08_DROID_HH
