#include "Character.hh"

int main(void)
{
    Character _c("poney", 42);
    _c.Range = Character::CLOSE;
    _c.Range = Character::RANGE;
    _c.TakeDamage(50);
    _c.TakeDamage(200);
    _c.TakeDamage(200);

    return 0;
}