#include "Dog.hpp"

Dog::Dog()
{
    brain = new Brain();
    type = "Dog";
    std::cout << "Dog have been constructed" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog have been destroyed" << std::endl;
}

Dog::Dog(const Dog& other)
{
    type = other.type;
    brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        type = other.type;
        delete brain;     
        brain = new Brain(*other.brain);
    }
    std::cout << "Dog copy assignment called" << std::endl;
    return *this;
}

Brain* Dog::getBrain() const
{
    return brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}