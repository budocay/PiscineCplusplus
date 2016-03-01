/*
** KoalaNurse.cpp /home/lina_a/Projects/ex03
** 
** Created by lina_a on 11/01/16.
**
*/

#include <iostream>
#include <fstream>
#include "koalanurse.h"

KoalaNurse::KoalaNurse(int ID) : m_id_nurse(ID), isWorking(false)
{
}

KoalaNurse::~KoalaNurse()
{
    std::cout << "Nurse " << m_id_nurse << ":" << " Enfin un peu de repos !" << std::endl;
}

void KoalaNurse::giveDrug(std::string const nameDrug, SickKoala *koalaSick)
{
    koalaSick->takeDrug(nameDrug);
}

std::string KoalaNurse::readReport(std::string const fileName)
{
    std::string nameDrug;
    size_t pos = fileName.find(".");
    std::string extract = (std::string::npos == pos) ? fileName : fileName.substr(0, pos);
    if (fileName.substr(fileName.find_last_of(".") + 1) == "report") {
        std::ifstream res(fileName.c_str(), std::ios::in);
        if (!res)
            return "";
        std::getline(res, nameDrug);
        std::cout << "Nurse " << m_id_nurse << ": Kreog ! Il faut donner un " <<  nameDrug << " a Mr." << extract << std::endl;
        return nameDrug;
    }
    else
        return "";
}

void KoalaNurse::timeCheck()
{
    if (isWorking == false)
    {
        isWorking = true;
        std::cout << "Nurse " << m_id_nurse << ": Je rentre dans ma foret d'eucalyptus !" << std::endl;
    }
    else
    {
        isWorking = false;
        std::cout << "Nurse " << m_id_nurse << ": Je commence le travail !" << std::endl;
    }
}