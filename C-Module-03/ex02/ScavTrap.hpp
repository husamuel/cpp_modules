#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const ScavTrap &copy);
        ScavTrap(std::string name);
        ~ScavTrap();
        ScavTrap &operator=(const ScavTrap &src);
        void attack(const std::string& target);
        void guardGate();
};

#endif