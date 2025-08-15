#include "Animal.hpp"

Animal::Animal()
{
    this->type = "";
    std::cout << "Constructor was call" << std::endl;
}

Animal::Animal(std::string type)
{
    this->type = type;
}

Animal::Animal(Animal const &copy)
{
    this->type = copy.type;
}

Animal::~Animal()
{
    std::cout << "Destructor was call" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Some generic animal sound" << std::endl;
}

Animal const	&Animal::operator=(Animal const &copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return *this;
}

std::string const	&Animal::getType() const
{
    return this->type;
}

void    Animal::setType(std::string const &type)
{
    this->type = type;
}