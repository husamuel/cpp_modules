#include "Cat.hpp"

Cat::Cat()
{
    brain = new Brain();
    type = "Cat";
    std::cout << "Cat have been constructed" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat have been destroyed" << std::endl;
}

Cat::Cat(const Cat& other)
{
    type = other.type;
    brain = new Brain(*other.brain);
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        type = other.type;
        delete brain;     
        brain = new Brain(*other.brain);
    }
    std::cout << "Cat copy assignment called" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "MEOW" << std::endl;
}

Brain* Cat::getBrain() const
{
    return brain;
}