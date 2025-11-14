#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog have been constructed" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog have been destroyed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}