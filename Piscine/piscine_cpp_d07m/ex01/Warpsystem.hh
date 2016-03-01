/*
** Warpsystem.hh /home/lina_a/Projects/piscine_cpp_d07m
** 
** Created by lina_a on 12/01/16.
**
*/

#ifndef PISCINE_CPP_D07M_WARPSYSTEM_HH
#define PISCINE_CPP_D07M_WARPSYSTEM_HH

namespace WarpSystem{

    class QuantumReactor{
    public:
        QuantumReactor();
        ~QuantumReactor();
        void setStability(bool);
        bool isStable();
    private:
        bool _stability;
    };

    class Core{
    public:
        Core(QuantumReactor *);
        ~Core();
        QuantumReactor *checkReactor();
    private:
        QuantumReactor * _coreReactor;

    };
}

#endif //PISCINE_CPP_D07M_WARPSYSTEM_HH
