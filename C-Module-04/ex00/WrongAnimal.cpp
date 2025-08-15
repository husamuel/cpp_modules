#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "";
    std::cout << "Constructor was call" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    this->type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy)
{
    this->type = copy.type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor was call" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Some generic wrong animal sound" << std::endl;
}

WrongAnimal const	&WrongAnimal::operator=(WrongAnimal const &copy)
{
    if (this != &copy)
    {
        this->type = copy.type;
    }
    return *this;
}

std::string const	&WrongAnimal::getType() const
{
    return this->type;
}

void    WrongAnimal::setType(std::string const &type)
{
    this->type = type;
}