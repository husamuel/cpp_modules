#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal have been constructed" << std::endl;
}

Animal::Animal(const Animal& other)
{
    std::cout << "Copy constructor called for " << other.type << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if(this != &other)
    {
        Animal::operator=(other);
        this->type = other.type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Any sound" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}
