//
// main.cpp for main in /home/lina_a/rendu/B3/Piscine/piscine_cpp_d07m/ex00
//
// Made by lina_a
// Login   <lina_a@epitech.net>
//
// Started on  Tue Jan 12 09:31:22 2016 lina_a
// Last update Tue Jan 12 09:31:22 2016 lina_a
//

#include <iostream>
#include "Borg.hh"
#include "Federation.hh"
#include "Warpsystem.hh"

int     main(void)
{
    Federation::Starfleet::Ship UssKreog(289, 132, "Kreog", 6);
    //Federation::Ship Independant(150, 230, "Greok");
    Federation::Starfleet::Captain James("James T. Kirk");
    WarpSystem::QuantumReactor Qr;
    WarpSystem::QuantumReactor Qr2;
    WarpSystem::Core core(&Qr);
    WarpSystem::Core core2(&Qr2);

    UssKreog.setupCore(&core);
    UssKreog.checkCore();

    Borg::Ship Cube;
    Cube.setupCore(&core2);
    Cube.checkCore();
    return 0;
}