#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
    std::cout << "WrongWrongCat have been constructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal()
{
    std::cout << "Copy constructor called for " << other.type << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if(this != &other)
    {
        WrongCat::operator=(other);
        this->type = other.type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongWrongCat destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "MEOW" << std::endl;
}