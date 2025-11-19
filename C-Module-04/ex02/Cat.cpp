#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "Cat have been constructed" << std::endl;
}

Cat::Cat(const Cat& other) : Animal()
{
    std::cout << "Copy constructor called for " << other.type << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if(this != &other)
    {
        Cat::operator=(other);
        this->type = other.type;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << type << " was destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "MEOW" << std::endl;
}