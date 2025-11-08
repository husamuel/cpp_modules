#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ScavTrap {
    public:
        FragTrap(const std::string& name);
        ~FragTrap();

        void highFivesGuys(void);
};

#endif