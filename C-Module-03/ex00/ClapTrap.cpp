#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap " << name << " constructed!"  << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if ( energy_points > 0 && hit_points > 0)
    {
        energy_points = energy_points - 1;
        std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attack_damage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    hit_points -= amount;
    std::cout << "ClapTrap " << name << " takes " << amount << " damage! Remaining HP: " << hit_points  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if ( energy_points > 0 && hit_points > 0)
    {
        std::cout << "ClapTrap " << name << " repairs itself, gaining " << amount << " hit points!"  << std::endl;
        hit_points += amount;
        energy_points = energy_points - 1;
    }
}