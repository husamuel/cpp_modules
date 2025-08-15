#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
   std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy): _name(copy._name), _hitPoints(copy._hitPoints), _energyPoints(copy._energyPoints), _attackDamage(copy._attackDamage)
{
    std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Name constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    if (this != &copy)
    {
        this->_name = copy._name;
        this->_hitPoints = copy._hitPoints;
        this->_energyPoints = copy._energyPoints;
        this->_attackDamage = copy._attackDamage;
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    } else {
        std::cout << "ClapTrap " << _name << " has no energy or hit points left to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints > amount) {
        _hitPoints -= amount;
    } else {
        _hitPoints = 0;
    }
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        _hitPoints += amount;
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " is repaired by " << amount << " points!" << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " has no energy or hit points left to be repaired!" << std::endl;
    }
}