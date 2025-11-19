#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    brain = new Brain();
    std::cout << "Cat have been constructed" << std::endl;
}

Cat::Cat(const Cat& other) : Animal()
{
    type = other.type;
    brain = new Brain(*other.brain);
    std::cout << "Copy constructor called for " << other.type << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        delete brain;
        brain = new Brain(*other.brain);
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

void Cat::set_idea(const std::string& str, int i) {
    if (brain)
        brain->set_idea(str, i);
}
std::string Cat::get_idea(int i) const {
    if (brain)
        return brain->get_idea(i);
    return "";
}
