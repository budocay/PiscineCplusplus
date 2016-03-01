/*#include "Character.hh"*/
#include "PlasmaRifle.hh"
#include "PowerFist.hh"
#include "RadScorpion.hh"
#include "SuperMutant.hh"

int main() {
  //  Character *zaz = new Character("zaz");
  //const Character toto(*zaz);

    /*    std::cout << *zaz;
    std::cout << toto;*/

    AEnemy *b = new RadScorpion();

    AWeapon *pr = new PlasmaRifle();
    AWeapon *pf = new PowerFist();

    /*zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);

    zaz->attack(b);
    std::cout << *zaz;
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;*/

    return 0;
}
