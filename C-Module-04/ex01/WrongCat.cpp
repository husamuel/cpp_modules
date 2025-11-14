#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    type = "WrongCat";
    std::cout << "WrongWrongCat have been constructed" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongWrongCat have been destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "MEOW" << std::endl;
}