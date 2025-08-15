#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap name constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
    if (this == &src)
        return (*this);
    this->_name = src._name;
    this->_hitPoints = src._hitPoints;
    this->_energyPoints = src._energyPoints;
    this->_attackDamage = src._attackDamage;
    return (*this);
}

void FragTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    } else {
        if (_energyPoints <= 0)
            std::cout << "FragTrap " << _name << " has no energy points left to attack!" << std::endl;
        if (_hitPoints <= 0)
            std::cout << "FragTrap " << _name << " has no hit points left to attack!" << std::endl;
    }
}

void FragTrap::highFivesGuys()
{
    std::cout << this->_name << ": Do you want a high five?" << std::endl;
}
