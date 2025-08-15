#include "ScavTrap.hpp"

int main()
{
    std::cout << "Construction" << std::endl;
    ScavTrap a("A");
    ScavTrap b("B");

    a.attack("B");
    a.takeDamage(10);
    b.beRepaired(5);
    b.attack("A");
    a.beRepaired(5);
    for (int i = 0; i < 51; i++)
			b.attack("A");
    std::cout << "Destruction" << std::endl;
}