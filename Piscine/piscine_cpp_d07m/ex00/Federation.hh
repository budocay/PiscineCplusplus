/*
** Federation.hh /home/lina_a/Projects/piscine_cpp_d07m
** 
** Created by lina_a on 12/01/16.
**
*/

#ifndef PISCINE_CPP_D07M_FEDERATION_HH
#define PISCINE_CPP_D07M_FEDERATION_HH

#include <iostream>
#include "Warpsystem.hh"

namespace Federation
{
    class Ship
    {
    public:
        Ship(int length, int width, std::string name);
        ~Ship();
        void setupCore(WarpSystem::Core *core);
        void checkCore() const;
    private:
        int _length;
        int _width;
        std::string _name;
        WarpSystem::Core *coreSet;
    };
    namespace Starfleet
    {
        class Ship
        {
            public:
                Ship(int length, int width, std::string name, short maxWarp);
                ~Ship();
                void setupCore(WarpSystem::Core *core);
                void  checkCore() const;
            private:
                int _length;
                int _width;
                std::string _name;
                short _maxWarp;
                WarpSystem::Core *coreSet;
        };
    }
}
#endif //PISCINE_CPP_D07M_FEDERATION_HH
