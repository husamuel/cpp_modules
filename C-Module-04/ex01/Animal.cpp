#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal have been constructed" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std::cout << "Any sound" << std::endl;
}

