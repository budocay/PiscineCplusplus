/*
** KoalaBot.cpp /home/lina_a/Projects/piscine_cpp_d07a
** 
** Created by lina_a on 12/01/16.
**
*/


#include "KoalaBot.h"

KoalaBot::KoalaBot(std::string const serial) : _serial(serial)
{
}

void KoalaBot::setParts(Arms &arms) {
    _arms = arms;
}

void KoalaBot::setParts(Head &head)
{
    _head = head;
}

void KoalaBot::setParts(Legs &legs) {
    _legs = legs;
}

void KoalaBot::swapParts(Arms &arme) {
    Arms arm;
    arm = _arms;
    _arms = arme;
    arme = arm;
}

void KoalaBot::swapParts(Head &head) {

    Head head_h;
    head_h = _head;
    _head = head;
    head = head_h;
}

void KoalaBot::swapParts(Legs &legs) {
    Legs leg;

    leg = _legs;
    _legs = legs;
    legs = leg;
}

void KoalaBot::informations() {
    std::cout << "[KoalaBot] " << _serial << std::endl;
    _arms.information();
    _legs.information();
    _head.information();
}

bool KoalaBot::status() {
    if (_arms.isFuncionnal() == true && _legs.isFunctionnal() == true && _head.isFunctionnal() == true)
        return true;
    else
        return false;
}

KoalaBot::~KoalaBot() {

}