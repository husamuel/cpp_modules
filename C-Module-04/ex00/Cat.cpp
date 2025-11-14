#include "Cat.hpp"

Cat::Cat()
{
    type = "Cat";
    std::cout << "Cat have been constructed" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat have been destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "MEOW" << std::endl;
}