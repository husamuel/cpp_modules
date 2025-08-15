#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat Constructor was called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(std::string const &type) : WrongAnimal(type)
{
    std::cout << "WrongCat was create" << std::endl;
    this->type = type;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
    std::cout << "WrongCat Copy Constructor was called" << std::endl;
    this->type = copy.type;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor was called" << std::endl;
}

WrongCat const	&WrongCat::operator=(WrongCat const &copy)
{
    if(this != &copy)
    {
        WrongAnimal::operator=(copy);
        this->type = copy.type;
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}