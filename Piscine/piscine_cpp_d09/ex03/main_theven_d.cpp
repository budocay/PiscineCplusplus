#include "Character.hh"
#include "Warrior.hh"
int	main()
{
  Character peon("Peon", 0);
  Warrior zog("ZogZog", 100);

  std::cout << "\nName = [" << peon.getName() << "]\tLevel = [" << peon.getLvl() << "]\tPv = [" << peon.getPv() << "]\tPower = [" << peon.getPower() << "]\tRange = [" << peon.Range << "]" << std::endl;
  std::cout << "Name = [" << zog.getName() << "]\tLevel = [" << zog.getLvl() << "]\tPv = [" << zog.getPv() << "]\tPower = [" << zog.getPower() << "]\tRange = [" << zog.Range << "]\n" << std::endl;

  zog.TakeDamage(peon.CloseAttack());
  zog.TakeDamage(peon.CloseAttack());
  zog.TakeDamage(peon.CloseAttack());


  std::cout << "\nName = [" << peon.getName() << "]\tLevel = [" << peon.getLvl() << "]\tPv = [" << peon.getPv() << "]\tPower = [" << peon.getPower() << "]\tRange = [" << peon.Range << "]" << std::endl;
  std::cout << "Name = [" << zog.getName() << "]\tLevel = [" << zog.getLvl() << "]\tPv = [" << zog.getPv() << "]\tPower = [" << zog.getPower() << "]\tRange = [" << zog.Range << "]\n" << std::endl;


  peon.RestorePower();
  zog.Heal();
  zog.Range = Character::RANGE;


  std::cout << "\nName = [" << peon.getName() << "]\tLevel = [" << peon.getLvl() << "]\tPv = [" << peon.getPv() << "]\tPower = [" << peon.getPower() << "]\tRange = [" << peon.Range << "]" << std::endl;
  std::cout << "Name = [" << zog.getName() << "]\tLevel = [" << zog.getLvl() << "]\tPv = [" << zog.getPv() << "]\tPower = [" << zog.getPower() << "]\tRange = [" << zog.Range << "]\n" << std::endl;


  peon.TakeDamage(zog.RangeAttack());
  peon.TakeDamage(zog.RangeAttack());
  peon.TakeDamage(zog.RangeAttack());
  peon.TakeDamage(zog.RangeAttack());
  peon.TakeDamage(zog.RangeAttack());
  peon.TakeDamage(zog.RangeAttack());
  peon.TakeDamage(zog.RangeAttack());
  peon.TakeDamage(zog.RangeAttack());
  peon.TakeDamage(zog.RangeAttack());
  peon.TakeDamage(zog.RangeAttack());
  peon.TakeDamage(zog.RangeAttack());

  std::cout << "\nName = [" << peon.getName() << "]\tLevel = [" << peon.getLvl() << "]\tPv = [" << peon.getPv() << "]\tPower = [" << peon.getPower() << "]\tRange = [" << peon.Range << "]" << std::endl;
  std::cout << "Name = [" << zog.getName() << "]\tLevel = [" << zog.getLvl() << "]\tPv = [" << zog.getPv() << "]\tPower = [" << zog.getPower() << "]\tRange = [" << zog.Range << "]" << std::endl;

  return (0);
}
