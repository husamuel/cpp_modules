#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("Warrior");
    a.attack("Enemy");
    a.guardGate();
    a.takeDamage(5);
    a.beRepaired(3);
    return 0;
}