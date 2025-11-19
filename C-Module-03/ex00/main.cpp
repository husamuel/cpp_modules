#include "ClapTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "Constructor" << std::endl;
    ClapTrap a("Warrior");
    a.attack("Enemy");
    a.takeDamage(5);
    a.beRepaired(3);

    std::cout << "-----------------------------" << std::endl;

    std::cout << "Copy constructor" << std::endl;
    ClapTrap b = a;
    b.attack("EnemyClone");
    b.takeDamage(2);
    b.beRepaired(1);

    std::cout << "-----------------------------" << std::endl;

    std::cout << "Assignment operator" << std::endl;
    ClapTrap c("Temp");
    c = a;        
    c.attack("EnemyAfterAssignment");
    c.takeDamage(4);
    c.beRepaired(2);

    return 0;
}
