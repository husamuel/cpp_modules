#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : name(name), hit_points(100), energy_points(50), attack_damage(20)
{
    std::cout << "ClapTrap " << name << " constructed!"  << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << name << " destroyed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
    this->name = other.name;
    this->hit_points = other.hit_points;
    this->energy_points = other.energy_points;
    this->attack_damage = other.attack_damage;
    std::cout << "Copy constructor called for " << name << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
        if (this != &other) {
            name = other.name;
            hit_points = other.hit_points;
            energy_points = other.energy_points;
            attack_damage = other.attack_damage;
        }
        std::cout << "Assignment operator called for " << name << std::endl;
        return *this;
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