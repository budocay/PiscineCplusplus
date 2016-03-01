/*
** Borg.hh /home/lina_a/Projects/ex01
** 
** Created by lina_a on 12/01/16.
**
*/

#ifndef EX01_BORG_HH
#define EX01_BORG_HH

#include <iostream>
#include "Warpsystem.hh"

namespace Borg
{
    class Ship
    {
    public:
        Ship();
        ~Ship();
        void setupCore(WarpSystem::Core *core);
        void checkCore() const;
    private:
        int _side;
        short _maxWarp;
        WarpSystem::Core *coreSet;
    };
}

#endif //EX01_BORG_HH
