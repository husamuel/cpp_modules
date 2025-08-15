#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Constructor was called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(std::string type)
{
    std::cout << "Dog was create" << std::endl;
    this->type = type;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
    std::cout << "Dog Copy Constructor was called" << std::endl;
    this->type = copy.type;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor was called" << std::endl;
}

Dog const	&Dog::operator=(Dog const &copy)
{
    if(this != &copy)
    {
        Animal::operator=(copy);
        this->type = copy.type;
    }
    return *this;
}

std::string const	&Dog::getType(void) const
{
    return this->type;
}

void    Dog::setType(std::string const &type)
{
    this->type = type;
}

void Dog::makeSound() const
{
    std::cout << "WoofWoof🐶" << std::endl;
}