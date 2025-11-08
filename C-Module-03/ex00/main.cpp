#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Warrior");
    a.attack("Enemy");
    a.takeDamage(5);
    a.beRepaired(3);
    return 0;
}