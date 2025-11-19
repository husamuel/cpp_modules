#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    brain = new Brain();
    std::cout << "Dog have been constructed" << std::endl;
}

Dog::Dog(const Dog& other) : Animal()
{
    type = other.type;
    brain = new Brain(*other.brain);
    std::cout << "Copy constructor called for " << other.type << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if(this != &other)
    {
        Animal::operator=(other);
        this->type = other.type;

        delete brain;
        brain = new Brain(*other.brain);
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << type << " was destroyed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "WOOF" << std::endl;
}

void Dog::set_idea(const std::string& str, int i)
{
    if (brain)
        brain->set_idea(str, i);
}
std::string Dog::get_idea(int i) const
{
    if (brain)
        return brain->get_idea(i);
    return "";
}
