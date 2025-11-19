#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "Dog have been constructed" << std::endl;
}

Dog::Dog(const Dog& other) : Animal()
{
    std::cout << "Copy constructor called for " << other.type << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if(this != &other)
    {
        Animal::operator=(other);
        this->type = other.type;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << type << " was destroyed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}