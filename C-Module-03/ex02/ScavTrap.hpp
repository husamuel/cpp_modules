#ifndef ScavTRAP_HPP
#define ScavTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& other);
        virtual ~ScavTrap();

        void guardGate();
        void attack(const std::string& target);
};

#endif