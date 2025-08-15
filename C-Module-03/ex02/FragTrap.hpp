#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class FragTrap : public ClapTrap
{
    private:
        std::string  _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
    public:
        FragTrap();
        FragTrap(const FragTrap &copy);
        FragTrap(std::string name);
        ~FragTrap();
        FragTrap &operator=(const FragTrap &src);
        void attack(const std::string& target);
        void highFivesGuys();
};

#endif