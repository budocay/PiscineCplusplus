/*
** koaladoctor.cpp /home/lina_a/Projects/ex04
** 
** Created by lina_a on 11/01/16.
**
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "koaladoctor.h"

KoalaDoctor::~KoalaDoctor()
{
}

KoalaDoctor::KoalaDoctor(std::string const nameDoc): name(nameDoc), isWorking(false)
{
    std::cout << "Dr." << name << ": Je suis le Dr." << name << " ! Comment Kreoggez-vous ?" << std::endl;
}

void KoalaDoctor::diagnose(SickKoala const *koala)
{
    int rand = random() % 5;
    std::string drug[5] = {"mars", "Buronzand", "Viagra", "Extasy", "Feuille d'eucalyptus"};
    std::string namerepot = koala->getName();
    std::string nameFileReport = namerepot + ".report";
    std::cout << "Dr." << name << ": Alors qu'est-ce qui vous goerk Mr." << koala->getName() << std::endl;
    koala->poke();
    std::ofstream outfile(nameFileReport.c_str(), std::ofstream::out | std::ofstream::trunc);
    outfile << drug[rand] << std::endl;
    outfile.close();
}

void KoalaDoctor::timeCheck()
{
    if (isWorking == false)
    {
        isWorking = true;
        std::cout << "Dr." << name << ": Je rentre dans ma foret d'eucalyptus" << std::endl;
    }
    else {
        isWorking = false;
        std::cout << "Dr." << name << ": Je commence le travail !" << std::endl;
    }
}
