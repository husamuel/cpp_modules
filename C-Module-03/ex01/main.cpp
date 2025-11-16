#include "ScavTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "Constructor with name" << std::endl;
    ScavTrap a("Guardian");
    a.attack("Intruder");
    a.takeDamage(30);
    a.beRepaired(10);
    a.guardGate();

    std::cout << "-----------------------------" << std::endl;

    std::cout << "Copy constructor" << std::endl;
    ScavTrap b = a;
    b.attack("CloneIntruder");
    b.takeDamage(20);
    b.beRepaired(5);
    b.guardGate();

    std::cout << "-----------------------------" << std::endl;

    std::cout << "Assignment operator" << std::endl;
    ScavTrap c("Temporary");
    c = a;
    c.attack("AssignedIntruder");
    c.takeDamage(15);
    c.beRepaired(7);
    c.guardGate();

    return 0;
}
