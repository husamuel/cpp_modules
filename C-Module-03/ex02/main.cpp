#include "FragTrap.hpp"

int main()
{
    std::cout << "Constructor with name" << std::endl;
    FragTrap a("Bomber");
    a.attack("Intruder");
    a.takeDamage(40);
    a.beRepaired(20);
    a.highFivesGuys();

    std::cout << "-----------------------------" << std::endl;

    std::cout << "Copy constructor" << std::endl;
    FragTrap b = a;
    b.attack("CloneIntruder");
    b.takeDamage(10);
    b.beRepaired(5);
    b.highFivesGuys();

    std::cout << "-----------------------------" << std::endl;

    std::cout << "Assignment operator" << std::endl;
    FragTrap c("Temporary");
    c = a;
    c.attack("AssignedIntruder");
    c.takeDamage(25);
    c.beRepaired(10);
    c.highFivesGuys();

    return 0;
}
